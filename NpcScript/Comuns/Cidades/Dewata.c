/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__  (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|   Ragnarok - Npc Script                        |
|                                                                   |
+-------------------------------------------------------------------+
| - Copyright: Spell Master                                         |
| - Copyright: ????????????                                         |
| - Info: Npcs comuns na cidade Dewata.                             |
\*-----------------------------------------------------------------*/

dewata,181,88,6	script	Jovem#dew	4_M_DEWMAN,{
	mes "[Jovem]";
	mes "A ^8B4513Praia de Dewata^000000 n�o � linda?";
	mes "As crian�as sempre brincam nesta praia.";
	mes "Isto me lembra da minha juventude.";
	next;
	mes "[Jovem]";
	mes "Ao anoitecer, voc� pode ver fogos de artif�cio na praia.";
	mes "Com a brisa do oceano, o bater das ondas, e fogos de artif�cios iluminando o c�u.";
	mes "O c�u noturno � um momento de beleza!";
	close;
}

// ------------------------------------------------------------------
dewata,179,204,4	script	Jovenzinha#dew	4_M_DEWWOMAN,{
	mes "[Jovenzinha]";
	mes "Quando se est� do lado de fora da cidade, e encontra ^FF0000Tigres, Mongeeys, ou porcos^000000.";
	mes "Tenha a certeza de evit�-los.";
	next;
	select("O que quer dizer?");
	mes "[Jovenzinha]";
	mes "Eu ainda n�o vi, mas a lenda diz que h� um monstro cruel chamado ^FF0000Vazamento^000000.";
	mes "Que pode se transformar em um animal hipnotizar as pessoas e mat�-las.";
	next;
	mes "[Jovenzinha]";
	mes "Voc� conhece os perigos deste mundo.";
	mes "N�o faz mal tomar um pouco de cuidado mesmo se for somente uma lenda urbana.";
	close;
}

// ------------------------------------------------------------------
dewata,221,237,5	script	Apreciador de Frutas#dew	4_M_DEWMAN,{
	mes "[Apreciador de Frutas]";
	mes "O que h� de errado com a sua faaaaaace?";
	mes "Voc� deve ser muito ignorante!";
	next;
	mes "[Apreciador de Frutas]";
	mes "Permita-me que eu lhe encha com um pouco de conhecimento.";
	next;
	mes "[Apreciador de Frutas]";
	mes "Posso ser jovem, mas ningu�m sabe mais de ^777700Coqueiros^000000 do que eu.";
	mes "Muito bem!";
	mes "O que deseja saber?";
	next;
	switch (select("Sobre a casca..","Sobre a polpa...","Sobre o n�cleo...","Nada, obrigado.")) {
		case 1:
		mes "[Apreciador de Frutas]";
		mes "Ent�o, quer saber mais sobre a polpa?";
		mes "Deixe-me explicar.";
		next;
		mes "[Apreciador de Frutas]";
		mes "Normalmente, a casca do c�co � utilizada para fazer �leo.";
		mes "�leo de c�co � um ingrediente utilizado em diversos tipos de pratos.";
		next;
		mes "[Apreciador de Frutas]";
		mes "De qualquer modo, nos referimos ao �leo que v�m do c�co por �leo de C�co.";
		mes "O qual � bem conhecido pela sua qualidade.";
		next;
		mes "[Apreciador de Frutas]";
		mes "Os restos da produ��o do �leo s�o secados, e usados como combust�vel para cozinhar o aquecer.";
		next;
		mes "[Apreciador de Frutas]";
		mes "Ele queima adequadamente e tem um cheiro �timo, n�o se consegue melhor que isso.";
		next;
		mes "[Apreciador de Frutas]";
		mes "Muito bem!!";
		mes "Isso � tudo sobre a polpa, demora muito explicar todos os efeitos �teis da fruta.";
		next;
		mes "[Apreciador de Frutas]";
		mes "N�o � como se isso fosse o limite do meu conhecimento.";
		mes "N�o me entenda mal!";
		close;
		case 2:
		mes "[Apreciador de Frutas]";
		mes "Ent�o deseja saber sobre o interior da fruta?";
		mes "Deixe-me explicar.";
		next;
		mes "[Apreciador de Frutas]";
		mes "C�cos t�m duas camadas de polpa.";
		mes "Por fora � duro, e o interior � macio...";
		next;
		mes "[Apreciador de Frutas]";
		mes "Hmm... Sim!";
		mes "A polpa do C�co � um pouco mais dura do que a de uma Noz.";
		mes "Deve ser por causa da �gua contida dentro.";
		next;
		mes "[Apreciador de Frutas]";
		mes "Dentro da casca, h� cerca de 300cc de �gua, o que � muito �til para saciar a sede do povo.";
		mes "J� que a ilha de Dewata possui um clima muito quente.";
		next;
		mes "[Apreciador de Frutas]";
		mes "E n�o jogamos fora depois de tomarmos toda a �gua dentro dele!!";
		next;
		mes "[Apreciador de Frutas]";
		mes "Podemos fazer cantios de qualidade usando eles!";
		mes "Como eu disse, ele tem uma casca dura o bastante para que possa ser usada como uma garrafa d'�gua.";
		next;
		mes "[Apreciador de Frutas]";
		mes "Tamb�m � �timo para fazer carv�o.";
		mes "Carv�o feito do c�co � muito conhecido por durar muito mais e pela qualidade do fogo.";
		next;
		mes "[Apreciador de Frutas]";
		mes "As pessoas adoram cozinhar frutos do mar e frango com carv�o feito de c�co..";
		next;
		mes "[Apreciador de Frutas]";
		mes "Ele possui um b�nus extra por queimar e expelir o delicioso aroma de c�co.";
		next;
		mes "[Apreciador de Frutas]";
		mes "Ok!!";
		mes "Essa � toda a informa��o sobre a polpa, levaria muito tempo para explicar todas as suas utilidades.";
		next;
		mes "[Apreciador de Frutas]";
		mes "N�o � como se isso fosse o limite do meu conhecimento.";
		mes "N�o me entenda mal!";
		close;
		case 3:
		mes "[Apreciador de Frutas]";
		mes "Ent�o, quer saber mais sobre o n�cleo?";
		mes "Deixe-me explicar.";
		next;
		mes "[Apreciador de Frutas]";
		mes "O n�cleo dentro da polpa dura � usado como um digestivo natural.";
		next;
		mes "[Apreciador de Frutas]";
		mes "N�o h� muito o que dizer sobre o n�cleo..";
		next;
		mes "[Apreciador de Frutas]";
		mes "Mas garantimos usar todos os recursos da futa.";
		next;
		mes "[Apreciador de Frutas]";
		mes "N�o concorda?";
		close;
		case 4:
		mes "[Apreciador de Frutas]";
		mes "Arrgg!";
		mes "Voc� n�o possui interesse no mundo!";
		close;
	}
}

