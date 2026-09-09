#include <stdio.h>

/*25) Escreva um programa que calcule o que deve ser pago por um produto, considerando o
preço normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela
a seguir para ler qual a condição de pagamento escolhida e efetuar o cálculo adequado:

Código Condição de pagamento
1 Á vista em dinheiro ou cheque, recebe 10% de desconto.
2 À vista no cartão de crédito, recebe 5% de desconto.
3 Em 2 vezes, preço normal de etiqueta sem juros.
4 Em 3 vezes, preço normal de etiqueta mais juros de 10%.*/

int main(){
    //Declaracao de variaveis
    float produto, desconto10 =0, desconto5 =0, duas_vezes = 0, tres_vezes = 0;
    int opcao;

    //Entrada de dados
    printf("Digite o preco do produto: ");
    scanf("%f", &produto);

    printf("Digite a opcao desejada: \n1 = A vista em dinheiro ou cheque recebe 10 por cento de desconto.\n");
    printf("2 = A vista no cartao de credito, recebe 5 por cento de desconto.\n");
    printf("3 = Em 2 vezes, preco normal de etiqueta sem juros.\n");
    printf("4 = Em 3 vezes, preco normal de etiqueta mais juros de 10 por cento.\n");
    scanf("%d", &opcao);

    //Selecao de dados
    switch(opcao){
        case 1:
        desconto10 = produto * 0.9; // 0.9 = 10 por cento descontado direto
        printf("Preco atual no dinheiro ou cheque: %.2f", desconto10);
        break;

        case 2: 
        desconto5 = produto * 0.95;
        printf("Preco atual com cartao de credito: %.2f", desconto5);
        break;

        case 3: 
        duas_vezes = produto/2;
        printf("Preco atual parcelado em duas vezes (sem juros): %.2f", duas_vezes);
        break;

        case 4: 
        tres_vezes = (produto/3) * 1.10;
        printf("Preco atual parcelado em tres vezes (com juros): %.2f", tres_vezes);
        break;

        default:
        printf("Digite somentes os numeros da tabela");

    }

    return 0;
}