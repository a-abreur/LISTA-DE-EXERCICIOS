#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;
    int mes;
    int tempo;

    printf("Digite o dia: ");
    scanf("%i", &dia);

    printf("Digite o mes: ");
    scanf("%i", &mes);

    tempo = (mes * 30) + dia;

    printf("A quantidade de dias que se passaram foi: %i dias", tempo);


    return 0;
}