// ------------------------------------------------------------------
dewata,159,81,4	script	Turista#dew	4_M_SITDOWN,{
	mes "[Nasolo]";
	mes "Uau. Oceano l�mpido, uma praia aquecida...";
	mes "Perfeito para um encontro com a namorada...";
	next;
	mes "[Nasolo]";
	mes "Se eu tivesse uma...";
	emotion(e_sob);
	next;
	mes "[Nasolo]";
	mes "Fico pensando quando minha princesa vir�...";
	emotion(e_sigh);
	close;
}

// ------------------------------------------------------------------
dewata,154,107,4	script	Turista#dew2	4_M_04,{
	mes "[Turista]";
	mes "Uau...";
	mes "Quanto ele j� comeu?";
	emotion(e_hmm);
	next;
	mes "[Turista]";
	mes "Ele deve ser um comil�o, n�o o Gourmet...";
	next;
	mes "[Turista]";
	mes "J� esteve em Prontera?";
	mes "Acho que j� o vi em algum lugar..";
	close;
}

// ------------------------------------------------------------------
dewata,97,207,4	script	Turista#dew3	1_F_SIGNZISK,{
	mes "[Turista]";
	mes "Oh... Eu sa� e peguei o guia tur�stico errado...";
	next;
	mes "[Turista]";
	mes "Este 'hombre' � um verdadeiro dorminhoco...";
	mes "Porque prolongar isso..";
	emotion(e_spin);
	next;
	mes "[Turista]";
	mes "Preciso mudar meu agente de viagem...";
	emotion(e_sigh);
	close;
}

// ------------------------------------------------------------------
dewata,100,206,4	script	Turista#dew4	1_M_ORIENT01,{
	mes "[Turista]";
	mes "Ei, Vamos l�!";
	mes "Se apresse, enquanto o guia tur�stico est� explicando.";
	next;
	mes "[Turista]";
	mes "Qual �... n�o parece que ele vai parar de falar t�o cedo.";
	close;
}

// ------------------------------------------------------------------
dewata,101,206,4	script	Turista#dew5	4_F_01,{
	mes "[Turista]";
	mes "N�o vai se perder sem um guia?";
	next;
	mes "[Turista]";
	mes "N�s j� nos perdemos da �ltima vez...";
	close;
}

// ------------------------------------------------------------------
dewata,99,203,4	script	Turista#dew6	4_M_SAGE_C,{
	mes "[Turista]";
	mes "Oh. Isso � muito interessante.";
	mes "Um templo que adora Buddha...";
	emotion(e_ok);
	next;
	mes "[Turista]";
	mes "Mas eu n�o entendo toda a simbologia aqui.";
	next;
	mes "[Turista]";
	mes "T�o lindo...";
	mes "Fico imaginando quem construiu este lugar?";
	close;
}

// ------------------------------------------------------------------
dewata,279,213,4	script	Turista#dew7	4_M_LIEMAN,{
	mes "[Turista]";
	mes "Uau. Isso � muito confort�vel.";
	next;
	mes "[Turista]";
	mes "Estou tendo um �timo momento, s� relaxando.";
	next;
	mes "[Turista]";
	mes "Voc� poderia deitar a� tamb�m.";
	mes "Uma vez que o fizer, n�o ir� querer se levantar mais.";
	next;
	mes "[Turista]";
	mes "� por isso que n�o me movo daqui h� uma semana!";
	mes "Hahahaha.";
	emotion(e_heh);
	close;
}

// ------------------------------------------------------------------
dewata,67,186,0	script	Monge#dew	4_M_BUDDHIST,{
	mes "[Monge]";
	mes "Sou um monge e passo meus dias fazendo estudos religiosos.";
	next;
	mes "[Monge]";
	mes "Eu acabei de voltar da peregrina��o ao Templo Borobudur com meus outros companheiros monges...";
	next;
	mes "[Monge]";
	mes "O Templo de Borobudur recebe muitas visitas peregrinas.";
	mes "J� que � um dos poucos templos restantes usados para adorar ao Grande Buddha.";
	close;
}

// ------------------------------------------------------------------
dewata,65,188,0	script	Monge#dew2	4_M_BUDDHIST,{
	mes "[Monge]";
	mes "O Templo de Borobudur � um dos poucos templos restantes usados para adorar ao Grande Buddha.";
	next;
	mes "[Monge]";
	mes "Eu n�o entendo porque existem t�o pouos templos que seguem nossa forma de agir...";
	close;
}

