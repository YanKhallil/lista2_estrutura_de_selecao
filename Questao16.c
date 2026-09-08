#include <stdio.h>

/*16) Uma companhia de seguros tem três categorias de seguros baseadas na idade e na
ocupação do segurado. Somente pessoas com pelo menos 18 anos e não mais de 70 anos
podem adquirir apólices de seguros. Quanto às classes de ocupações foram definidos três
grupos de risco. A tabela a seguir fornece as categorias em função da caixa de idade e do
grupo de risco:
idade

Grupo de risco
Baixo Médio Alto
18 a 24 7 8 9
25 a 40 4 5 6
41 a 70 1 2 3
Faça um programa que receba a idade e o grupo de risco (b, m ou a) e
determine e imprima o código do seguro.*/

int main(){
    //Declaracao de variaveis
    int idade;
    char grupo;

    //entrada de dados
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o grupo de risco (b = baixo, m = medio ou a = alto): ");
    scanf(" %c", &grupo);

    if(idade>=18 && idade<=24){
        if(grupo == 'b'){
            printf("Codigo: 7");

        } else if(grupo == 'm'){
            printf("Codigo: 8");

        } else if(grupo == 'a'){
            printf("Codigo: 9");

        } else {
            printf("Digite somente b, m ou a");
        }

    } else if(idade>=25 && idade<=40){
        if(grupo == 'b'){
            printf("Codigo: 4");

        } else if(grupo == 'm'){
            printf("Codigo: 5");

        } else if(grupo == 'a'){
            printf("Codigo: 6");

        } else {
            printf("Digite somente b, m ou a");
        }

    } else if(idade>=41 && idade<=70){
        if(grupo == 'b'){
            printf("Codigo: 1");

        } else if(grupo == 'm'){
            printf("Codigo: 2");

        } else if(grupo == 'a'){
            printf("Codigo: 3");

        } else {
            printf("Digite somente b, m ou a");
        }

    } else{
        printf("idade permitida de somente 18 a 70 anos");
    }
    return 0;
}