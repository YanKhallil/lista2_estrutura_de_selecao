#include <stdio.h>

/*18) Uma empresa decidiu dar uma gratificação de Natal aos seus funcionários, baseada no
número de horas extras e no número de horas que o funcionário faltou ao trabalho. O valor
do prêmio é obtido pela consulta na tabela a seguir, em que:
H = (número de horas extras) – (2/3*(número de horas-falta))
H (minutos) Prêmio ($)
> 240 500
1800 __| 2400 400
1200 __| 1800 300
600 __| 1200 200
<= 600 100

Faça um programa que receba o número de horas extras e o número de
horas- falta em minutos de um funcionário. Imprima o número de horas
extras em horas, o número de horas, o número de horas-falta em horas e o
valor do prêmio.*/

int main(){
    //declaracao de variaveis
    float hora_extra, hora_falta, H = 0;

    //Entrada de dados
    printf("Digite o numero de horas extras em minutos: ");
    scanf("%f", &hora_extra);
    printf("Digite o numero de horas faltadas em minutos: ");
    scanf("%f", &hora_falta);

    //processamento
    H = hora_extra - (0.6 * hora_falta);

    //Selecao
    if(H <= 600){
        printf("Premio: 100$\n");

    } else if(H > 600 && H <= 1200){
        printf("Premio: 200$\n");

    } else if(H > 1200 && H <= 1800){
        printf("Premio: 300$\n");

    } else if(H > 1800 && H <= 2400){
        printf("Premio: 400$\n");

    } else {
        printf("Premio: 500$\n");
    }

    //Saida de dados e conversao de horas
    printf("Hora extra em horas: %.2f\nHora H em minuto: %.2f\nhora de falta em horas: %.2f", hora_extra/60, H, hora_falta/60);

    return 0;
}
