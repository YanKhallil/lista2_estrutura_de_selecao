#include <stdio.h>
#include <math.h>

/*15) Faça um programa que mostre um menu com as seguintes opções:
• soma
• raiz quadrada
• finalizar
O programa deve receber a opção desejada, receber os dados necessários para a
operação de cada opção, realizar a operação e imprimir o resultado. Na opção
finalizar nada deve acontecer.*/

int main(){
    //Declaracao de variaveis
    char opcao;
    int numero1, numero2, soma =0, raiz = 0;

    //Entrada de dados
    printf("Digite a opcao desejada (s = soma, r = raiz, f = finalizar): ");
    scanf(" %c", &opcao);

    //Saida de dados
    switch(opcao) {
        case 's':
            //entrada de dados
            printf("Digite a soma dos numeros desejado: ");
            scanf("%d %d", &numero1, &numero2);

            //Processamento
            soma = numero1 + numero2;

            //Saida de dados
            printf("Soma: %d", soma);
            break;
        
        case 'r':
            //entrada de dados
            printf("Digite a raiz dos numero desejado: ");
            scanf("%d", &numero1);

            //Processamento
            raiz = sqrt(numero1);

            //Saida de dados
            printf("Raiz quadrada: %d", raiz);
            break;    

        case 'f':
            printf("Programa Finalizado.");
            break;

        default:
            printf("Digite somente as letras mostradas.");
    }


    return 0;
}