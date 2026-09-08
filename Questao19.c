#include <stdio.h>

/*19) Faça um programa que receba o valor do salário mínimo, o número de horas trabalhadas,
o número de dependentes do funcionário e a quantidade de horas extras trabalhadas. Calcule
e imprima o salário a receber do funcionário seguindo as regras abaixo:
• o valor da hora trabalhada é igual a 1/5 do salário mínimo;
• o salário do mês é igual ao número de horas trabalhadas vezes o valor da hora
trabalhada;
• para cada dependente acréscimo de 32 reais;
• para cada hora extra trabalhada o cálculo do valor da hora trabalhada acrescida de
50%;
• o salário bruto é igual ao salário do mês mais os valores dos dependentes mais os
valores das horas extras;
• o cálculo do valor do imposto de renda retido na fonte segue a tabela abaixo:

IRRF Salário bruto
isento Inferior a 200
10,00% de 200 até 500
20,00% superior a 500
• o salário líquido é igual ao salário bruto menos IRRF;
• a gratificação segue a próxima tabela:

Salário líquido Gratificação
Até 350 100 reais
Superior a 350 50 reais

• o salário a receber do funcionário é igual ao salário líquido mais a gratificação.*/

int main(){
    //Declaracao de variaveis
    float salario, horas, horas_extras, valor_hora_extra = 0, salario_mes=0, salario_bruto = 0, salario_liquido =0; 
    int dependentes;
    const float VALOR_HORA = 0.2;
    const int VALOR_DEPENDENTE = 32;

    //Declaracao de variaveis
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario);
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Digite numero de dependentes: ");
    scanf("%d", &dependentes);
    printf("Digite as horas extras: ");
    scanf("%f", &horas_extras);

    //Processamento
    salario_mes = VALOR_HORA * horas;
    valor_hora_extra = ((horas_extras * 0.50) * VALOR_HORA) + VALOR_HORA;
    salario_bruto = salario_mes + (dependentes * VALOR_DEPENDENTE) + valor_hora_extra;

    //Selecao
    if(salario_bruto < 200){
        printf("Imposto isento\n");

    } else if(salario_bruto >= 200 && salario_bruto <= 500){
        printf("Imposto de 10 pro cento\n");
        salario_liquido = salario_bruto * 0.9;

    } else {
        printf("Imposto de 20 pro cento\n");
        salario_liquido = salario_bruto * 0.8;
    }


    if(salario_liquido<=350){
        printf("Gratificacao: 100R$\n");
        salario_liquido = salario_liquido + 100;

    } else {
        printf("Gratificacao: 50R$\n");
        salario_liquido = salario_liquido + 50;
    }

    printf("Salario final: %.2f", salario_liquido);

    return 0;
}