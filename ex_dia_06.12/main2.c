#include <stdio.h>
int main(){

 int A[8];

  for (int i = 0; i < 8; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &A[i]);
    }

    int x;
    int y;

    printf("digite o valor de x (0 a 7)");
    scanf("%d",&x);
    printf("digite o valor de y (0 a 7)");
    scanf("%d", &y);
 
   if (x >= 0 && x < 8 && y >= 0 && y < 8) {
        
        printf("A soma dos valores nas posicoes %d e %d he: %d\n", x, y, x + y);
    } else {
        printf("Posições fora dos limites do vetor.\n");
        }

   

    return 0;
}