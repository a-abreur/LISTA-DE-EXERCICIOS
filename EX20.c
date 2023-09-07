#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int milhar;
    int centena;
    int dezena;
    int unidade;

    printf("digite um numero: ");
    scanf("%i", &numero);

    milhar = numero / 1000;
    milhar = (int)milhar;

    centena = numero - (milhar*1000);
    centena = (int) centena/100;

    dezena = numero - ((milhar*1000)+(centena*100));
    dezena = (int) dezena/10;

    unidade = numero - ((milhar*1000)+(centena*100)+(dezena*10));
    unidade = (int) unidade;



    printf("milhar: %i\ndezena: %i\ncentena: %i\nunidade: %i", milhar, centena,dezena , unidade);



    return 0;
}
