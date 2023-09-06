#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtdsanduiche;
    float qtdmussarela;
    float qtdpresunto;
    float qtdhamburguer;


    printf("Digite a quantidade de sanduiches: ");
    scanf("%i", &qtdsanduiche);

    qtdmussarela = (qtdsanduiche*0.05)*2;
    qtdpresunto = (qtdsanduiche*0.05);
    qtdhamburguer = (qtdsanduiche*0.12);


    printf("\nPar produzir %i sanduiches serao necessarios: ", qtdsanduiche);
    printf("\n%.1f KG de mussarela", qtdmussarela);
    printf("\n%.1f KG de presunto", qtdpresunto);
    printf("\n%.1f KG de hamburguer", qtdhamburguer);

    return 0;
}
