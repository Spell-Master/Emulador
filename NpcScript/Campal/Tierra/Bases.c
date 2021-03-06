/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__| (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Cria��o: Spell Master 21/02/2017                                |
|  Bases da Batalha Campal Tierra (Terapeuta e Recompensa)          |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [Terapeutas]
//-------------------------------------------------------------------
bat_a01,4,1,0	script	TierraTherapist	CLEAR_NPC,{
	specialeffect(EF_HEAL,AREA,playerattached());
	mes("[Terapeuta]\n"
		"Por enquanto apenas descanse, suas dores ser�o curadas em breve.");
	close;

	OnInit:
	stopnpctimer;
	end;

	OnEnable:
	initnpctimer;
	end;

	OnStop:
	stopnpctimer;
	end;

	OnTimer20000:
	specialeffect(EF_SANCTUARY);
	// Azul
	areapercentheal(strnpcinfo(NPC_MAP),46,370,54,378,100,100);
	areawarp(strnpcinfo(NPC_MAP),46,370,54,378,"bat_a01",354,340);
	// Vermelho
	areapercentheal(strnpcinfo(NPC_MAP),38,12,47,21,100,100);
	areawarp(strnpcinfo(NPC_MAP),38,12,47,21,"bat_a01",354,57);
	initnpctimer;
	end;
}
bat_a01,53,377,3	duplicate(TierraTherapist)	Terapeuta#T_blueTean	4_F_SISTER
bat_a01,45,19,3	duplicate(TierraTherapist)	Terapeuta#T_redTean	4_F_SISTER

//-------------------------------------------------------------------
// - [Recompensas] -
//-------------------------------------------------------------------
// - @BF_Badge1: Emblema de bravura
// - @Vit�ria: 3 emblemas
// - @Derrota: 1 emblema
// - @Empate: 2 emblemas
//-------------------------------------------------------------------
// Azul
bat_a01,53,377,3	script	Axl Rose#T_blueTean	4_M_KY_HEAD,{
	mes("[Axl Rose]");
	if ($@TierraBlueVictory == 1) {
		mes("Com sua ajuda nosso ex�rcito de Guillaume sa�mos vit�riosos na batalha!\n"
			"Muito obrigado pelo seu esfor�o e est� aqui sua recompensa!");
		getitem(BF_Badge1,3);
	} else if ($@TierraRedVictory) {
		mes("Infelismente o ex�rcito de Croix venceu.\n"
			"Mas essa guerra est� longe de terminar e essa s� foi mais uma batalha!");
		next;
		mes("[Axl Rose]\n"
			"Mesmo assim somos gratos pela sua ajuda e est� aqui sua recompensa.");
		getitem(BF_Badge1,1);
	} else {
		mes("Nossa essa batalha foi inten�a!\n"
			"Gra�as a sua ajuda terminamos empatados, por isso est� aqui sua recompensa.");
		getitem(BF_Badge1,2);
	}
	warp("bat_room",155,150);
	bg_leave;
	end;

	OnInit:
	disablenpc(strnpcinfo(NPC_NAME));
	end;
}

//-------------------------------------------------------------------
// Vermelho
bat_a01,45,19,3	script	Swandery#T_redTean	4_M_CRU_HEAD,{
	mes("[Swandery]");
	if ($@TierraRedVictory == 1) {
		mes("Com sua ajuda nosso ex�rcito de Guillaume sa�mos vit�riosos na batalha!\n"
			"Muito obrigado pelo seu esfor�o e est� aqui sua recompensa!");
		getitem(BF_Badge1,3);
	} else if ($@TierraBlueVictory == 1) {
		mes("Infelismente o ex�rcito de Guillaume venceu.\n"
			"Mas essa guerra est� longe de terminar e essa s� foi mais uma batalha!");
		next;
		mes("[Swandery]\n"
			"Mesmo assim somos gratos pela sua ajuda e est� aqui sua recompensa.");
		getitem(BF_Badge1,1);
	} else {
		mes("Nossa essa batalha foi inten�a!\n"
			"Gra�as a sua ajuda terminamos empatados, por isso est� aqui sua recompensa.");
		getitem(BF_Badge1,2);
	}
	warp("bat_room",155,150);
	bg_leave;
	end;

	OnInit:
	disablenpc(strnpcinfo(NPC_NAME));
	end;
}
