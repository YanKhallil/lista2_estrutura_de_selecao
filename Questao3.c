#include <stdio.h>
#include <string.h>

int main(){

    /*3) Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é
um conjunto de caracteres que são: 'ASDFG'. O programa deve imprimir mensagem de
permissão ou negação de acesso.*/

    //Declaracao de variaveis
    char senha[7];

    //Entrada de dados
    printf("Digite a sua senha: ");
    scanf("%s", senha);

    //Saida de dados
    if(strcmp(senha, "ASDFG")==0){ //strcmp(nome, string) == VouF ou 0 e 1, essa função compra os valores das strings
        printf("Acesso Permitido");
    } else {
        printf("Acesso Negado");
    }
    return 0;
}