// ------------------------------------------------------------------
dewata,63,190,0	script	Monge#dew3	4_M_BUDDHIST,{
	mes "[Monge]";
	mes "Voc� � um turista?";
	mes "Voc� pode fazer uma oferta e um pedido para um dos santu�rios.";
	next;
	mes "[Monge]";
	mes "Nosso Grande Buddha vai realizar seu pedido..";
	close;
}

// ------------------------------------------------------------------
dewata,62,192,0	script	Monge#dew4	4_M_BUDDHIST,{
	mes "[Monge]";
	mes "Nosso Grande Buddha � o rei das almas e o l�der de todos os deuses.";
	next;
	mes "[Monge]";
	mes "As tribos de Dewata acreditem em Buddha.";
	mes "O estranho � que eles definem Buddha como v�rias criaturas diferentes.";
	next;
	mes "[Monge]";
	mes "N�o tenho certeza do motivo para isto.";
	mes "Talvez seja pela quantidade de tribos em Dewata com diferentes caracter�sticas.";
	close;
}

// ------------------------------------------------------------------
dewata,75,122,6	script	Monge#dewt5	4_M_BUDDHIST,{
	mes "[Monge]";
	mes "Voc� � uma pessoa estranha aqui. O que traz voc� a este lugar calmo?";
	next;
	switch (select("Estou visitando","N�o h� motivos especiais")) {
		case 1:
		mes "[Monge]";
		mes "Oh, voc� � turista.";
		mes "Essa � a '^0000FFPagoda^000000' adorando ao Grande Buddha.";
		mes "Por favor, tenha respeito aos monges orando por aqui.";
		close;
		case 2:
		mes "[Monge]";
		mes "Tenha um bom dia...";
		close;
	}
}

// ------------------------------------------------------------------
dewata,69,101,6	script	Monge#dewt6	4_M_BUDDHIST,{
	mes "[Monge]";
	mes "N�s temos uma pagoda para a adora��o dos Buddhas.";
	mes "Cada templo tem uma dessas torres, entretanto, n�o s�o muitas as pessoas que v�m aqui, exceto os Monges.";
	next;
	switch (select("Entendo...","Explicar sobre os Buddhas","Ah, certo.")) {
		case 1:
		mes "[Monge]";
		mes "Voc� deve sentir a compaix�o do nosso Buddha!";
		close;
		case 2:
		mes "[Monge]";
		mes "Buddha � nosso deus da mitologia de Dewata, ele � o rei das almas e o l�der dos deuses do bem.";
		next;
		mes "[Monge]";
		mes "Buddha � o guardi�o das almas a quem frequentemente descreveu na dan�a tradicional.";
		mes "Como lutando contra o mago Rangda.";
		next;
		mes "[Monge]";
		mes "Em Dewata n�s acreditamos que h� muitas entidades protegendo cada ilha e as tribos locais.";
		mes "Ent�o, temos diferentes manifesta��es do Buddha.";
		mes "Geralmente descritas como um urso, tigre, drag�o, cobra, ou le�o.";
		next;
		mes "[Monge]";
		mes "O Grande Le�o � um dos famosos Buddhas adorados em Dewata.";
		next;
		mes "[Monge]";
		mes "Espero que a explica��o tenha sido satisfat�ria.";
		mes "Pode me perguntar se ainda tiver quest�es em mente.";
		close;
		case 3:
		mes "[Monge]";
		mes "Tenha um bom dia...";
		close;
	}
}

// ------------------------------------------------------------------
dewata,71,79,6	script	Monge#dewt7	4_M_BUDDHIST,{
	mes "[Monge]";
	mes "Essa torre foi constru�da na ponta de um barranco costeiro.";
	mes "Voc� pode orar sentindo uma leve brisa do oceano passar pelos cabelos.";
	next;
	mes "[Monge]";
	mes "Venha, voc� deve sentir a compaix�o do nosso Buddha nesse clima maravilhoso.";
	close;
}

// ------------------------------------------------------------------
dewata,211,272,4	script	Sr. Jiawang#dew	4_M_DEWOLDMAN,{
	mes "[Sr. Jiawang]";
	mes "Estes dias, estamos recebendo visitas de v�rios casais em lua de mel.";
	next;
	mes "[Sr. Jiawang]";
	mes "Deve ser por causa da beleza do cen�rio, certo?";
	next;
	mes "[Sr. Jiawang]";
	mes "Estou feliz com meu neg�cio.";
	mes "Espero que todos tenhamos muitas visitas como estas.";
	next;
	mes "[Sr. Jiawang]";
	mes "Ah! voc� deveria trazer seu amor para Dewata na sua noite de n�pcias.";
	mes "Eu lhe farei um precinho bacana.";
	close;
}

// ------------------------------------------------------------------
dewata,245,244,4	script	Sr. Dingwan#dew	4_M_DEWMAN,{
	mes "[Sr. Dingwan]";
	mes "Argg. Isto est� me deixando com raiva!";
	emotion(e_an);
	next;
	mes "[Sr. Dingwan]";
	mes "Como mais e mais casais podem vir aqui?";
	next;
	mes "[Sr. Dingwan]";
	mes "E porque eles agem t�o apaixonadinhos?";
	mes "Qual � o problema?";
	next;
	mes "[Sr. Dingwan]";
	mes "D� um tempo, mostrem um pouco de respeito pelas pessoas que trabalham aqui...";
	close;
}

