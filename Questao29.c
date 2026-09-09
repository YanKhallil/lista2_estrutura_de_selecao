#include <stdio.h>

/*29) Efetuar a leitura de quatro número e apresentar os números que são divisíveis por 2 e
3.*/

int main(){
    //Declaracao de variaveis
    int num1, num2, num3, num4;

    //Entrada de dados
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o primeiro numero: ");
    scanf("%d", &num2);
    printf("Digite o primeiro numero: ");
    scanf("%d", &num3);
    printf("Digite o primeiro numero: ");
    scanf("%d", &num4);

    //Selecao de dados
    if(num1%2 == 0 && num1%3==0){
        printf("%d divisivel por 2 e por 3\n", num1);
    } else {
        printf("Nao e divisivel\n");
    }
    
    if(num2%2 == 0 && num2%3==0){
        printf("%d divisivel por 2 e por 3\n", num2);

    } else {
        printf("Nao e divisivel\n");
    }

    if(num3%2 == 0 && num3%3==0){
        printf("%d divisivel por 2 e por 3\n", num3);

    } else {
        printf("Nao e divisivel\n");
    }
    
    if(num4%2 == 0 && num4%3==0){
        printf("%d divisivel por 2 e por 3\n", num4);

    } else {
        printf("Nao e divisivel\n");
    }

    return 0;
}