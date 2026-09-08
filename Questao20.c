#include <stdio.h>
#include <math.h>

 /*20) Faça um programa para resolver equações do 2o grau.*/

int main(){
    //Declaração de variável
    float A, B, C, delta=0, baskara_positivo = 0, baskara_negativo = 0; //inicializacao

    //Entrada de dados
    printf("Digite o valor de A da equacao do segundo grau: ");
    scanf("%f", &A);
    printf("Digite o valor de B da equacao do segundo grau: ");
    scanf("%f", &B);
    printf("Digite o valor de C da equacao do segundo grau: ");
    scanf("%f", &C);

    //Processamento

    delta= pow(B, 2) - 4*A*C;

    baskara_positivo = (-B + sqrt(delta))/ (2*A);
    baskara_negativo = (-B - sqrt(delta))/ (2*A);

    //Saida de dados

    printf("as raizes da equacao: %.2fX2 + %.2fX + %.2f = 0 sao x1 = %.2f e x2 = %.2f ", A, B, C, baskara_positivo, baskara_negativo);

}