// ------------------------------------------------------------------
dewata,233,263,0	script	Casal Apaixonado#dew	4_M_ROGUE,{
	mes "[Marido Apaixonado]";
	mes "Voc� � a coisa mais linda deste mundo, meu amor.";
	emotion(e_kis);
	next;
	mes "[Esposa Apaixonada]";
	mes "S�rio?";
	mes "Sou t�o linda assim?";
	mes "Eu te amo, querido.";
	emotion(e_kis2, 0, "Casal Apaixonado#dew2");
	next;
	mes "[Casal Apaixonado]";
	mes "Hahahahahahahahahahahahahahahahahahahahaha";
	mes "Hohohohohohohohohohohohohohohohohohohohoho";
	emotion(e_heh);
	emotion(e_heh, 0, "Casal Apaixonado#dew2");
	next;
	mes "[Marido Apaixonado]";
	mes "Vamos agora, estou me cansando disso. Vamos.";
	close;
}

// ------------------------------------------------------------------
dewata,234,263,0	script	Casal Apaixonado#dew2	4_F_JOB_HUNTER,{
	mes "[Esposa Apaixonada]";
	mes "Meu amor.";
	mes "Voc� sabe que flor � essa?";
	emotion(e_what);
	next;
	mes "[Marido Apaixonado]";
	mes "Hmm? Eu n�o sei.";
	mes "Mas � realmente linda.";
	next;
	mes "[Esposa Apaixonada]";
	mes "Amor...";
	mes "Quem � mais bonita?";
	mes "Eu ou a flor?";
	emotion(e_what);
	next;
	mes "[Marido Apaixonado]";
	mes "N�o importa o qu�o bonita seja a flor.";
	mes "Voc� sempre ser� mais linda.";
	emotion(e_kis, 0, "Casal Apaixonado#dew");
	next;
	mes "[Esposa Apaixonada]";
	mes "S�rio?";
	mes "Sou t�o linda assim?";
	mes "Eu te amo, docinho.";
	emotion(e_kis2);
	next;
	mes "[Casal Apaixonado]";
	mes "Hahahahahahahahahahahahahahahahahahahahaha";
	mes "Hohohohohohohohohohohohohohohohohohohohoho";
	emotion(e_heh, 0, "Casal Apaixonado#dew");
	emotion(e_heh);
	next;
	mes "[Esposa Apaixonada]";
	mes "D� um tempo, isso � entediante.";
	mes "Vamos continuar.";
	close;
}

// ------------------------------------------------------------------
dewata,269,208,4	script	Garotinho#dew	4_M_DEWBOY,{
	mes "[Garotinho]";
	mes "Ei "+(Sex == SEX_MALE ? "mano" : "mana")+", olhe aquele cara!";
	next;
	mes "[Garotinho]";
	mes "Ele est� ali deitado h� uma semana sem fazer nada...";
	next;
	mes "[Garotinho]";
	mes "Quem � aquele cara?";
	emotion(e_what);
	next;
	mes "[Garotinho]";
	mes "Eu n�o quero ser um pregui�oso como ele quando eu crescer.";
	close;
}

// ------------------------------------------------------------------
dewata,227,129,4	script	Sarr#dew	4_M_DEWBOY,{
	mes "[Sarr]";
	mes "Eles est�o se escondendo, ent�o eu devo procur�-los.";
	mes "Irei encontr�-los, com certeza!";
	next;
	mes "[Sarr]";
	mes "Um.";
	next;
	mes "[Sarr]";
	mes "Dois. Tr�s.";
	next;
	mes "[Sarr]";
	mes "Quatro. Cinco. Seis.";
	next;
	mes "[Sarr]";
	mes "... ... ... ...";
	next;
	mes "[Sarr]";
	mes "Noventa e nove.";
	mes "Cem!!! L� vou eu!.";
	close;
}

// ------------------------------------------------------------------
dewata,239,140,4	script	Siyak#dew	4_M_DEWGIRL,{
	mes "[Siyak]";
	mes "Ei, vamos l�, saia da�.";
	mes "Ele ir� me encontrar..";
	next;
	mes "[Sarr]";
	mes "Eu encontrei o Siyak!!";
	mes "Pode sair, pode sair!!";
	emotion(e_omg);
	emotion(e_gg, 0, "Sarr#dew");
	emotion(e_gg, 0, "Sipo#dew");
	next;
	mes "[Siyak]";
	mes "Arrgg!!";
	mes "� tudo culpa sua.!!";
	emotion(e_an);
	close;
}

// ------------------------------------------------------------------
dewata,193,145,4	script	Sipo#dew	4_M_DEWBOY,{
	mes "[Sipo]";
	mes "Sarr n�o vai me encontrar aqui, n�o �?";
	next;
	mes "[Sarr]";
	mes "Eu encontrei Siyak!!";
	mes "Saia, saia!!";
	emotion(e_gg, 0, "Sarr#dew");
	emotion(e_omg, 0, "Siyak#dew");
	emotion(e_gg);
	next;
	mes "[Sipo]";
	mes "Hehe. Agora Siyak � o PEGO. Vou continuar me escondendo aqui.";
	close;
}

// ------------------------------------------------------------------
dewata,228,177,4	script	Majya#dew	4_M_DEWBOY,{
	mes "[Majya]";
	mes "Eu estava brincando de Esconde-Esconde com meus amigos...";
	next;
	mes "[Majya]";
	mes "Eu estava parada aqui, e n�o me encontram h� mais de 3 horas...";
	emotion(e_hmm);
	next;
	mes "[Majya]";
	mes "O que devo fazer, sair?";
	mes "Eu n�o quero ser a PEGA...";
	close;
}

