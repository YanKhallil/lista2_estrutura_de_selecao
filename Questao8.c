#include <stdio.h>

int main(){

/*8) No curso de Desenvolvimento de Software, a nota final do estudante é calculada a partir de
3 notas atribuídas respectivamente a um trabalho de laboratório, a uma avaliação semestral
e a um exame final. As notas variam de 0 a 10 e a nota final é média ponderada das 3 notas
mencionadas. A tabela a seguir fornece os pesos das notas:
Laboratório - peso 2
Av. Semestral - peso 3
Exame final - peso 5
Faça um programa que receba as 3 notas do estudante, calcule e imprima a
média final e o conceito desse estudante.
O conceito segue a tabela abaixo:
média final conceito
8.0 |__| 10.0 A
7.0 |__ 8.0 B
6.0 |__ 7.0 C
5.0 |__ 6.0 D
< 5.0 E */

    //Declaracao de variaveis
    float trabalho, avaliacao, exame_final, media = 0;

    //Entrada de dados
    printf("Digite a nota do trabalho em laboratorio: ");
    scanf("%f", &trabalho);
    printf("Digite a nota da avaliacao semestral: ");
    scanf("%f", &avaliacao);
    printf("Digite a nota do exame final: ");
    scanf("%f", &exame_final);

    //Processamento
    media = ((trabalho*2) + (avaliacao * 3) + (exame_final * 5)) / (2+3+5);

    //saida de dados
    if(media<5){
        printf("Nota E");

    } else if(media >= 5 && media<6) {
        printf("Nota D");

    } else if(media >= 6 && media<7) {
        printf("Nota C");

    } else if(media >= 7 && media<8) {
        printf("Nota B");

    } else if(media >= 8 && media<=10) {
        printf("Nota A");

    } else {
        printf("Somente numeros de 0 a 10");
    }

    return 0;
}
