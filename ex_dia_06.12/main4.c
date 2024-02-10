#include <stdio.h>
int main(){

 int A[10], maior, menor ;

  for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &A[i]);

       if (i == 0 || A[i] > maior) {
            maior = A[i];
        }
        if (i == 0 || A[i] < menor) {
            menor = A[i];
        }
    }
    printf("o maior foi de: %d\n",maior);
    printf("o maior foi de: %d\n",menor);


    return 0;

    }
