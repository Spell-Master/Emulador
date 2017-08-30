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
| - Nota: Quest de Mudan�a de Classe para Justiceiro.               |
\*-----------------------------------------------------------------*/

que_ng,152,167,3	script	Mestre Miller#gunslingerq	4_M_HUOLDARMY,{
	if (Class == Job_Novice) {
		if (JobLevel < 10 || getskilllv("NV_BASIC") < 9) {
			mes "[Mestre Miller]";
			mes "Interessado em se tornar "+(Sex == SEX_MALE ? "um Justiceiro" : "uma Justiceira")+", eh?";
			mes "Voc� tem potencial, mas n�o tem experi�ncia suficiente.";
			mes "Treine mais um pouco, e depois volte, entendeu?";
			close;
		}
		if (gunslingerq == 0) {
			mes "[Mestre Miller]";
			mes "Eu sou Miller, um treinador de Justiceiros e guardi�o em tempo integral de Lady Selena.";
			mes "Pois bem, do que voc� precisa?";
			mes "Se n�o for importante, ent�o n�o tenho tempo a perder com voc�.";
			next;
			if (select("Nada","Eu quero me tornar Justiceiro.") == 1) {
				mes "[Mestre Miller]";
				mes "N�o disperdice meu tempo.";
				mes "Se voc� quiser se tornar um Justiceiro, volte e fale comigo";
				close;
			}
			mes "[Mestre Miller]";
			mes "Hm. Voc� � muito jovem, mas seus olhos dizem que voc� � bastante ambicios"+(Sex == SEX_MALE ? "o" : "a")+".";
			mes "Voc� ter� que passar em nossa entrevista e curso educacional para se tornar Justiceiro.";
			mes "Voc� quer se candidatar ao cargo?";
			next;
			if (select("Me de algum tempo para pensar","Com certeza!") == 1) {
				mes "[Mestre Miller]";
				mes "Compreens�vel.";
				mes "Se voc� decidir que quer se tornar um Justiceiro, ent�o me conte imediatamente.";
				mes "Eu te ajudarei a come�ar.";
				close;
			}
			mes "[Mestre Miller]";
			mes "�timo, �timo.";
			mes "Muito bem, ent�o vamos come�ar.";
			mes "Leve esta carta para o Sr. S�bio Chifre de Touro, em Payon.";
			mes "Ele � um xam� que ir� julgar se voc� � ou n�o qualificado para se tornar um Justiceiro.";
			gunslingerq = 1;
			setquest (6020);
			close;
		} else if (gunslingerq == 1) {
			mes "[Mestre Miller]";
			mes "Leve essa carta de apresenta��o que escrevi para o Sr. S�bio Chifre de Touro, em Payon.";
			mes "Ele te testar� para ver se voc� pode se tornar um Justiceiro.";
			close;
		} else if (gunslingerq == 2) {
			mes "[Mestre Miller]";
			mes "Hmm... o S�bio Chifre de Touro te pediu para coletar os itens que precisa para fazer o amuleto?";
			mes "Hm. Eu acho que isso faz parte do teste.";
			close;
		} else if (gunslingerq == 3) {
			mes "[Mestre Miller]";
			mes "O S�bio Chifre de Touro te pediu um pouco de leite?";
			mes "Ele deve gostar de voc�, j� que est� pedindo favores.";
			mes "Boa sorte, amigo.";
			close;
		} else if (gunslingerq == 4) {
			mes "[Mestre Miller]";
			mes "Eu espero ouvir boas not�cias de voc� em breve.";
			mes "Voc� sabe, eu n�o tenho d�vida que voc� ir� se tornar um Justiceiro.";
			close;
		} else if (gunslingerq == 5) {
			if (SkillPoint) {
				mes "[Mestre Miller]";
				mes "Hey, voc� tem Pontos de Habilidades sobrando.";
				mes "Use-os antes de vir falar comigo de novo.";
				close;
			}
			mes "[Mestre Miller]";
			mes "Oh, voc� me trouxe um amuleto do S�bio Chifre de Touro?";
			mes "J� tem um tempo que ele n�o d� um pra ningu�m...";
			mes "Estou muito orgulhoso de voc�!";
			next;
			mes "[Mestre Miller]";
			mes "Se o S�bio Chifre de Touro aprova, ent�o eu n�o tenho motivos para rejeitar voc�.";
			mes "Tudo bem ent�o, vou promov�-lo a Justiceiro.";
			mes "Mas primeiro, deixe-me explicar sobre nossa classe mais detalhadamente.";
			next;
			mes "[Mestre Miller]";
			mes "Como um Justiceiro, voc� deve manter sua arma com voc� o tempo todo.";
			mes "A Guilda dos Justiceiros mant�m o controle de todas as Armas e Proj�teis, ent�o voc� s� pode obt�-las dos membros da nossa guilda.";
			next;
			mes "[Mestre Miller]";
			mes "N�o se preocupe, os membros da Guilda dos Justiceiros podem ser encontrados em quase todos os lugares.";
			mes "Enfim, tem que ser desta maneira, por ordem da nossa l�der da guilda, Lady Selena.";
			next;
			mes "[Mestre Miller]";
			mes "Voc� pode ter a chance de conhec�-la um dia desses.";
			mes "De qualquer forma, agora temos que controlar a venda de armas e proj�teis para mant�-los longe de pessoas m�s ou irrespons�veis.";
			next;
			mes "[Mestre Miller]";
			mes "De qualquer forma, para mim � sempre um prazer conversar com outro Justiceiro, ent�o mantenha contato.";
			mes "Que o poder da Terra te proteja em todas as suas aventuras.";
			jobchange (Job_Gunslinger);
			callfunc ("ClearJobVar");
			completequest (6024);
			switch (rand(2)) {
				case 0: getitem (Six_Shooter,1); close;
				case 1: getitem (Branch,1); close;
			}
		}
	} else {
		if (Class == Job_Gunslinger) {
			mes "[Mestre Miller]";
			mes "Espero que voc� mantenha sua arma bem cuidada.";
			mes "Cuide dela, e ela cuidar� de voc�.";
			mes "Lembre-se disso.";
			close;
		} else {
			mes "[Mestre Miller]";
			mes "Se voc� n�o tem nenhum assunto a tratar comigo, ent�o, por favor, siga seu caminho.";
			close;
		}
	}
}

