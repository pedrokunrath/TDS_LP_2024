#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

    //Fun��o para trabalho de xp, executada na MAIN.
    int xp = 0;

    int levelUp() {
        if(xp >= 100) {
            printf("Sua barra de xp atingiu 100 pts, por isso recebera 5 pts de vida e 1 pt de ataque");
            int vidasua = vidasua + 5;
            int ataqueq = ataqueq + 1;
        } return xp;
        }
    int main () {

        char heroi[20];

        //Declara��es
        int ataqueinimigo1;
        int vidainimigo1;
        int ataqueinimigo2;
        int vidainimigo2;
        int ataqueinimigo3;
        int vidainimigo3;
        int ataqueinimigo4;
        int vidainimigo4;
        int vidasua = 75;
        int gameover;
        gameover = vidasua;

        srand(time(NULL));

        int fortunewheel;
        int moedas;
        int ataqueq = rand()%40+1 * 5;
        int conflitox = 2;
        int ataquez = 1;
        int escolha1;
        int escolha2;
        //Apresenta��o
        printf("Ola heroi, digite o nome do seu personagem: \n");
        scanf("%s", heroi);
        printf("\n%s chegou ate a caverna, la dentro seus inimigos serao invocados\n", heroi);

        //Random para escolha de inimigos
        int inimigo = rand()%4 + 1;
        printf("Seu inimigo esta sendo invocado, os dados indicam: %d\n", inimigo);


        //Dados dos inimigos + combate
        if (inimigo == 1)
        {
            ataqueinimigo1 = rand()%3+1 * 1;
            vidainimigo1 = rand()%50 + 250;
            printf("\n%s, ira batalhar contra morcego\n\n", heroi);
            printf("para desafiar digite: 1 ou para sair do conflito digite: 2\n", ataquez, conflitox);
            scanf("%d", &escolha1);
        }
        else if (escolha1 == 2)
        {
            printf("Voce fugiu da batalha, nunca mais toque em uma espada, game over");
            return 0;
        }
        if (escolha1 == 1) {
        while(vidasua > 0 && vidainimigo1 > 0)
        { //loop de batalha
            printf("\npara atacar digite: 1 ou para curar: 2, caso nao possua 20 moedas a cura sera ignorada\n");
            scanf("%d", &escolha2);
        if (escolha2 == 2 && moedas >= 20) {

            printf("\nvoce optou por usar pot, sua vida sera restaurada em 30pts\n");
            vidasua = vidasua + 30;
        }
        else {

            vidainimigo1 = vidainimigo1 - ataqueq;
            printf("\nmorcego recebeu: %d de dano\n", ataqueq);
            printf("\na vida atual do morcego eh %d\n", vidainimigo1);
        }
            printf("\nAgora eh o turno do morcego\n");
            vidasua = vidasua - ataqueinimigo1;
            printf("\nVoce recebeu %d de dano\n", ataqueinimigo1);
            printf("\na sua vida atual eh: %d\n", vidasua);
        }
        }
        for(;vidasua <= 0; gameover == vidasua)
        {
            gameover+=
            vidasua != gameover;
            printf("%s foi morto", heroi);
            return 0;
        }
        if (vidainimigo1 < 0) {
            fortunewheel = rand()% 10 + 1;
            moedas = fortunewheel;
            printf("\nVoc� logrou exito no combate contra o morcego, por isso recebera moedas: %d\n", rand() % 10 + 1);
            xp += rand() % 5 + 15; // Ganho de experi�ncia
            printf("\nTambem sera acrescentado %d de exp devido a vitoria\n", xp);
            }

        if (inimigo == 2)
        {
            ataqueinimigo2 = rand()%3+1 * 2;
            vidainimigo2 = rand()%100 + 300;
            printf("\n%s, voce ira batalhar contra rato\n", heroi);
            printf("\npara confrontar digite: 1 ou para sair do conflito digite: 2\n", ataquez, conflitox);
            scanf("%d", &escolha1);
        }
        else if (escolha1 == 2)
        {
            printf("\nvoce fugiu da batalha, nunca mais toque em uma espada, game over\n");
            return 0;
        }
        if (escolha1 == 1)
        {
        while (vidasua > 0 && vidainimigo2 > 0)
        {  //loop de batalha
            printf("\npara atacar digite: 1 ou para curar: 2, caso nao possua 20 moedas a cura sera ignorada\n");
            scanf("%d", &escolha2);

        if (escolha2 == 2 && moedas >= 20) {

            printf("\nvoce optou por usar pot, sua vida sera restaurada em 30pts\n");
            vidasua = vidasua + 30;
        }
        else if (escolha2 == 1)
        {
            vidainimigo2 = vidainimigo2 - ataqueq;
            printf("\nrato recebeu: %d de dano\n", ataqueq);
            printf("\na vida atual do rato eh %d\n", vidainimigo2);
        }
            printf("\nAgora eh o turno do rato\n");
            vidasua = vidasua - ataqueinimigo2;
            printf("\nvoce recebeu %d de dano\n", ataqueinimigo2);
            printf("\na sua vida atual eh: %d\n", vidasua);
            }
            }
        for(;vidasua <= 0; gameover == vidasua)
        {
            gameover+=
            vidasua != gameover;
            printf("%s foi morto", heroi);
            return 0;
        }
        if (vidainimigo2 < 0)
        {
            fortunewheel = rand() %10 + 1;
            moedas = fortunewheel;
            printf("\nVoc� logrou exito no combate contra o rato, por isso recebera moedas: %d\n", rand() % 10 + 1);
            xp += rand() % 5 + 15; // Ganho de experi�ncia
            printf("\nTambem sera acrescentado %d de exp devido a vitoria\n", xp);
        }
        else if (inimigo == 3)
        {
            ataqueinimigo3 = rand()%3+1 * 4;
            vidainimigo3 = rand()%100 + 600;
            printf("\n%s, voce ira batalhar contra o urso", heroi);
            printf("\npara confrontar digite: 1 ou para sair do conflito digite: 2\n", ataquez, conflitox);
            scanf("%d", &escolha1);
        }
        if (escolha1 == 2)
        {
            printf("\nVoce fugiu da batalha, nunca mais toque em uma espada, game over\n");
            return 0;
        }
        if (escolha1 == 1)
        {
        while(vidasua > 0 && vidainimigo3 > 0)
        {  //loop de batalha

            printf("\npara atacar digite: 1 ou para curar: 2, caso nao possua 20 moedas a cura sera ignorada\n");
            scanf("%d", &escolha2);

        if(escolha2 == 2 && moedas >= 20)
        {
            printf("\nvoce optou por usar pot, sua vida sera restaurada em 30pts\n");
            vidasua = vidasua + 30;
        }
        else
        {   vidainimigo3 = vidainimigo3 - ataqueq;
            printf("\nurso recebeu: %d de dano\n", ataqueq);
            printf("\na vida atual do urso eh %d\n", vidainimigo3);
        }
            printf("\nAgora eh o turno do urso\n");
            vidasua = vidasua - ataqueinimigo3;
            printf("\nvoce recebeu %d de dano\n", ataqueinimigo3);
            printf("\na sua vida atual eh: %d\n", vidasua);
        }
        }
        for(;vidasua <= 0; gameover == vidasua)
        {
            gameover+=
            vidasua != gameover;
            printf("%s foi morto", heroi);
            return 0;
        }
        if (vidainimigo3 < 0) {
            fortunewheel = rand() % 10 + 1;
            moedas = fortunewheel;
            printf("\nVoc� logrou exito no combate contra o urso, por isso recebera moedas: %d\n", rand() % 10 + 1);
            xp += rand() % 5 + 15; // Ganho de experi�ncia
            printf("\nTambem sera acrescentado %d de exp devido a vitoria\n", xp);
        }
        else
        {
            ataqueinimigo4 = rand()%3+1 * 5;
            vidainimigo4 = rand()%100 + 1000;
            printf("\n%s, ira batalhar contra dragao\n\n", heroi);
            printf("\npara confrontar digite: 1 ou para sair do conflito digite: 2\n", ataquez, conflitox);
            scanf("%d", &escolha1);
        }
        if (escolha1 == 2)
        {
            printf("\nVoce fugiu da batalha, nunca mais toque em uma espada, game over\n");
            return 0;
        }

        if (escolha1 == 1)
        {
        while(vidasua > 0 && vidainimigo4 > 0)
        {  //loop de batalha
            printf("\npara atacar digite: 1 ou para curar: 2, caso nao possua 20 moedas a cura sera ignorada\n");
            scanf("%d", &escolha2);

        if (escolha2 == 2 && moedas >= 20)
        {
            printf("\nvoce optou por usar pot, sua vida sera restaurada em 30pts\n");
            vidasua = vidasua + 30;
        }
        else
        {
            vidainimigo4 = vidainimigo4 - ataqueq;
            printf("\ndragao recebeu: %d de dano\n", ataqueq);
            printf("\na vida atual do dragao eh %d\n", vidainimigo4);
        }
            printf("\nAgora eh o turno do dragao\n");
            vidasua = vidasua - ataqueinimigo4;
            printf("\nvoce recebeu %d de dano\n", ataqueinimigo4);
            printf("\na sua vida atual eh: %d\n", vidasua);
        }
        }
        for(;vidasua <= 0; gameover == vidasua)
        {
            gameover+=
            vidasua != gameover;
            printf("%s foi morto", heroi);
            return 0;
        }
        if (vidainimigo4 < 0)
        {
            fortunewheel = rand() % 10 + 1;
            moedas = fortunewheel;
            printf("\nVoc� logrou exito no combate contra o dragao, por isso recebera moedas: %d\n", rand() % 10 + 1);
            xp += rand() % 5 + 15; // Ganho de experi�ncia
            printf("\nTambem sera acrescentado %d de exp devido a vitoria\n", xp);
        }
        return 0;
    }
