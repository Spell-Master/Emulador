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
| - Vers�o: Spell Master                                            |
| - Nota: Npcs comuns em Esplendor                                  |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------

splendide,218,193,3	script	Fada#spl	4_F_FAIRYKID6,{
	mes "[Fada Exausta]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Espere, n�o se aproxime.";
		mes "N�o suporto o seu cheiro, ele me deixa tonto.";
	} else {
		mes "OdesKoUor Ko NuffSharUden Ko CyaVenah An NudNuffser An KoRivehAdor Mu LarseorAnu O DorNe";
	}
	close;
}

// ------------------------------------------------------------------
splendide,180,223,3	script	Fada#spl2	4_F_FAIRYKID5,{
	mes "[Kalua]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Voc� n�o se veste bem, mas acho que � melhor do que aqueles caras no campo de neve.";
	} else {
		mes "AlahCyamah U MeKoser Ir TimaurRiveh Di LarsRasTi Di AgolKones Or AlahUdenAndu Ee FusRe";
	}
	close;
}

// ------------------------------------------------------------------
splendide,125,227,3	script	Fada#spl3	4_M_FAIRYKID3,{
	mes "[Flowa]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Sem ofensa, mas eu n�o estava te olhando porque simpatizei com voc�.";
		mes "Eu s� estava me perguntando como algu�m consegue andar sendo t�o gordo.";
	} else {
		mes "AnuFuloUor Ko CyaWosnes Ha WosAnuAsh O WosDuAno O ";
		mes "FuloAndueo Ie WosGothLars Ee Tinarmaur Or AlahnahVa Or narAnuFulo So KoCya";
	}
	close;
}

// ------------------------------------------------------------------
splendide,159,164,3	script	Fada#spl4	4_M_FAIRYSOLDIER2,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "� uma vergonha que eu tenha que lutar contra esses monstros.";
		mes "Sou delicada demais para lidar com eles.";
	} else {
		mes "[Fada]";
		mes "RiniHirDieb Ie nahImanMe Di Mush";
		mes "mahnarAsh So HirAnMod O Ras";
		mes "neaLoDath Ha KoRivehWha So Thusnea";
	}
	close;
}

// ------------------------------------------------------------------
splendide,229,54,3	script	Fada#spl5	4_F_FAIRYKID4,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Huh? Voc� � humano.";
		mes "Voc� � melhor do que aqueles Saphas, mas isso n�o quer dizer que voc� seja bonito.";
		next;
		mes "[Fada]";
		mes "Como voc� chegou aqui?";
		mes "Aqui � um lugar sofisticado.";
		mes "Acho que voc� n�o pode ficar aqui conosco.";
	} else {
		mes "ImanAnuUor Yee NeUorVer Ir RivehAshOsa";
		mes "AdorserHir er OsaAlahAno Mu RivehDath";
		next;
		mes "[Fada]";
		mes "LarsFuloSar Yu VilGotheor Yu nes";
		mes "Anuneseor Ie remuSeDieb er ";
		mes "WosLoNud Ko NuffDuIman Ir ";
	}
	close;
}

// ------------------------------------------------------------------
splendide,89,235,5	script	Fada#spl6	4_M_FAIRYKID5,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Lalalalal~Lala~Lalala~";
		mes "Vamos cantar~!";
		mes "Minha voz � fant�stica!";
		next;
		mes "[Fada]";
		mes "Nem pense em se aproximar de mim!";
	} else {
		mes "WehVeldHir Or ThusNorAnu";
		mes "ReImanWos Yu marFuloNor Yee SharneaVrum Ir Ruff";
		next;
		mes "[Fada]";
		mes "BurKoWeh Ie nesThusLu Ee ";
	}
	close;
}

// ------------------------------------------------------------------
splendide,245,243,3	script	Fada#spl7	4_F_FAIRYSOLDIER,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Essa terra era desperdi�ada.";
		mes "Era muito fria e nada podia viver aqui, mas desde que chegamos, est� melhor a cada dia.";
		next;
		mes "[Fada]";
		mes "Agora todos os problemas se foram.";
		mes "Tirando aqueles Saphas feios e gordos.";
		mes "Como nos livraremos deles?";
	} else {
		mes "DiebVohlWeh Ko RasVeldFar Ie AshVohl neaAmanIman Ie DorDuMe No Hireo tassermaur Yee DorAdorNud Ee ";
		mes "NohThorVe O FusImanAman";
		next;
		mes "[Fada]";
		mes "OsaVeldWeh U GothIyazVer Or LarsAnDor Yee TurVeldVil";
		mes "LarsDanaFus An DiebImanmar er Dim tasLoRini Ir WehAndu";
	}
	close;
}