payon,184,65,3	script	S�bio Chifre de Touro#gunslingerq	4_M_LGTGRAND,{
	if (gunslingerq == 1) {
		mes "[S�bio Chifre de Touro]";
		mes "Ol�, que assuntos te trazem � minha presen�a?";
		next;
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "O Sr. Miller me mandou entregar esta carta a voc�.";
		mes "Na verdade, estou interessado em me tornar Justiceiro...";
		next;
		mes "[S�bio Chifre de Touro]";
		mes "Miller, voc� disse?";
		mes "Hm, o Raposa Negra n�o costuma escrever apresenta��es para qualquer um que ele n�o acredite que ser� um bom Justiceiro";
		mes "Sim, eu acho que sei por que ele o mandou a mim.";
		next;
		mes "[S�bio Chifre de Touro]";
		mes "Posso ver em seus olhos que tem um bom cora��o e um forte senso de responsabilidade.";
		mes "Tudo o que precisa � da b�n��o da Terra para te proteger como Justiceiro.";
		next;
		mes "[S�bio Chifre de Touro]";
		mes "Eu posso fazer um amuleto que demonstrar� seu desejo em se tornar um guerreiro da Terra.";
		mes "Para que o apresente ao Mestre dos Justiceiros, vou precisar destes itens...";
		next;
		mes "[S�bio Chifre de Touro]";
		mes "^3355FF1 Tronco^000000,";
		mes "^3355FF3 Felpas^000000,";
		mes "^3355FF3 Zarg�nios^000000,";
		mes "^3355FF10 Cascas^000000,";
		mes "^3355FF3 Ervas Verdes^000000,";
		mes "e ^3355FF3 Cascos Arco-�ris^000000.";
		next;
		mes "[S�bio Chifre de Touro]";
		mes "Depois que eu terminar o amuleto, voc� deve lev�-lo ao Raposa Negra.";
		mes "E ele ir� o ajudar a alcan�ar seu objetivo de se tornar Justiceiro.";
		gunslingerq = 2;
		changequest (6020,6021);
		close;
	} else if (gunslingerq == 2) {
		if (countitem(Zargon) < 3 || countitem(Fluff) < 3 || countitem(Wooden_Block) < 1 || countitem(Shell) < 10 || countitem(Green_Herb) < 3 || countitem(Colorful_Shell) < 3) {
			mes "[S�bio Chifre de Touro]";
			mes "Eu posso fazer um amuleto que demonstrar� seu desejo em se tornar um guerreiro da Terra.";
			mes "Ppara que o apresente ao Mestre dos Justiceiros, vou precisar destes itens...";
			next;
			mes "[S�bio Chifre de Touro]";
			mes "^3355FF1 Tronco^000000,";
			mes "^3355FF3 Felpas^000000,";
			mes "^3355FF3 Zarg�nios^000000,";
			mes "^3355FF10 Cascas^000000,";
			mes "^3355FF3 Ervas Verdes^000000,";
			mes "e ^3355FF3 Cascos Arco-�ris^000000.";
			next;
			mes "[S�bio Chifre de Touro]";
			mes "Depois que eu terminar o amuleto, voc� deve lev�-lo ao Raposa Negra.";
			mes "E ele ir� o ajudar a alcan�ar seu objetivo de se tornar um Justiceiro.";
			close;
		}
		delitem (Zargon,3);
		delitem (Fluff,3);
		delitem (Wooden_Block,1);
		delitem (Shell,10);
		delitem (Green_Herb,3);
		delitem (Colorful_Shell,3);
		gunslingerq = 3;
		changequest (6021,6022);
		mes "[S�bio Chifre de Touro]";
		mes "Ah, voc� voltou com tudo que eu preciso.";
		mes "Por favor, me d� algum tempo para fazer o amuleto.";
		mes "Se voc� voltar daqui a pouco, eu devo ter terminado.";
		close;
	} else if (gunslingerq == 3) {
		mes "[S�bio Chifre de Touro]";
		mes "Oh, voc� chegou na hora.";
		mes "J� faz um tempo que n�o fa�o um desses amuletos, ent�o devo estar um pouco enferrujado.";
		mes "Ainda assim, isso realmente me leva de volta para os dias de minha juventude.";
		next;
		mes "[S�bio Chifre de Touro]";
		mes "Eu estive servindo nesta posi��o de escolher pessoas dignas do amuleto do Justiceiro por algumas d�cadas.";
		mes "Mas antes disso, eu era um jovem aventureiro, como voc�.";
		next;
		mes "[S�bio Chifre de Touro]";
		mes "Parece que foi ontem que eu ganhei meu pr�prio amuleto do Justiceiro, um guerreiro da Terra.";
		mes "Foi quando eu conheci o pai de Selena.";
		mes "Como o tempo pode passar t�o r�pido?";
		next;
		mes "[S�bio Chifre de Touro]";
		mes "Ah...";
		mes "Eu realmente aprecio toda a ajuda de Selena e do Raposa Negra em ajuda em recrutar jovens Justiceiros.";
		mes "Eu estou bastante velho agora, e n�o consigo fazer tudo sozinho.";
		mes "^777777*Suspiro...*^000000";
		mes "Assim � a vida.";
		next;
		mes "[S�bio Chifre de Touro]";
		mes "Antes de voc� ir, posso pedir um pequeno favor?";
		mes "Estou com sede, e eu gostaria de um copo de leite gelado.";
		mes "Voc� poderia me trazer algum?";
		gunslingerq = 4;
		changequest (6022,6023);
		close;
	} else if (gunslingerq == 4) {
		if (countitem(Milk) < 1) {
			mes "[S�bio Chifre de Touro]";
			mes "Eu sou um velho homem que, em breve, se reunir� com a M�e Terra.";
			mes "Voc� faria um favor a este velho Justiceiro de me trazer um copo de ^3131FFleite^000000 gelado, por favor?";
			close;
		}
		delitem (Milk,1);
		gunslingerq = 5;
		changequest (6023,6024);
		mes "[S�bio Chifre de Touro]";
		mes "Oh, obrigado por sua generosidade!";
		mes "Eu vejo que voc� me trouxe um pouco de leite.";
		mes "Ahhhh, del�cia...";
		next;
		mes "[S�bio Chifre de Touro]";
		mes "Eu admiro a paci�ncia, gentileza, e bondade que voc� provou trazendo isto para mim.";
		mes "Sim, essas s�o caracter�sticas que todos n�s queremos ter.";
		next;
		mes "[S�bio Chifre de Touro]";
		mes "Agora, por favor, leve esse amuleto para Miller, o Raposa Negra, com toda minha aprova��o.";
		mes "Eu espero que voc� use sua arma para apoiar a justi�a como um nobre guerreiro da Terra.";
		next;
		mes "[S�bio Chifre de Touro]";
		mes "Eeh...Yeah...Hooom....";
		mes "Eeh...Yeah...Hooom....";
		mes "Maaaaarrraaa Neeey!!!";
		close;
	} else if (gunslingerq == 5) {
		mes "[S�bio Chifre de Touro]";
		mes "Por favor, leve esse amuleto para Miller, o Raposa Negra, com toda a minha aprova��o.";
		mes "Eu espero que voc� use sua arma para apoiar a justi�a como um nobre guerreiro da Terra.";
		next;
		mes "[S�bio Chifre de Touro]";
		mes "Eeh...Yeah...Hooom....";
		mes "Eeh...Yeah...Hooom....";
		mes "Maaaaarrraaa Neeey!!!";
		close;
	} else if (gunslingerq == 6) {
		mes "[S�bio Chifre de Touro]";
		mes "Faz muito tempo que n�o te vejo.";
		mes "Espero que tenha se tornado uma fera inteligente, que usa seus poderes como Justiceiro para protecer o que � bom e justo.";
		close;
	} else {
		mes "[S�bio Chifre de Touro]";
		mes "Zzzzzz...";
		mes "^333333*Uff*^000000";
		close;
	}
}
