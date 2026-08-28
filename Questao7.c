#include<stdio.h>

int main(){

/*7) Faça um programa que receba a idade de um nadador e imprima a sua categoria seguindo
as regras:
categoria idade
infantil A 5 – 7 anos
infantil B 8 – 10 anos
juvenil A 11 – 13 anos
juvenil B 14 – 17 anos
sênior maiores de 18 anos*/

    //declaracao de variaveis
    int idade;

    //Entrada de dados
    printf("digite sua idade: ");
    scanf("%d", &idade);

    //saida de dados
    if(idade >=5 && idade<= 7){
        printf("Infantil A");

    } else if(idade >= 8 && idade<=10) {
        printf("Infantil B");

    } else if(idade >= 11 && idade<=13) {
        printf("Juvenil A");

    } else if(idade >= 14 && idade<=17) {
        printf("Juvenil B");

    } else if(idade >= 18) {
        printf("Senior");

    } else {
        printf("So digite idade maior ou igual a 5");
    }


    return 0;
}
