#include <stdio.h>

int main() {
    /* 11) Faça um programa que receba dois números e imprima o menor dos dois*/

    //Declaracao de variaveis
    int numero1, numero2;

    //Entrada de dados
    printf("digite o numero 1: ");
    scanf("%d", &numero1);
    printf("digite o numero 2: ");
    scanf("%d", &numero2);

    //saida de dados
    if(numero1<numero2){
        printf("numero1 e menor: %d", numero1);
    } else if(numero2<numero1) {
        printf("numero2 e menor: %d", numero2);
    } else {
        printf("são iguais");
    }

    return 0;
}
