#include <stdio.h>

/*13) Faça um programa que receba a idade de uma pessoa e classifique-a seguindo o critério
a seguir:

idade Classificação
0 a 2 anos Recém-nascido
3 a 11 anos criança
12 a 19 anos adolescente
20 a 55 anos adulto
Acima de 55 anos idoso*/

int main(){
    //Declaracao de variaveis
    int idade;

    //Entrada de dados
    printf("Escreva a idade de uma pessoa: ");
    scanf("%d", &idade);

    //Saida de dados
    if(idade>=0 && idade<=2){
        printf("Recém-nascido");

    } else if(idade>=3 && idade<=11){
        printf("criança");

    } else if(idade>=12 && idade<=19){
        printf("adolescente");

    } else if(idade>=20 && idade<=55){
        printf("adulto");

    } else if(idade>55){
        printf("idoso");

    } else {
        printf("Digite a idade novamente.");
    }


    return 0;
}