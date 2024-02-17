#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int hp;
    int ataque;
} Personagem;

void inicializarPersonagem(Personagem *personagem, int hp, int ataque) {
    personagem->hp = hp;
    personagem->ataque = ataque;
}

int calcularDano(int ataque) {
    return rand() % ataque + 1;
}

void imprimirStatus(Personagem personagem) {
    printf("HP: %d\n", personagem.hp);
}

int main() {
    srand(time(NULL));

    Personagem heroi, inimigo;
    inicializarPersonagem(&heroi, 100, 20);
    inicializarPersonagem(&inimigo, 50, 15);

    printf("Bem-vindo ao jogo de combate!\n");

    while (heroi.hp > 0 && inimigo.hp > 0) {
        printf("\nHeroi:\n");
        imprimirStatus(heroi);

        printf("\nInimigo:\n");
        imprimirStatus(inimigo);

        printf("\nEscolha uma acao:\n");
        printf("1. Atacar\n");
        printf("2. Fugir\n");

        int escolha;
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
               
                printf("\nHeroi ataca o inimigo!\n");
                inimigo.hp -= calcularDano(heroi.ataque);
                break;
            case 2:
             
                printf("\nHeroi tenta fugir!\n");
                if (rand() % 2 == 0) {
                    printf("Fuga bem-sucedida! Voce escapou.\n");
                    return 0;
                } else {
                    printf("A fuga falhou! O inimigo contra-ataca.\n");
                }
                break;
            default:
                printf("\nopcao invalida. Tente novamente.\n");
        }

       
        if (inimigo.hp > 0) {
            printf("\nInimigo ataca o heroi!\n");
            heroi.hp -= calcularDano(inimigo.ataque);
        }

        
        if (heroi.hp <= 0) {
            printf("\nO herói foi derrotado. Game over!\n");
        } else if (inimigo.hp <= 0) {
            printf("\nO inimigo foi derrotado. Você venceu!\n");
        }
    }

    return 0;
}
