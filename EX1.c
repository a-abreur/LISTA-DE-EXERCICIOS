#include <stdio.h>
#include <stdlib.h>


int main()
{

    float lateral;
    float frente;
    float valor_mt2;
    float area;
    float valor_tt;


    printf("Quantos metros o terreno possui de frente:");
    scanf("%f", &frente);

    printf("Quantos metros o terreno possui de lateral:");
    scanf("%f", &lateral);

    printf("Informe o valor do metro quadrado:");
    scanf("%f", &valor_mt2);

    area = (lateral*frente);
    valor_tt = (area*valor_mt2);

    printf("O seu terreno possui uma area total de: %.2f", area);
    printf("\nO valor do terreno e: R$%.2f", valor_tt);








    return 0;
}