// ------------------------------------------------------------------
splendide,230,142,3	script	Fada#spl8	4_F_FAIRYKID4,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Ah-Ha, eu estou parada assim.";
	} else {
		mes "AgolWhaNe O LoRini";
	}
	close;
}

// ------------------------------------------------------------------
splendide,274,203,3	script	Fada#spl9	4_M_FAIRYKID3,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Ei, voc�! Humano!";
		mes "Como voc� nos encontrou?";
		mes "Como � o seu mundo?";
		mes "� legal l�?";
	} else {
		mes "AnnarNor So marFarAno Di NudThusNei Ir Ir ";
		mes "narVaTi Mu SharDimmaur Or Ano";
		mes "WhaModKo Or eoNeiNor Di ImanDunah O O ";
	}
	close;
}

// ------------------------------------------------------------------
splendide,275,141,3	script	Fada#spl10	4_M_FAIRYSOLDIER,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "N�o fale comigo.";
		mes "O que voc� quer?";
		mes "Vai me culpar por algo, n�o �?";
		next;
		mes "[Fada]";
		mes "N�o quero ouvir a opini�o de ningu�m...";
		mes "Afinal, eu j� sou perfeita!";
		close;
	} else {
		mes "narnahNoh Di WehRiniLars Yee ModAnu";
		mes "LuAlahNe Or FarAnduOsa No AgolKo";
		next;
		mes "[Fada]";
		mes "LarsVilDim No WhaVilFus Ha Ash";
		mes "ReLarsShar Mu AnduLoLon Ie Nufftas";
	}
	close;
}

// ------------------------------------------------------------------
splendide,224,230,3	script	Fada#spl11	4_F_FAIRYKID5,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Ou�a atentamente e aprenda!";
		mes "Vamos cantar e dan�ar!";
		mes "Voc� pode participar!";
		mes "Mova o quadril!";
		mes "Dan�e!";
	} else {
		mes "NuffMushLars Ra WehVilnah Ra DielWeh";
		mes "RivehnarWos Ra YurSharRe";
		mes "TalVaThor O VerWhatas";
		mes "FuloDimIyaz Mu WhaNoreo U ";
		mes "AlahNeLo Ra UorOsa";
		mes "SeAnduMush Ur ";
	}
	close;
}

// ------------------------------------------------------------------
splendide,223,36,3	script	Fada#spl12	4_F_FAIRYSOLDIER,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "N�o quero tocar neles.";
		mes "Mas eles est�o acabando com os meus Yggdrasil Berries.";
		mes "N�o aguento mais!";
		next;
		mes "[Fada]";
		mes "N�o luto muito bem...";
		mes "Mas por nossa gl�ria, eu vou lutar!";
		mes "Eles deviam estar honrados por lutar conosco!";
	} else {
		mes "AshAmanNei Ir LonVeldremu O ";
		mes "AnduSarHir No NudAnumaur Ha Veld";
		mes "Semarmah U VeTingDieb Yu ";
		mes "mahsertas Ra marAmanAdor Ir ";
		next;
		mes "[Fada]";
		mes "TingAgolLu So MushAndumah U neseor";
		mes "WhaDuFulo er ImanThusNe Di Tur";
		mes "DathUornah Ir MemaurDeh Yu Fulo";
		mes "CyaMeDor Ko VeLarsAgol";
	}
	close;
}

// ------------------------------------------------------------------
splendide,305,129,3	script	Fada#spl13	4_F_FAIRYKID,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Hu... que sono.";
		mes "Estou entediada. N�o tenho nada para fazer.";
		mes "At� meus amigos est�o lutando com esses gigantes, mas n�o sou boa o suficiente para ajud�-los.";
		next;
		mes "[Fada]";
		mes "Melhor eu checar a minha maquiagem na sala de vestir.";
		mes "Ou ser� que eu devia dormir para acordar ainda mais bela?";
	} else {
		mes "AnduNothUor O eomaurShar Mu AnduVeld";
		mes "AdorFulotas Ko NorAlahAsh Ie Ala";
		mes "KoOsaLon Ha AnuNeiNoh Di Ting";
		mes "tasKoDiel O IyazGoth";
		next;
		mes "[Fada]";
		mes "OdesmahHir Or mahneaLars So ";
		mes "HirNudAman O AdorWosDu";
		mes "DimYurVa So DanaRuYur";
	}
	close;
}

