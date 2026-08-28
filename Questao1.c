#include <stdio.h>

int main(){

/*1) Faça um programa que receba quatro notas de um aluno, calcule e imprima a média aritmética
das notas e a mensagem de aprovado para média superior ou igual a 7.0 ou a mensagem de
reprovado para média inferior a 7.0.*/

    //Declaracao de variaveis
    float nota1, nota2, nota3, nota4, media = 0;

    //Entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    //Processamento
    media = (nota1 + nota2 + nota3 +nota4) / 4;


    //Saida de dados
    if(media>=7){
        printf("Aprovado");
    } else{
        printf("Reprovado");
    }

    return 0;
}
