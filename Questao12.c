#include <stdio.h>

/*12) Faça um programa que receba três notas de um aluno, calcule e imprima a média
aritmética entre essas três notas e uma mensagem que segue a tabela abaixo:
Média Mensagem
0.0 |__ 5.0 reprovado
5.0 |__ 7.0 exame
7.0 |__| 10.0 aprovado*/

int main(){
    //Declaração de variáveis
    float nota1, nota2, nota3, media = 0;

    //Entrada de dados
    printf("Digite as tres notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    //Processamento
    media = (nota1+nota2+nota3)/3;

    //saida de dados
    if(media <5){
        printf("REPROVADO");
    } else if (media <7){
        printf("EXAME");
    } else if(media >=7 && media <=10){
        printf("APROVADO");
    } else {
        printf("Digite somente valores de 1 a 10");
    }

    return 0;
}