// ------------------------------------------------------------------
dewata,278,100,4	script	Crian�a Desaparecida#dew	4_F_KID2,{
	mes "[Ukki]";
	mes "WaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaa.";
	emotion(e_sob);
	next;
	mes "["+strcharinfo(CHAR_NAME)+"]";
	mes "Hey, Garotinha...";
	next;
	mes "[Ukki]";
	mes "WaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaaWaa.";
	emotion(e_sob);
	next;
	mes "[Ukki]";
	mes "Mam�e. Papai.";
	mes "Onde est�o voc�s.....!. Waa.";
	emotion(e_sob);
	next;
	mes "["+strcharinfo(CHAR_NAME)+"]";
	mes "... ... ...";
	emotion(e_dots);
	close;
}

// ------------------------------------------------------------------
dewata,249,87,4	script	M�e#dew	4W_F_01,{
	mes "[M�e]";
	mes "Ukki. Ukki. Aonde ela foi?";
	emotion(e_wah);
	next;
	mes "[M�e]";
	mes "N�o posso tirar os olhos dela nem por um segundo...";
	next;
	mes "[M�e]";
	mes "Ukki.";
	emotion(e_wah);
	close;
}

// ------------------------------------------------------------------
dewata,251,85,6	script	Pai#dew	4W_M_01,{
	mes "[Pai]";
	mes "Querida, Ukki se perdeu novamente?";
	emotion(e_what);
	next;
	mes "[Pai]";
	mes "Arrgg...";
	mes "N�o posso ir a lugar algum com ela...";
	mes "Quantas vezes j� foram?";
	emotion(e_swt2);
	next;
	mes "[Pai]";
	mes "Ela se perdeu em Louyang, Amatsu, Moscovia, Brasilis, Kunlun, e em Ayothaya...";
	emotion(e_swt2);
	next;
	mes "[Pai]";
	mes "O que?!";
	mes "J� v�o fazer 7 vezes incluindo esta em Dewata...";
	mes "7 vezes!!!!!!";
	emotion(e_otl);
	close;
}

// ------------------------------------------------------------------
dewata,278,281,4	script	Vov�#dew	4_M_DEWOLDMAN,{
	mes "[Vov� Alegre]";
	mes "Hoje, irei pedir � minha velha para cozinhar para mim ^006400arroz frito^000000.";
	next;
	mes "[Vov� Alegre]";
	mes "O ^006400arroz frito^000000 da minha esposa � sempre muito especial!";
	next;
	mes "[Vov� Alegre]";
	mes "Me faz am�-la sempre mais.";
	mes "N�o pode imaginar o delicioso sabor!";
	emotion(e_lv);
	close;
}

// ------------------------------------------------------------------
dewata,280,277,4	script	Vov�#dew	4_M_DEWOLDWOMAN,{
	mes "[Vov� Alegre]";
	mes "No meu tempo de jovem, haviam muitos cavalheiros que queriam me cortejar.";
	emotion(e_swt2);
	next;
	mes "[Vov� Alegre]";
	mes "Ainda assim, encontrei o cara certo, e me casei.";
	mes "Eu perguntei o que ele mais gostava sobre mim, ele disse que era o meu ^006400arroz frito^000000 caseiro.";
	next;
	mes "[Vov� Alegre]";
	mes "Desde ent�o, ele s� me pede pra fazer ^006400arros frito^000000 no jantar.";
	mes "J� passamos de 40 anos de casados e ele ainda n�o enjoou.";
	next;
	mes "[Vov� Alegre]";
	mes "Eu sempre pensei que seria uma sorte envelhecer ao lado de algu�m que amasse o que eu cozinho.";
	emotion(e_lv);
	close;
}

// ------------------------------------------------------------------
dewata,165,103,6	script	Aventureiro Semangat#dew	4_M_DEWOLDMAN,{
	mes "[Aventureiro]";
	mes "Tamb�m viajei ao redor do Mundo Quando eu era jovem como voc�.";
	mes "^FF0000Magao, Choco, �guia, e Cobra^000000, todos eram amigos bons que eu me encontrei durante minhas viagens.";
	next;
	mes "[Aventureiro]";
	mes "Eu ainda sou apaixonado por aventuras e viagens.";
	mes "Mas, simplesmente n�o posso deixar minha amada esposa e meus netos para tr�s...";
	next;
	mes "[Aventureiro]";
	mes "Voc� tamb�m ter� algo ou algu�m que ser� importante em seu cora��o algum dia.";
	close;
}

// ------------------------------------------------------------------
dewata,139,114,6	script	Esposa de Semangat#dew	4_M_DEWOLDWOMAN,{
	mes "[Esposa de Semangat]";
	mes "Para onde aquele velho se meteu?";
	mes "Voc� o viu por a�?";
	next;
	switch (select("Acho que o v� por a�..","N�o, n�o o vi..")) {
		case 1:
		mes "[Esposa de Semangat]";
		mes "Ele fugiu quando eu estava procurando comigo.";
		mes "Deve estar por a�, contando hist�rias cabeludas para alguns viajantes, como sempre.";
		next;
		mes "[Esposa de Semangat]";
		mes "Eu pe�o desculpas pelo meu marido.";
		mes "Por favor, n�o acredite em suas hist�rias idiotas.";
		mes "Como a que diz que ele se deparou com ^FF0000Mongeeys e Cobras^000000.";
		mes "Ou que ele lutou ao lado de uma ^FF0000Lula^000000.";
		next;
		mes "[Esposa de Semangat]";
		mes "Ele est� deitado ali a vida toda.";
		mes "Ainda asism, sempre encontra alguns viajantes, e quem ou�a aos seus contos malucos.";
		close;
		case 2:
		mes "[Esposa de Semangat]";
		mes "Oh. Por favor, diga-me se o vir por a�.";
		close;
	}
}

