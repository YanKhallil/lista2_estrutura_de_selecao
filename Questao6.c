#include <stdio.h>

int main(){

/*6) Faça um programa que receba a altura e o sexo de uma pessoa, calcule e imprima o seu
peso ideal, utilizando as seguintes fórmulas:
• para homens: (72.7 * H) - 58;
• para mulheres: (62.1 * H) – 44.7.*/

    //declaração de variaveis
    float altura, pesoH = 0, pesoM = 0; //inicalizacao
    char sexo;

    //Entrada de dados
    printf("Digite seu sexo (H = homem e M = mulher): ");
    scanf(" %c", &sexo);
    printf("Digite o sua altura em m: ");
    scanf("%f", &altura);

    //Saida de dados e Processamento
    if(sexo == 'H'){
        pesoH = (72.7*altura) - 58;
        printf("Seu peso ideal: %.2f", pesoH);
    }else{
        pesoM = (62.1 * altura) - 44.7;
        printf("Seu peso ideal: %.2f", pesoM);
    }



    return 0;
}
