#include <stdio.h>
void insereFrase (char *vetor )
{
    do{
        printf("Digite uma frase: ");
        scanf("%[^\n]",vetor);

    }while(vetor[1]== '\0'); 
    
}
void tudoMinusculo (char *vetor){
    int i = 0;
    while(vetor[i]!= '\0'){
        if (vetor[i] >=65 && vetor[i] <= 90)
        vetor[i] = (vetor[i] + 32);
        i++;
    }
}
