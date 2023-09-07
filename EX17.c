#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int qtd_paes;
    int qtd_broas;
    float valor_pao = 0.12;
    float valor_broa = 1.60;
    float valor_ref;
    float fat_paes;
    float fat_broas;
    float fat_diario;
    float deposito;
    float dias;

    printf("digite a quantidade de paes vendidos: ");
    scanf("%i", &qtd_paes);

    printf("digite a quantidade de broas vendidas: ");
    scanf("%i", &qtd_broas);

    printf("digite o valor da reforma: ");
    scanf("%f", &valor_ref);

    fat_diario = ((qtd_paes*valor_pao)+(qtd_broas*valor_broa));



    printf("\nFaturamento com a venda de broas: R$%.2f", (qtd_broas*valor_broa));
    printf("\nFaturamento com a venda de paes: R$%.2f", (qtd_paes*valor_pao));
    printf("\nFaturamento diario (paes + broas): R$%.2f", fat_diario);

    deposito = (fat_diario*0.1);

    printf("\nO deposito na poupanca sera de: R$%.2f", deposito);

    dias = ceil(valor_ref/deposito);

    printf("\nDias necessarios para concluir a reforma: %i dias",(int)dias);

    return 0;
}