// ------------------------------------------------------------------
dewata,117,156,6	script	Garoto Sonhador#dew	4_M_DEWBOY,{
	mes "[Garoto Sonhador]";
	mes "Minha vov� diz que uma vez existia um p�ssaro chamado ^FF0000Garuda^000000 que voou sobre esta cidade.";
	mes "Depois disso, tivemos �timas colheitas e pudemos viver felizes.";
	next;
	mes "[Garoto Sonhador]";
	mes "Eu quero ver este p�ssaro voando sobre nossa cidade novamente!";
	mes "Ent�o minha m�e, pai vov�, e vov� poder�o ser felizes como nos velhos tempos.";
	mes "O que acha?";
	close;
}

// ------------------------------------------------------------------
dewata,144,216,4	script	Garoto Esperto#dew	4_M_DEWBOY,{
	mes "[Garoto Esperto]";
	mes "Meus pais me contavam...";
	next;
	mes "^006400Filho, voc� t�m que estudar muito.";
	mes "Seja feliz.";
	mes "Tenha uma vida longa e segura.";
	mes "A montanha no horizonte sempre estar� l� por voc�.^000000";
	next;
	mes "[Garoto Esperto]";
	mes "N�o � uma grande filosofia?";
	mes "Eu quero viver dessa maneira e me tornar uma grande pessoa, e ajudar a todos na nossa cidade e viver feliz!";
	close;
}

// ------------------------------------------------------------------
dewata,127,248,6	script	Garoto Ambisioso#dew	4_M_DEWGIRL,{
	mes "[Garoto Ambicioso]";
	mes "Minha fam�lia t�m fermentado o tradicional vinho de Dewata por muitos anos.";
	mes "Eu quero tomar dele, mas meu pai diz que sou muito jovem.";
	mes "Ele disse que s� beberei somente se eu conseguir dormir por ^FF0000100 dias^000000.";
	next;
	mes "[Garoto Ambicioso]";
	mes "Todos os adultos adoram tomar do vinho de meu pai.";
	mes "Eu quero muito tomar.";
	mes "Mas, o que devo fazer...?";
	mes "Eu me esqueci de quantas ^FF0000noites^000000.";
	mes "Eu j� dormi... boo hoo!";
	emotion(e_sob);
	close;
}

// ------------------------------------------------------------------
dewata,280,236,4	script	Viajante#dew	4_F_JOB_BLACKSMITH,{
	mes "[Viajante]";
	mes "Eu n�o sou de ^8B4513Dewata^000000.";
	mes "Mas enquanto estava viajando, eu encontrei esse lugar...";
	mes "E fiz a escolha de viver nesta linda cidade.";
	next;
	mes "[Viajante]";
	mes "Estou muito feliz em viver aqui e encontrar e experimentar toda essa vista maravilhosa.";
	mes "� um sonho realizado.";
	next;
	mes "[Viajante]";
	mes "J� pensou em se estabelecer por aqui tamb�m?";
	close;
}


// ------------------------------------------------------------------
dewata,95,203,6	script	Guia Tur�stico#dew	4_M_DEWMAN,{
	mes "[Guia]";
	mes "Este templo atr�s de mim � chamado de Borobudur.";
	mes "O Templo de Borobudur foi constru�do no 9� s�culo para venerar o grande Buddha, uma figura religiosa antiga.";
	emotion(e_swt2);
	next;
	mes "[Guia]";
	mes "Esse templo � constru�do com 6 plataformaas quadradas e 3 redondas.";
	mes "E 2672 pain�is auxiliares feitos � m�o em conjunto com 504 est�tuas de v�rios Buddhas.";
	emotion(e_swt2);
	next;
	mes "[Guia]";
	mes "A Stupa central, ou santu�rio est� localizado na plataforma mais alta, a qual � rodeada por mais 72 est�tuas.";
	emotion(e_swt2);
	next;
	mes "[Guia]";
	mes "At� nos tempos modernos, O Templo de Borobudur � um local de peregrina��o para muitos monges adorarem o Buddha.";
	mes "Tamb�m � a maior atra��o tur�stica, como pode imaginar.";
	emotion(e_swt2);
	next;
	mes "[Guia]";
	mes "Isso � tudo o que tenho sobre o Templo de Borobudur, quer perguntar mais alguma coisa?";
	mes "Se n�o, poderemos prosseguir para o pr�ximo local.";
	close;
}

