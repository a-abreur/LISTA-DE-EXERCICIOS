#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lata;
    int meia;
    int garrafa;
    float litros;


    printf("Digite a quantidade de latas de 350ML: ");
    scanf("%i", &lata);

    printf("Digite a quantidade de garrafas de 600ML: ");
    scanf("%i", &meia);

    printf("Digite a quantidade de garrafas de 2L: ");
    scanf("%i", &garrafa);


    litros = ((lata * 350) + (meia*600) + (garrafa*2000))/1000;

    printf("\n\nA quantidade total de litros e: %.2f\n\n", litros);


    return 0;
}

