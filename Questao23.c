#include <stdio.h>
#include <string.h>

/*23) Faça um programa que receba uma frase, conte e imprima a quantidade de vezes em
que aparece a palavra “aula”.*/

int main() {
    char frase[200];
    char palavra[] = "aula";
    int contador = 0;
    int i, j, tamanhoPalavra;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    tamanhoPalavra = strlen(palavra);

    for (i = 0; i < strlen(frase); i++) {
        int encontrou = 1;

        for (j = 0; j < tamanhoPalavra; j++) {
            if (frase[i + j] != palavra[j]) {
                encontrou = 0;
                break;
            }
        }

        if (encontrou) {
            contador++;
        }
    }

    printf("A palavra 'aula' aparece %d vez(es) na frase.\n", contador);

    return 0;
}