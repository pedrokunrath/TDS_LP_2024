#include <stdio.h>
int main() {

    int resultados[9];


    for (int i = 1; i <= 9; ++i) {

        int soma = 0;


        printf("Tabuada de %d\n", i);

        for (int j = 1; j <= 9; ++j) {
            int resultado = i * j;

            printf("%d x %d = %d\n", i, j, resultado);
            soma += resultado;
        }


        resultados[i - 1] = soma;

        printf("Soma: %d\n", soma);
    }
    

    int somatotal = 0;
    for (int A = 0; A < 9; ++A) {

        somatotal += resultados[A];
    }

    printf("Soma total dos resultados %d\n", somatotal);

    return 0;
}