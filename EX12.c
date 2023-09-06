#include <stdio.h>
#include <stdlib.h>

int main()
{
    int frango;
    float valor = 11;
    float total;

    printf("Digite a QTDE de frangos: ");
    scanf("%i", &frango);

    total = frango*valor;

    printf("O valor total para identificar os frangos e: R$%.2f", total);


    return 0;
}
