#include <stdio.h>

/*26) Escreva um programa que leia o valor de dois números inteiros e a operação aritmética
desejada: calcule, então, a reposta adequada. Utilize os símbolos da tabela a seguir para ler
qual a operação aritmética escolhida:

Símbolo Operação aritmética
+ adição
- subtração
* multiplicação
/ divisão*/

int main (){
    char operacao;
    int numero1, numero2, soma = 0, subtracao = 0, multiplicacao = 0, divisao = 0;

    printf("Digite o operacao (+ = adicao - = subtracao * = multiplicacao / = divisao): ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    switch (operacao){
        case '+':
            int soma = numero1 + numero2;
            printf("Resultado da soma: %d", soma);
            break;
        case '-':
            int subtracao = numero1 - numero2;
            printf("Resultado da subtracao: %d", subtracao);
            break;
        case '*':
            int multiplicacao = numero1 * numero2;
            printf("Resultado da multiplicacao: %d", multiplicacao);
            break;
        case '/':
            int divisao = numero1 / numero2;
            printf("Resultado da divisao: %d", divisao);
            break;
        default:
            printf("Digite somente as operacoes matematicas."); 

}

    return 0;
}