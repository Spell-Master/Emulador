/*-----------------------------------------------------------------*\
|             ______ ____ _____ ___   __                            |
|            / ____ / _  / ____/  /  /  /                           |
|            \___  /  __/ __/ /  /__/  /___                         |
|           /_____/_ / /____//_____/______/                         |
|                /\  /|   __    __________ _________                |
|               /  \/ |  /  |  /  ___  __/ ___/ _  /                |
|              /      | / ' | _\  \ / / / __//  __/                 |
|             /  /\/| |/_/|_|/____//_/ /____/_/\ \                  |
|            /__/   |_|      npc Script         \/                  |
|                                                                   |
+-------------------------------------------------------------------+
|                     Projeto Ragnarok Online                       |
+-------------------------------------------------------------------+
| - Vers�o: Spell Master                                            |
| - Nota: Invoca��o de Monstros no Laborat�rio de Somatologia       |
\*-----------------------------------------------------------------*/

lhz_dun01,0,0,0,0	monster	Remover	1682,100,5000,0,0
lhz_dun01,0,0,0,0	monster	Anopheles	1627,70,5000,0,0
lhz_dun01,0,0,0,0	monster	Metaling	1613,50,5000,0,0
lhz_dun01,0,0,0,0	monster	Kavach Icarus	1656,13,5000,0,0
lhz_dun01,0,0,0,0	monster	Errende Ebecee	1655,13,5000,0,0
lhz_dun01,0,0,0,0	monster	Laurell Weinder	1657,11,5000,0,0
lhz_dun01,0,0,0,0	monster	Wickebine Tres	1653,11,5000,0,0
lhz_dun01,0,0,0,0	monster	Armeyer Dinze	1654,8,5000,0,0
lhz_dun01,0,0,0,0	monster	Egnigem Cenia	1652,8,5000,0,0
lhz_dun01,0,0,0,0	monster	Gemini-S58	1681,1,5000,0,0

// ------------------------------------------------------------------
lhz_dun02,0,0,0,0	monster	Laurell Weinder	1657,50,5000,0,0
lhz_dun02,0,0,0,0	monster	Wickebine Tres	1653,50,5000,0,0
lhz_dun02,0,0,0,0	monster	Kavach Icarus	1656,50,5000,0,0
lhz_dun02,0,0,0,0	monster	Errende Ebecee	1655,50,5000,0,0
lhz_dun02,0,0,0,0	monster	Egnigem Cenia	1652,50,5000,0,0
lhz_dun02,0,0,0,0	monster	Armeyer Dinze	1654,50,5000,0,0
lhz_dun02,0,0,0,0	monster	Remover	1682,20,5000,0,0
lhz_dun02,0,0,0,0	monster	Gemini-S58	1681,10,5000,0,0
lhz_dun02,0,0,0,0	monster	Eremes Guile	1635,1,5000,0,0
lhz_dun02,0,0,0,0	boss_monster	Egnigem Cenia	1658,1,7200000,600000,1

// ------------------------------------------------------------------
lhz_dun03,0,0,0,0	monster	Cecil Damon	1638,81,5000,0,0
lhz_dun03,0,0,0,0	monster	Kathryne Keyron	1639,57,5000,0,0
lhz_dun03,0,0,0,0	monster	Margaretha Sorin	1637,42,5000,0,0
lhz_dun03,0,0,0,0	monster	Howard Alt-Eisen	1636,42,5000,0,0
lhz_dun03,0,0,0,0	monster	Eremes Guile	1635,42,5000,0,0
lhz_dun03,0,0,0,0	monster	Seyren Windsor	1634,42,5000,0,0
lhz_dun03,139,158,20,11	monster	Algoz Eremes	1641,1,2580000,2340000,1
lhz_dun03,138,138,36,34	monster	Arquimaga Kathryne	1645,1,2580000,2460000,1
lhz_dun03,114,138,12,16	monster	Lorde Seyren	1640,1,2700000,2400000,1
lhz_dun03,139,117,20,11	monster	Atiradora de Elite Cecil	1644,1,2700000,2500000,1
lhz_dun03,163,138,12,16	monster	Mestre-Ferreiro Howard	1642,1,3000000,2700000,1
lhz_dun03,138,138,36,34	monster	Suma-Sacerdotiza Margaretha	1643,1,3300000,3000000,1

