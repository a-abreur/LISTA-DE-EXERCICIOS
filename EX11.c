#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sucolts;
    float agua;
    float sucoM;


    printf("digite a quantidade de suco necessaria: ");
    scanf("%i", &sucolts);

    agua = sucolts * 0.8;
    sucoM = sucolts * 0.2;

    printf("\nSERA NECESSARIO PARA FAZER %i LTS DE SUCO DE MARACUJA:\n", sucolts);
    printf("%.2f LTS de agua\n", agua);
    printf("%.2f LTS de suco concentrado de maracuja\n\n\b", sucoM);



    return 0;
}
