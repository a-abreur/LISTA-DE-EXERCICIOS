#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cavalos;
    float valorF;
    int TTferraduras;
    float valorTT;


    printf("informe a quantidade de cavalos: ");
    scanf("%i", &cavalos);

    printf("Informe o valor da ferradura:");
    scanf("%f", &valorF);

    TTferraduras = cavalos * 4;
    valorTT = TTferraduras * valorF;

    printf("\nquantidade de ferraduras necessarias: %i", TTferraduras);
    printf("\nValor total da compra das ferraduras: R$%.2f", valorTT);


    return 0;
}