// ------------------------------------------------------------------
splendide,142,315,3	script	Fada#spl14	4_F_FAIRYSOLDIER,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "N�o � f�cil voar pelo c�u.";
		mes "Mas � melhor do que andar.";
		next;
		mes "[Fada]";
		mes "Voc� � humano? Coitadinho...";
		mes "Voc� n�o pode ter essas lindas asas?";
		mes "Deve ter uma vida pat�tica.";
		mes "� �bvio que n�s, que podemos voar, somos os �nicos aben�oados.";
	} else {
		mes "WharemuLars Ur SharUdenWha Yu Agol";
		mes "LontasSar Ra DathVeAlah Ee Noh";
		mes "LarsLonnah Ko TalnesIman Ie Diel";
		next;
		mes "[Fada]";
		mes "tasSarNuff Or WehFarDieb Ir FarRu";
		mes "FusYurnah So MeAshnar O Noth";
		mes "YurBurDu Yu VeldVaMush So Thor";
		mes "AgolDiebUor No TurnahAla O ";
	}
	close;
}

// ------------------------------------------------------------------
splendide,181,107,5	script	Fada#spl15	4_F_FAIRYSOLDIER,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Limpeza, organiza��o e arruma��o!";
		mes "Essas s�o as palavras que nos descrevem!";
		mes "Os outros s�o sujos e bagun�ados!";
	} else {
		mes "FusYurnah So M ";
		mes "WehFarDieb Ir FarRu ";
		mes "FusYurnah ";
		mes "AgolDiebUor No Tur";
	}
	close;
}

// ------------------------------------------------------------------
splendide,163,264,3	script	Fada#spl16	4_F_FAIRYKID3,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "O que voc� est� olhando!";
		next;
		mes "[Fada]";
		mes "Nossa! Voc� sabe o que � belo quando quando v� algo~?!";
	} else {
		mes "UorVeLars No Ador";
		next;
		mes "[nes]";
		mes "SeGothShar An AshDur";
	}
	close;
}

// ------------------------------------------------------------------
splendide,121,259,3	script	Fada#spl17	4_F_FAIRYKID,{
	mes "[Fada]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Voc� j� foi para o lado leste?";
		mes "L� tem muito gelo~";
		mes "Como o frio...";
	} else {
		mes "VaFuloDor An ";
		mes "WosNuffremu Ha TurAshTi";
		mes "VilTiRini O ";
	}
	close;
}

// ------------------------------------------------------------------
splendide,188,76,5	script	Soldado de Splendide#spl	4_M_FAIRYSOLDIER2,{
	mes "[Soldado de Splendide]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Essa � Splendide, a base dos Laphine.";
	} else {
		mes "SeAshLu Di YurDiebTing Ee VeModTur No NuffLarsVa No ";
	}
	close;
}

// ------------------------------------------------------------------
splendide,201,76,3	script	Soldado de Splendide#spl2	4_M_FAIRYSOLDIER2,{
	mes "[Soldado de Splendide]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Essa � Splendide, a base dos Laphine.";
	} else {
		mes "SeAshLu Di YurDiebTing Ee VeModTur No NuffLarsVa No ";
	}
	close;
}

// ------------------------------------------------------------------
splendide,207,97,5	script	Laphine Meio-Enfileirado#spl	4_M_FAIRYKID2,{
	mes "[Laphine Meio-Enfileirado]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Haap-!";
		mes "Viu? Como se fosse um poste de luz, n�o?";
		specialeffect (EF_LEVEL99_4);
	} else {
		mes "sehrVa";
		mes "IyazAnman Di TurHirCya";
		specialeffect (EF_LEVEL99_4);
	}
	close;
}

// ------------------------------------------------------------------
splendide,210,95,3	script	Laphine Meio-Enfileirado#spl2	4_M_FAIRYKID,{
	mes "[Laphine Meio-Enfileirado]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Uau! �timo!!";
		emotion (e_no1);
	} else {
		mes "MushIyazTur Ee YurDana";
		emotion (e_no1);
	}
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------