// ------------------------------------------------------------------
dewata,89,191,6	script	Pequeno Santu�rio#dew1	CLEAR_NPC,{
	mes "H� um pequeno santu�rio aqui.";
	mes "H� muitas pessoas fazendo pedidos.";
	next;
	switch (select("Fazer uma doa��o","Fazer um pedido","Ir embora")) {
		case 1:
		mes "A caixa de doa��o diz:";
		mes "^FF00001,000 . 100,000 Zeny^000000";
		mes "Quanto gostaria de doar?";
		next;
		input(.@input, 0, 100000);
		if (.@input < 1000) {
			mes "- Cancelado. -";
			close;
		} else if (.@input <= 50000) {
			.@good_luck = rand(1, 10000);
		} else {
			.@good_luck = rand(1, 5000);
		}
		if (.@input > Zeny) {
			mes "- N�o h� Zeny suficiente. -";
			close;
		}
		mes "Qual � o seu pedido?";
		next;
		input(.@wish$);
		setarray(.@wishes$[0],
			"Energia","For�a",
			"Mais R�pido","Velocidade","Rapidez","Agilidade",
			"M�os Habilidosas","Des",
			"Saud�vel","Em Forma","Vital",
			"Intelig�ncia","C�rebro","Estudo","Int","1� Lugar",
			"Sorte","Riqueza","Itens","Obter Item","Mercadoria","Loteria",
			"N�vel Completo","N�vel","NV",
			"Amante","Namorada","Namorado");
		setarray(.@index[0],
			1,1,
			2,2,2,2,
			4,4,8,8,8,
			16,16,16,16,16,
			32,32,32,32,32,32,
			64,64,64,
			128,128,128);
		if (.@good_luck == 7 || .@good_luck == 77 || .@good_luck == 777 || .@good_luck == 7777) {
			.@bonus = 1;
		}
		for(.@i = 0; .@i < getarraysize(.@wishes$); ++.@i) {
			if (compare(.@wish$, .@wishes$[.@i])) {
				.@stat |= .@index[.@i];
				break;
			}
		}
		mes "Voc� faz um pedido de ^0000FF"+.@wish$+"^000000 para o pequeno santu�rio.";
		next;
		callsub(L_Wish);
		Zeny -= .@input;
		if (.@stat & 1 && .@bonus) { consumeitem(12043); }
		else if (.@stat & 2 && .@bonus) { consumeitem(12058); }
		else if (.@stat & 4 && .@bonus) { consumeitem(12063); }
		else if (.@stat & 8 && .@bonus) { consumeitem(12053); }
		else if (.@stat & 16 && .@bonus) { consumeitem(12048); }
		else if (.@stat & 32 && .@bonus) { consumeitem(12068); }
		else if (.@stat & 64) {
			specialeffect(EF_ANGEL, AREA, playerattached());
			mes "- Uma entidade celestial derrama uma b�n��o sobre voc�. -";
			next;
		} else if (.@stat & 128) {
			mes "- O santu�rio lhe envolve em uma amorosa aura. -";
			specialeffect(EF_LIGHTSPHERE, AREA, playerattached());
			next;
		}
		mes "O sentimento � que o pedido pode se tornar verdadeiro.";
		close;
		case 2:
		mes "Qual � o seu pedido?";
		next;
		input(.@wish$);
		mes "Voc� pediu por ^0000FF"+.@wish$+"^000000 no pequeno santu�rio.";
		next;
		callsub(L_Wish);
		mes "O sentimento � que o pedido pode se tornar verdadeiro.";
		close;
		case 3:
		close;
	}

	L_Wish:
	mes "Misteriosas energias emanam do santu�rio.";
	specialeffect(EF_FLASHER, AREA, "Pequeno Santu�rio#dew1");
	specialeffect(EF_FLASHER, AREA, "Pequeno Santu�rio#dew2");
	specialeffect(EF_FLASHER, AREA, "Pequeno Santu�rio#dew3");
	specialeffect(EF_FLASHER, AREA, "Pequeno Santu�rio#dew4");
	next;
	mes "Voc� recebeu a b�n��o do santu�rio.";
	specialeffect(EF_BLESSING, AREA, playerattached());
	next;
	return;
}

