#include <stdio.h>

int main(){

    /*4) Faça um programa que receba a idade de uma pessoa e imprima mensagem de maioridade
ou não.*/

    //Declaracao de variaveis
    int idade;

    //Entrada de dados
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    //saida de dados
    if(idade >= 18){
        printf("Maior de idade");
    } else {
        printf("Menor de idade");
    }

    return 0;
}