spl_in01,190,314,5	script	Oficial de Ceguran�a#spl	4_M_FAIRYSOLDIER2,{
	mes "[Oficial de Seguran�a]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Essa � a pris�o subterr�nea de Splendide.";
		mes "Os culpados e prisioneiros ficam detidos aqui.";
		next;
		mes "[Oficial de Seguran�a]";
		mes "Se voc� fizer algo suspeito tamb�m poder� ser detido, ent�o tome cuidado!";
	} else {
		mes "GothremuAman Ha DimDielNuff";
		mes "GothAnAsh er NohVaAgol Yee CyaOsaDor U Aman U ";
		mes "TurOdesVrum Ir TalDathOsa Ie WosAgolVrum Ha neaNudHir Ha SeAnVil Di narAlahLars Yu";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,281,329,3	script	Guarda de Esplendor#spl	4_M_FAIRYSOLDIER,{
	mes "[Guarda de Esplendor]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Se voc� fizer muito barulho, os prisioneiros trar�o problemas. Ent�o permane�a em sil�ncio.";
	} else {
		mes "AnduVeldRe Ko VeldReFulo So LomaurDu So	So ";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,287,306,3	script	#prision_spl	HIDDEN_NPC,{
	mes "[Prisioneiro de Manuk]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Meu, meu corpo...!";
		mes "Inje��o! Por favor!! Me ajude!";
	} else {
		mes "Gi ha sd I das ";
		mes "Yda sod ja si dsa";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,265,315,0	script	#prision_spl2	HIDDEN_NPC,5,5,{
	OnTouch:
	mes "[Voz vinda de outro lado]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Senhor, por favor!";
		mes "Como posso me comunicar com Manuk?!";
		mes "Sou inocente.";
		mes "Por favor!";
	} else {
		mes "RuffUdeneo Mu VilAsh";
		mes "YurReDur Ha DielTalNe Ko Lars";
		mes "HirVerWeh Yu AnuNud";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,172,225,3	script	Poeta Andarilho#spl	1_M_BARD,{
	cutin ("god_nelluad02",2);
	mes "[Poeta Nell]";
	mes "Oi, voc� ouviu a bela m�sica que est� tocando ao longe?";
	next;
	select("Quem � voc�?");
	cutin ("god_nelluad01",2);
	mes "[Poeta Nell]";
	mes "Quem, eu...?";
	mes "Sou apenas um poeta admirando o ambiente...";
	next;
	mes "[Poeta Nell]";
	mes "Eu vim aqui outro dia e pedi para fazer anota��es sobre esse novo mundo.";
	mes "Ent�o permitiram que eu seguisse os aventureiros at� aqui.";
	next;
	mes "[Poeta Nell]";
	mes "Conheci os Laphines.";
	mes "Foi estranho no come�o...";
	mes "J� que eu n�o falava a l�ngua deles.";
	mes "Mas assim que comecei a tocar...";
	mes "Eles adoraram.";
	next;
	mes "[Poeta Nell]";
	mes "Elas s�o fadas que sabem aproveitar a vida.";
	mes "Como s�o felizes...";
	mes "S�o curiosas...";
	mes "Estou honrado em conhec�-las...";
	next;
	mes "[Poeta Nell]";
	mes "Ent�o, voc� quer me ouvir tocar?";
	next;
	switch(select("Claro.","N�o, obrigado.")) {
		case 1:
		mes "[Poeta Nell]";
		mes "Que m�sica voc� quer??";
		next;
		switch(select("Poema de Bragi","Ritmo Ca�tico","Crep�sculo Sangrento","Anel dos Nibelungos")) {
			case 1:
			cutin ("god_nelluad02",2);
			mes "[Poeta Nell]";
			mes "Poema de Bragi!";
			mes "Voc� tem um bom gosto musical.";
			soundeffect ("bragis_poem.wav",0);
			break;
			case 2:
			cutin ("god_nelluad02",2);
			mes "[Poeta Nell]";
			mes "Ritmo Ca�tico...";
			mes "� uma �tima m�sica, mas eu n�o recomendaria que voc� escute-a durante o jantar...";
			soundeffect ("chaos_of_eternity.wav",0);
			break;
			case 3:
			cutin ("god_nelluad02",2);
			mes "[Poeta Nell]";
			mes "Crep�sculo Sangrento!";
			mes "Voc� gosta de Assassinos?";
			mes "Essa m�sica fala sobre um Assassin Cross que morava no deserto.";
			soundeffect ("assassin_of_sunset.wav",0);
			break;
			case 4:
			cutin ("god_nelluad02",2);
			mes "[Poeta Nell]";
			mes "Anel dos Nibelungos...";
			mes "Essa m�sica conta uma hist�ria interessante~";
			next;
			soundeffect ("ring_of_nibelungen.wav",0);
			mes "^4d4dff Havia um rio chamado Rhein que brilhava como se fosse de ouro.";
			mes "Est� escondido desde muito antes dessa hist�ria ser contada...^000000";
			next;
			mes "^4d4dff Valhalla nasceu da deusa Freya.";
			mes "O invejoso Rocky destruiu a deusa da beleza.^000000";
			mes "^4d4dff Das profundezas surgiu um anel feito de fogo.";
			mes "Um anel t�o poderoso que continha os poderes do deus~^000000";
			next;
			mes "^4d4dff O tesouro de Alberich agora guarda aquele poder.";
			mes "O poder do anel que continha o desejo do deus.^000000";
			next;
			mes "^4d4dff O tesouro foi usado para comprar a alma do mundo.";
			mes "Uma alma comprada com o peso do ouro.^000000";
			next;
			mes "^4d4dff Rocky ficou com medo de perder o controle e transformou Alberich em sapo.";
			next;
			mes "^4d4dff Alberich, em seu �ltimo suspiro, jurou que seu anel amaldi�oar� at� a morte quem o usar.";
			next;
			mes "^4d4dff O usu�rio para sempre ser� amaldi�oado com o ci�me de Rocky.";
			break;
		}
		break;
		case 2:
		cutin ("god_nelluad03",2);
		mes "[Poeta Nell]";
		mes "Por que n�o?";
		mes "Por que voc� ficaria me olhando desse jeito se n�o quer me ouvir tocar?";
		next;
		select("Voc� parece com algu�m que eu conhe�o.");
		cutin ("god_nelluad04",2);
		mes "[Poeta Nell]";
		mes "Eh?";
		mes "Sem chance!";
		mes "Voc� deve estar confundindo...!";
		next;
		mes "[Poeta Nell]";
		mes "Eu tenho um rosto comum...";
		mes "E duvido que j� tenhamos nos encontrado antes.";
		next;
		cutin ("god_nelluad01",255);
		mes "- Nell parece envergonhado, e come�a a tocar uma m�sica complicada -";
		break;
	}
	close2;
	cutin ("god_nelluad01",255);
	end;
}

