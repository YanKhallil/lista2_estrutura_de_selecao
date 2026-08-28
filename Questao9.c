#include <stdio.h>

int main(){

/*9) Faça um programa que receba o preço de um produto e o seu código de orígem e imprima
a sua procedência. A procedência obedece a seguinte tabela:
Código Procedência
1 Sul
2 Norte
3 Leste
4 Oeste
5 ou 6 Nordeste
7.8 ou 9 Sudeste
10 até 20 Centro-Oeste
21 até 30 Nordeste*/


   //Declaracao de variaveis
   int codigo;
   float preco;

   //Entrada de dados
   printf("Digite o codigo do produto: ");
   scanf("%d", &codigo);
   printf("Digite o preco do produto: ");
   scanf("%f", &preco);

   //Processamento
   printf("\nPreco: R$ %.2f\n", preco);
   printf("Procedencia: ", codigo);

   if(codigo == 1){
        printf("Sul\n");

   } else if (codigo == 2){
        printf("Norte\n");

   }else if (codigo == 3){
        printf("Leste\n");

   }else if (codigo == 4){
        printf("Oeste");

   }else if (codigo == 5 || codigo == 6){
        printf("NOrdeste\n");

   }else if (codigo >= 7 && codigo <= 9){
        printf("Sudeste\n");

   }else if (codigo >= 10 && codigo <= 20){
        printf("Centro-oeste\n");

   }else if (codigo >= 25 && codigo <= 30){
        printf("Nordeste\n");

   }else{
        printf("Importado");
   }


    return 0;
}
