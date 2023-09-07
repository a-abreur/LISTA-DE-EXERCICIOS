#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float faturamento_ant;
    printf("digite o faturamento do mes anterior: ");
    scanf("%f", &faturamento_ant);

    float meta_PM;
    meta_PM = (faturamento_ant*1.2);

    float aumento = (meta_PM - faturamento_ant);

    int P1=150;
    int P2=220;
    int P3=97;


    //arredondando para cima
    float qtd_P1 = ceil(aumento/P1);
    float qtd_P2 = ceil(aumento/P2);
    float qtd_P3 = ceil(aumento/P3);

    printf("A meta do proximo mes e: R$%.2f", meta_PM);
    printf("\nUm aumento de: R$%.2f", aumento);
    printf("\n\n Quantidade de cada peca a ser vendida para a meta:");
    printf("\nProduto 1: %.1f pecas", qtd_P1);
    printf("\nProduto 2: %.1f pecas", qtd_P2);
    printf("\nProduto 3: %.1f pecas", qtd_P3);

    return 0;
}