// ------------------------------------------------------------------
spl_in01,182,213,1	script	Laphine Descansando#spl	4_F_FAIRYKID3,{
	mes "[Laphine Descansando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Aquele poeta � muito misterioso.";
		mes "Desde que voc� chegou...";
		mes "Ele come�ou a tocar m�sica.";
		next;
		mes "[Laphine Descansando]";
		mes "Essa m�sica � da sua terra natal?";
		mes "Eu achei muito boa.";
	} else {
		mes "IyazLarsSe Or An.";
		mes "marLoOsa Yee NeiBur";
		mes "Rinisehrnea Mu...? ";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,181,218,5	script	Laphine Descansando#spl2	4_M_FAIRYKID5,{
	mes "- Ele est� balan�ando a cabe�a no ritmo da m�sica -";
	next;
	mes "[Laphine Descansando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Voc� sabe tocar m�sica assim?";
		mes "Esse ritmo � fant�stico.";
	} else {
		mes "GothTingNoth Di~ nar..";
		mes "DiebIyazNud Yu FarAn";
		mes "nesFarDor U";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,161,213,7	script	Laphine Comendo#spl	4_M_FAIRYSOLDIER,{
	mes "[Laphine Comendo]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Ei voc�!";
		mes "Por que voc� est� me encarando enquanto eu janto?";
	} else {
		mes "[Laphine Comendo]";
		mes "NothFarLu Ra...? ";
		mes "RuffYur..!";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,162,202,5	script	Laphine Anotando#spl	4_F_FAIRYKID,{
	mes "[Laphine Anotando]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Estamos muito impressionados com o poeta.";
		mes "N�s, Laphines, adoramos m�sica.";
		mes "Eu nunca pensei que ouviria uma m�sica t�o ex�tica.";
		next;
		mes "[Laphine Anotando]";
		mes "Eu gostaria de estudar m�sica algum dia.";
		mes "Planejo escrever sobre o estudo dos instrumentos e da m�sica.";
		next;
		mes "[Laphine Anotando]";
		mes "Algum dia voc� deveria ouvir a m�sica do meu povo.";
	} else {
		mes "TiTalLars Ur tasThorNoth O AnImanWha.";
		mes "FusLuRuff..... Mu TingLuAla Yee AnmanAndu";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,167,207,7	script	Laphine Silencioso#spl	4_M_FAIRYKID4,{
	mes "^777777Ele est� quase dormindo mas mesmo assim est� segurando um copo cheio de bebida.";
	mes "Deve estar muito cansado^000000.";
	close;
}

