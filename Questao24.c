#include <stdio.h>

/*24) Escreva um programa que leia três valores inteiros e mostre-os em ordem crescente.*/

int main(){
    //Declaracao de variaveis
    int num1, num2, num3;

    //Entrada de dados
    printf("Digite tres numero para saber sua ordem crescente: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    //Selecao de dados
    if(num1<num2 && num1<num3){
        if(num2<num3){
            printf("%d %d %d", num1, num2, num3);
        } else {
            printf("%d %d %d", num1, num3, num2);
        }
    } else if(num2<num1 && num2<num3){
        if(num1<num3){
            printf("%d %d %d", num2, num1, num3);
        } else {
            printf("%d %d %d", num2, num3, num1);
        }
    } else if(num3<num2 && num3<num1){
        if(num2<num1){
            printf("%d %d %d", num3, num2, num1);
        } else {
            printf("%d %d %d", num3, num1, num2);
        }
    }
    
    return 0;
}