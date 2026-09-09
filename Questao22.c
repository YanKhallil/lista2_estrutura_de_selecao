#include <stdio.h>
#include <string.h>

/*22) Faça um programa que receba uma frase, conte e imprima o número de palavras desta
frase.*/

int main() {
    //Declaracao de dados
    char frase[200];
    int contador = 0;
    int i;

    //Entrada de dados
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //Repeticao de dados
    for (i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ') {
            contador++;
        }
    }

    contador = contador + 1;

    //Saida de dados
    printf("O numero de palavras na frase e: %d\n", contador);

    return 0;
}