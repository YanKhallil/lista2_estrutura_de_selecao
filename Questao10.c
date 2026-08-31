#include <stdio.h>

int main() {
    //Declaracao de variaveis
    int ParouImpar;

    //Entrada de dados
    printf("Escreva um numero: ");
    scanf("%d", &ParouImpar);

    //Saida de dados e Processamento
    if(ParouImpar%2 == 0){
        printf("Numero Par");

    } else {
        printf("numero Impar");
    }
    return 0;
}
