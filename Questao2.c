#include <stdio.h>

int main(){

/*2) Uma empresa decide dar um aumento de 30% aos funcionários cujo salário é inferior a 500
reais. Escreva um programa que receba o salário de um funcionário e imprima o valor do
salário reajustado ou uma mensagem caso o funcionário não tenha direito ao aumento.*/

    //Declaracao de variaveis
    float salario, reajuste = 0;

    //Entrada de dados
    printf("Digite o seu salario: ");
    scanf("%f", &salario);


    //Saida de dados e processmaneto
    if(salario>=500){
        printf("Nao tem direito a um aumento");
    } else {
        reajuste = salario * 1.30;
        printf("Salario Reajustado: %.2f", reajuste);
    }

    return 0;
}