// Invoca��o dos Monstros LV 99 (lhz_dun03) -------------------------
lhz_dun03,0,0,0	script	mvp_lhz_dun03	FAKE_NPC,{
	OnTimer6000000:
		stopnpctimer;
		sleep rand(0,30)*60000;
	OnInit:
	switch(rand(1,6)) {
		case 1: .@x = 140; .@y = 232; break;
		case 2: .@x = 75;  .@y = 138; break;
		case 3: .@x = 140; .@y = 87;  break;
		case 4: .@x = 205; .@y = 140; break;
		case 5: .@x = 123; .@y = 137; break;
		case 6: .@x = 175; .@y = 137; break;
	}
	.@mob = rand(1646,1651);
	monster "lhz_dun03",.@x,.@y,strmobinfo(MOB_JNP_NAME,.@mob),.@mob,1,strnpcinfo(NPC_NAME_UNIQUE)+"::OnMyMVPDead";
	switch(rand(1,6)) {
		case 1: .@x2 = 183; .@y2 = 97;  break;
		case 2: .@x2 = 97;  .@y2 = 96;  break;
		case 3: .@x2 = 47;  .@y2 = 139; break;
		case 4: .@x2 = 231; .@y2 = 140; break;
		case 5: .@x2 = 139; .@y2 = 211; break;
		case 6: .@x2 = 139; .@y2 = 259; break;
	}
	.@mob2 = rand(1640,1645);
	monster "lhz_dun03",.@x2,.@y2,strmobinfo(MOB_JNP_NAME,.@mob2),.@mob2,1,strnpcinfo(NPC_NAME_UNIQUE)+"::OnMy99Dead";
	end;

	OnMyMVPDead:
	killmonster "lhz_dun03",strnpcinfo(NPC_NAME_UNIQUE)+"::OnMy99Dead";
	initnpctimer;
	OnMy99Dead:
	end;
}

// ------------------------------------------------------------------
lhz_dun04,0,0,0,0	monster	Randel	2221,42,5000,0,0
lhz_dun04,0,0,0,0	monster	Flamel	2222,42,5000,0,0
lhz_dun04,0,0,0,0	monster	Celia	2223,81,5000,0,0
lhz_dun04,0,0,0,0	monster	Chen	2224,42,5000,0,0
lhz_dun04,0,0,0,0	monster	Gertie	2225,57,5000,0,0
lhz_dun04,0,0,0,0	monster	Alphoccio	2226,42,5000,0,0
lhz_dun04,0,0,0,0	monster	Trentini	2227,42,5000,0,0
lhz_dun04,0,0,0,0	monster	Paladino Randel	2228,1,3300000,3000000,1
lhz_dun04,0,0,0,0	monster	Cridaor Flamel	2229,1,3300000,3000000,1
lhz_dun04,0,0,0,0	monster	Professora Celia	2230,1,3300000,3000000,1
lhz_dun04,0,0,0,0	monster	Mestre Chen	2231,1,3300000,3000000,1
lhz_dun04,0,0,0,0	monster	Desordeira Gertie	2232,1,3300000,3000000,1
lhz_dun04,0,0,0,0	monster	Menestrel Alphoccio	2233,1,3300000,3000000,1
lhz_dun04,0,0,0,0	monster	Cigana Trentini	2234,1,3300000,3000000,1

// Invoca��o dos Monstros LV 99 (lhz_dun04) -------------------------
lhz_dun04,0,0,0	script	mvp_lhz_dun04	FAKE_NPC,{
	OnTimer6000000:
		stopnpctimer;
		sleep rand(0,30)*60000;
	OnInit:
	switch(rand(1,7)) {
		case 1: .@x = 77;  .@y = 251; break;
		case 2: .@x = 147; .@y = 224; break;
		case 3: .@x = 219; .@y = 219; break;
		case 4: .@x = 244; .@y = 120; break;
		case 5: .@x = 149; .@y = 41;  break;
		case 6: .@x = 53;  .@y = 109; break;
		case 7: .@x = 149; .@y = 151; break;
	}
	.@mob = rand(2235,2241);
	monster "lhz_dun04",.@x,.@y,strmobinfo(MOB_JNP_NAME,.@mob),.@mob,1,strnpcinfo(NPC_NAME_UNIQUE)+"::OnMyMVPDead";
	switch(rand(1,7)) {
		case 1: .@x2 = 77;  .@y2 = 251; break;
		case 2: .@x2 = 147; .@y2 = 224; break;
		case 3: .@x2 = 219; .@y2 = 219; break;
		case 4: .@x2 = 244; .@y2 = 120; break;
		case 5: .@x2 = 149; .@y2 = 41;  break;
		case 6: .@x2 = 53;  .@y2 = 109; break;
		case 7: .@x2 = 149; .@y2 = 151; break;
	}
	.@mob2 = rand(2228,2234);
	monster "lhz_dun04",.@x2,.@y2,strmobinfo(MOB_JNP_NAME,.@mob2),.@mob2,1,strnpcinfo(NPC_NAME_UNIQUE)+"::OnMy99Dead";
	end;

	OnMyMVPDead:
	killmonster "lhz_dun04",strnpcinfo(NPC_NAME_UNIQUE)+"::OnMy99Dead";
	initnpctimer;
	OnMy99Dead:
	end;
}