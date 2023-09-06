#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    float salarioR;
    float descontoINSS;
    float descontoFGTS;
    float totaldesc;

    printf("Informe o salario: ");
    scanf("%f", &salario);

    printf("\nSalario inicial: %.2f", salario);

    salarioR = salario * 1.15;

    printf("\nSalario reajustado: %.2f", salarioR);

    descontoINSS = 0.11*salarioR;
    descontoFGTS = 0.08*salarioR;

    printf("\nDesconto 11%% INSS: %.2f", descontoINSS);
    printf("\nDesconto 8%% FGTS: %.2f", descontoFGTS);

    printf("\nTotal de descontos INSS+FGTS: %.2f", (descontoFGTS + descontoINSS));

    totaldesc = salarioR - (descontoFGTS + descontoINSS);

    printf("\nsalario final: %.2f", totaldesc);

    return 0;
}
