#include <stdio.h>
#include <string.h>

/*21) Faça um programa que receba uma frase, conte e imprima o número de vogais desta
frase.*/

int main(){
    //Declaracao de variaveis
    char frase[200];
    int contador = 0;
    int i;

    //Entrada de dados
    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //repericao e selecao de dados
    for (i = 0; i < strlen(frase); i++) {
        char letra = frase[i];

        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            contador++;
        }
    }

    //Saida de dados
    printf("O numero de vogais na frase e: %d\n", contador);

    return 0;
}