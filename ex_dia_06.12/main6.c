#include <stdio.h>
int main(){
    int numero;
    printf("DIGITE UMA NOTA:");
    scanf("%d", &numero);
    for (int i = 1; i < 10; i++) {
        if (numero == i) {
            printf("Aprovado");
            break;
        }
        else{
            printf("Reprovado");
            break;
        }
        
    }
    return 0;
}