#include <stdio.h>

int main() {
    int numeroDia;

    // Solicita ao usuário um número correspondente ao dia da semana
    printf("Digite um numero de 1 a 7 para representar o dia da semana: ");
    scanf("%d", &numeroDia);

    // Usa if e else para determinar o nome do dia da semana com base no número digitado
    if (numeroDia == 1) {
        printf("Domingo\n");
    } else if (numeroDia == 2) {
        printf("Segunda-feira\n");
    } else if (numeroDia == 3) {
        printf("Terca-feira\n");
    } else if (numeroDia == 4) {
        printf("Quarta-feira\n");
    } else if (numeroDia == 5) {
        printf("Quinta-feira\n");
    } else if (numeroDia == 6) {
        printf("Sexta-feira\n");
    } else if (numeroDia == 7) {
        printf("Sabado\n");
    } else {
        printf("Numero invalido! Digite um numero de 1 a 7.\n");
    }

    return 0;
}

// 2
