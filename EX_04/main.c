#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    for(int i = 0; frase[i]; i++){
        frase[i] = toupper(frase[i]);
    }

    printf("Frase em maiusculas: %s", frase);
    return 0;
}