#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas_N;
    int horas_E;
    int dependentes;
    float P_horasN;
    float P_horasE;
    float P_dependentes;
    float P_liquido;
    float P_final;

    printf("Digite a quantidade total de horas normais: ");
    scanf("%i", &horas_N);

    printf("Digite a quantidade total de horas extras: ");
    scanf("%i", &horas_E);

    printf("Digite a quantidade total de dependentes menores de 6 anos: ");
    scanf("%i", &dependentes);

    P_horasN = horas_N*10;
    P_horasE = horas_E*15;
    P_dependentes = dependentes*90;
    P_liquido = P_horasN - (P_horasN*0.11);
    P_final = P_liquido+P_horasE+P_dependentes;

    printf("\nHoras normais: R$%.2f", P_horasN);
    printf("\nHoras extras: R$%.2f", P_horasE);
    printf("\nAdicional dependentes: R$%.2f", P_dependentes);
    printf("\nSalario liquido: R$%.2f", P_liquido);
    printf("\nSalario final: R$%.2f", P_final);





    return 0;
}
