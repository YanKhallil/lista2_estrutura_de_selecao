#include <stdio.h>

/*28) Verificar se dados três valores inteiros quaisquer os mesmo formam um triângulo. Se
formar informar o tipo, caso contrário, informar que os lados não formam um triângulo.*/

int main(){
    //Declaracao e dados
    int A, B, C;

    //Entrada de dados
    printf("digite o valor de A: ");
    scanf("%d", &A);
    printf("digite o valor de B: ");
    scanf("%d", &B);
    printf("digite o valor de C: ");
    scanf("%d", &C);

    //Selecao de dados
    if(A<(B+C) && B<(A+C) && C<(A+B)){
        if(A == B && A == C && B == C){
            printf("\no triangulo é Equilatero");

        }else{
            if(A != B && A != C && B != C){
                printf("O triangulo é Escaleno");
            }else{
                printf("O triangulo é Isoceles");
            }
        }


    }else{
        printf("Não forma um triangulo");
    }

    return 0;
}