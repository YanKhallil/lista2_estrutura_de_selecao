#include <stdio.h>

/*14) Faça um programa que receba o código correspondente ao cargo de um funcionário e
imprima seu cargo e o percentual de aumento ao qual este funcionário tem direito seguindo
a tabela:

Código Cargo Percentual
1 Escriturário 50,00%
2 Secretário 35,00%
3 Caixa 20,00%
4 Gerente 10,00%
5 Diretor Não tem aumento*/

int main (){
    //Declaracao de variaveis
    int codigo;

    //Entrada de dados
    printf("Escreva o codigo de cargo do funcionário: ");
    scanf("%d", &codigo);

    //Saida de dados
    switch (codigo){
        case 1:
            printf("Escriturário aumento de 50 por cento");
            break;
        
        case 2:
            printf("Secretário aumento de 35 por cento");
            break;
        
        case 3:
            printf("Caixa aumento de 20 por cento");
            break;

        case 4:
            printf("Gerente aumento de 10 por cento");
            break;

        case 5:
            printf("Diretor não tem aumento ");
            break;

        default:
            printf("Escreva somente de 1 a 5");
            break;
    }

    return 0;
}