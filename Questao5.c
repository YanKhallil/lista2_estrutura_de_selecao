#include <stdio.h>

int main(){

    /*5) Faça um programa que calcule e imprima o salário reajustado de um funcionário de acordo
com a seguinte regra:
• salários até 300, reajuste de 50%;
• salários maiores que 300, reajuste de 30%.*/

    //Declaracao de variaveis
    float salario, reajuste = 0;

    //Entrada de dados
    printf("Digite seu salario: ");
    scanf("%f", &salario);

    //Saida de dados e processamento
    if(salario<=300){
        reajuste = salario * 1.50;
        printf("Seu salario com reajuste de 50: %.2f", reajuste);
    } else {
        reajuste = salario * 1.30;
        printf("Seu novo salario com reajuste de 30: %.2f", reajuste);
    }

    return 0;
}
