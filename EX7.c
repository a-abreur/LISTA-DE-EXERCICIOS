#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso;
    float peso15;
    float peso20;

    printf("informe seu peso em KG: ");
    scanf("%f", &peso);

    peso15 = peso * 1.15;
    peso20 = peso * 1.2;

    printf("Caso a pessoa engorde 15%% ficara com: %.2f", peso15);
    printf("\nCaso a pessoa engorde 20%% ficara com: %.2f", peso20);



    return 0;
}
