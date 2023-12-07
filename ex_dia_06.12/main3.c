#include <stdio.h>

int main() {
    int vetor[10];
    int ValorResultado = 0;

    
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);

       
        if (vetor[i] % 2 == 0) {
         
            printf("seu resuldado  e par", vetor);
        }
        else{
            printf("numero invalido");
        }
    }

  
    printf("O vetor possui %d valor(es) par(es).\n", ValorResultado);


}