// ------------------------------------------------------------------
spl_in01,189,207,3	script	Funcion�rio Laphine#spl	4_F_FAIRYKID4,{
	mes "[Funcion�rio Laphine]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Hm, e a�?";
		mes "Desculpe, mas n�o vendemos comida para estranhos.";
		next;
		mes "[Funcion�rio Laphine]";
		mes "Voc�s precisam ter cuidado com a comida daqui.";
		mes "Ela � escassa.";
		next;
		mes "[Funcion�rio Laphine]";
		mes "Voc� ter� que encontrar comida em outro lugar.";
	} else {
		mes "VeldAnoWeh Or ";
		mes "TurWos";
		mes "......ah...";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,154,207,5	script	Funcion�rio Laphine#spl2	4_F_FAIRYKID5,{
	mes "[Funcion�rio Laphine]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Esse campo tem um prop�sito militar. Mas tamb�m precisamos de bares.";
		next;
		mes "[Funcion�rio Laphine]";
		mes "Como um soldado poderia aliviar-se do estresse se n�o bebendo...?";
		next;
		mes "[Funcion�rio Laphine]";
		mes "Estamos aqui para apoiar os soldados, providenciando bebidas e entretenimento.";
	} else {
		mes "NorVerNuff Ee Re!";
		mes "remuDurOdes Mu AshFus~!";
		mes "OdesTalWeh Ur??? ";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,122,314,5	script	Soldado de Alta Patente#spl	4_M_FAIRYSOLDIER2,{
	mes "[Soldado de Alta Patente]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Chegaram novos suprimentos?";
		next;
		mes "[Soldado Laphine]";
		mes "Essa espada acabou de chegar...";
		mes "� inspirada nas estrelas, e n�s a testamos cortando as folhas que flutuavam na �gua.";
		next;
		mes "[General Laphine]";
		mes "Hmm, n�o usamos espadas com frequencia. Mas � linda, podemos usar como decora��o.";
	} else {
		mes "NorVerNuff Ee Re....";
		next;
		mes "[Soldado Laphine]";
		mes "FusVerAlah Di ";
		mes "ModNorNor U DimVohlWeh O DimAmannea An WosAnoNoh An AnduMeOdes So TalAdor.";
		next;
		mes "[Soldado de Alta Patente]";
		mes "DurNohHir Ha UorVaThus Di AshNuffLon U mahNuffThus U RuAmanAgol Ir NohHir...?";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,180,201,3	script	Soldado Laphine#spl	4_M_FAIRYSOLDIER2,{
	mes "[Soldado Laphine]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Voc� � um forasteiro, n�o?";
		mes "Eu estou observando-o para impedir que algo ruim aconte�a.";
		next;
		mes "[Soldado Laphine]";
		mes "Voc� est� definitivamente envolvido.";
		mes "Algu�m deixou voc� entrar aqui...";
		mes "Mas eles n�o sabiam o que ia acontecer nesse campo de batalha.";
		next;
		mes "[Soldado Laphine]";
		mes "Mas que instrumento � aquele?";
		mes "N�s temos um parecido...";
		mes "Mas o som � diferente.";
	} else {
		mes "FusVohlAnu Ur Lon.";
		mes "LoUdenFar Ha Dormaur?";
		mes "...marAmanYur Mu.";
	}
	close;
}

// ------------------------------------------------------------------
spl_in01,122,311,1	script	Soldado Laphine#spl2	4_M_FAIRYSOLDIER,{
	mes "[Soldado Laphine]";
	if (isequipped(Ring_Of_Wise_King)) {
		mes "Voc� � um forasteiro?";
		mes "Voc� veio aqui para ver o dep�sito militar dos Laphine?";
		next;
		mes "[General Laphine]";
		mes "Esque�a. Isso � in�til para eles...";
		mes "Como essa espada delicada poderia ser usada por aqueles brutos..?";
	} else {
		mes "NorVerNuff Ee Re....";
		next;
		mes "[Soldado Laphine]";
		mes "FusVerAlah Di ";
		mes "ModNorNor U DimVohlWeh O DimAmannea An WosAnoNoh An AnduMeOdes So TalAdor.";
		next;
		mes "[Soldado Laphine]";
		mes "DurNohHir Ha UorVaThus Di AshNuffLon U mahNuffThus U RuAmanAgol Ir NohHir...?";
	}
	close;
}
