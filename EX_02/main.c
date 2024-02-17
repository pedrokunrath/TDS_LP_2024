#include <stdio.h>

/**
 * @brief This is the main function of the program.
 * 
 * This function demonstrates the declaration and initialization of variables of different data types,
 * printing their values, and taking user input.
 * 
 * @return int The exit status of the program.
 */
int main() {
    // DECLARAÇÃO DAS VARIÁVEIS 
    char valor1 = 'A';
    int valor2 = 'B';
    float valor3 = 'C';
    double valor4 = 'D';
    //
    // VALORES 
    printf("valor1 %c\n", valor1);
    printf("valor2 %d\n", valor2);
    printf("valor3 %f\n", valor3);
    printf("valor4 %f\n", valor4);
    
    // ENTRADA DE DADOS 
    int ValorDigitado = 0;

    printf("Digite um numero de valor int:\n");
    scanf("%d", &ValorDigitado);

    printf("Resultado e: %d", ValorDigitado);

    return 0;
}
