#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anoI;
    int anoF;
    int idadeA;
    int idadeM;
    int idadeS;
    int idadeD;

    printf("Ano inicial: ");
    scanf("%i", &anoI);

    printf("Ano atual: ");
    scanf("%i", &anoF);

    idadeA = anoF - anoI;
    idadeM = (anoF - anoI) * 12;
    idadeS = ((anoF - anoI) * 12)*4;
    idadeD = ((anoF - anoI) * 12)*30;

    printf("A idade dessa pessoa em\n");
    printf("anos: %i\n", idadeA);
    printf("meses:%i\n",idadeM);
    printf("semanas:%i\n", idadeS);
    printf("dias:%i\n", idadeD);


    return 0;
}