dewata,89,212,6	duplicate(Pequeno Santu�rio#dew1)	Pequeno Santu�rio#dew2	CLEAR_NPC
dewata,68,212,6	duplicate(Pequeno Santu�rio#dew1)	Pequeno Santu�rio#dew3	CLEAR_NPC
dewata,68,191,6	duplicate(Pequeno Santu�rio#dew1)	Pequeno Santu�rio#dew4	CLEAR_NPC

// ------------------------------------------------------------------
dewata,114,243,6	script	Jovem Pregui�oso#dew	4_M_DEWMAN,1,1,{
	if (countitem(Coco_Juice)) {
		mes "[Pregui�oso]";
		mes "Isso n�o � Suco de C�co?";
		mes "Poderia me dar isso?";
		mes "Acabei de acordar e minha garganta est� seca!";
		next;
		switch (select("Entregar","N�o entregar")) {
			case 1:
			mes "[Pregui�oso]";
			mes "S�rio?";
			mes "Pra mim?";
			mes "Lhe darei isto em troca...";
			mes "Obrigado... Hehe.";
			delitem(Coco_Juice, 1);
			getrandgroupitem((Gift_Box), 1);
			close;
			case 2:
			mes "[Pregui�oso]";
			mes "� isso a�. Ok...";
			close;
		}
	} else {
		mes "[Pregui�oso]";
		mes "Ah. Com sede.";
		mes "Algu�m tem um Suco de C�co por a�?";
		close;
		OnTouch:
		if (countitem(Coco_Juice) == 0) {
			mes "[Pregui�oso]";
			mes "Arrgg. Estou com sede..";
			mes "Muita sede..";
			mes "Me d� Suco de C�co...";
			mes "Suco de C�ocoo..";
			emotion(e_an);
			next;
			emotion(e_an);
			next;
			emotion(e_an);
			next;
			emotion(e_an);
			close2;
			end;
		}
	}
}

// ------------------------------------------------------------------
dewata,146,109,5	script	Cozinheiro#dew	4_COOK,{
	mes "[Cozinheiro]";
	mes "Sejam todos bem vindos � Ilha de Dewata.";
	mes "Espero que se comporte como os nobres viajantes, n�o como alguns jovens problem�ticos...";
	next;
	switch (select("Sobre a culin�ria de Dewata","Card�pio do Dia?","Estou bem")) {
		case 1:
		mes "[Cozinheiro]";
		mes "Precisa de informa��es sobre nossos pratos?";
		mes "Bem... N�o tenho muito o que falar, mas sinta-se � vontade para ouvir, se quiser.";
		next;
		mes "[Cozinheiro]";
		mes "H� muito o que abranger, deixe-me come�ar.";
		next;
		mes "[Cozinheiro]";
		mes "Primeiro, os pratos de Dewata possuem nomes especiais baseados em cada receita.";
		next;
		mes "[Cozinheiro]";
		mes "Se o nome do prato tem \"Goreng\" no meio, then it is either stir or deep fried food.";
		next;
		mes "[Cozinheiro]";
		mes "Se � um tipo de \"Bakar\", ent�o � comida grelhada.";
		next;
		mes "[Cozinheiro]";
		mes "E se � 'Satay', ent�o voc� est� comendo um prato skewered.";
		next;
		mes "[Cozinheiro]";
		mes "Segundo, n�s nomeamos os pratos atrav�s de seus ingredientes b�sicos.";
		next;
		mes "[Cozinheiro]";
		mes "Em Dewata, n�s chamamos arroz de Nasi, macarr�o de Mie, p�o de Roti, frando de Ayam, peixe de Ikan, e milho de Jagung.";
		next;
		mes "[Cozinheiro]";
		mes "Ent�o, se o arroz � frito chamamos o prato de \"Nasi Goreng\", e macarr�o frito de \"Mie Goreng\".";
		next;
		mes "[Cozinheiro]";
		mes "Bem... Isso � o bastante para aproveitar nossa comida em Dewata!!";
		mes "Se estiver com fome, n�s temos nosso Menu Especial por apenas ^0000FF5000^000000 Zeny.";
		close;
		case 2:
		mes "[Cozinheiro]";
		mes "N�s temos 2 items: \"Nasi Goreng\" e \"Satay\".";
		mes "Qual deles vai querer?";
		next;
		switch (select("Nasi Goreng","Satay")) {
			case 1:
			mes "[Cozinheiro]";
			mes "Isso � Nasi Goreng com meu molho especial juntamente com um ovo frito por cima.";
			mes "Custa somente ^0000FF5000^000000 Zeny.";
			.@food = 11532;
			break;
			case 2:
			mes "[Cozinheiro]";
			mes "Esse � o Satay, um peda�o de carne skewered e grelhada sobre carv�o de c�co.";
			mes "Custa somente ^0000FF5000^000000 Zeny.";
			.@food = 11533;
			break;
		}
		next;
		switch (select("Provar","Ir embora")) {
			case 1:
			if (Zeny < 5000) {
				mes "[Cozinheiro]";
				mes "Onde est� o dinheiro, jovem?!";
				mes "N�o vendemos fiado aqui! Ok?";
				close;
			} else {
				mes "[Cozinheiro]";
				mes "Aqui est� o que pediu: "+getitemname(.@food)+", n�o ir� se arrepender!";
				Zeny -= 5000;
				getitem(.@food,1);
				close;
			}
			case 2:
			mes "[Cozinheiro]";
			mes "� uma pena que n�o ir� provar deste delicioso prato...";
			close;
		}
		case 3:
		mes "[Cozinheiro]";
		mes "Est� falando s�rio?";
		mes "Isso n�o � nem um pouco engra�ado.";
		close;
	}
}

// ------------------------------------------------------------------
dewata,147,107,6	script	Gourmet#dew	4_M_03,{
	mes "[Gourmet]";
	mes "Oh... � como se estivesse acontecendo uma festa em minha boca...";
	mes "E todos est�o convidados!";
	emotion(e_sob);
	next;
	mes "[Gourmet]";
	mes "Mestre. Mais, por favor!.";
	emotion(e_no1);
	emotion(e_ok, 0, "Cozinheiro#dew");
	next;
	mes "[Gourmet]";
	mes "Voc� tem que experimentar isso!";
	mes "A comida aqui � muito suculenta!.";
	close;
}

// ------------------------------------------------------------------
dewata,204,230,6	script	Mulher de Dieta#dew	4_M_DEWWOMAN,{
	if (!countitem(Satay)) {
		mes "[Mulher de Dieta]";
		mes "Ah. Estou morrendo de fome!!";
		mes "Estou fazendo dieta no momento.";
		mes "Porque ainda estou com fome?";
		next;
		mes "[Mulher de Dieta]";
		mes "N�o fale tanto comigo!!";
		mes "Eu quero experimentar aquele ^006400Satay^000000 grelhado.";
		close;
	}
	mes "[Mulher de Dieta]";
	mes "Este ^006400Satay^000000 de dar �gua na boca � pra mim?";
	next;
	switch (select("Sim, quer um peda�o?","N�o, � pra mim!")) {
		case 1:
		delitem(Satay, 1);
		mes "[Mulher de Dieta]";
		mes "Muito obrigado!";
		mes "Eu estive com tanta fome.!!";
		mes "O cheiro deste ^006400Satay^000000 � t�o bom.!";
		next;
		getitem(Satay, 1);
		mes "[Mulher de Dieta]";
		mes "Ah... preciso colocar os p�s no ch�o, � ruim se ter muito do que � bom...";
		mes "Devo continuar com minha dieta.";
		mes "Me desculpe, devolverei isto pra voc�.";
		emotion(e_sob);
		close;
		case 2:
		mes "[Mulher de Dieta]";
		mes "Arrgg..";
		mes "Quanta gan�ncia!";
		mes "J� que n�o quer dividir.";
		mes "De qualquer forma, n�o devo burlar minha dieta nem por algo t�o cheiroso e delicioso...";
		emotion(e_pif);
		close;
	}
}
