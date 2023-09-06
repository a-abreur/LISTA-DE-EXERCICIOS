#include <stdio.h>
#include <stdlib.h>
//ABS = absoluto
int main()
{
    int Ninformado;

    printf("Informe o numero para o calculo da tabuada: ");
    scanf("%i", &Ninformado);

    float div1 = Ninformado / 1;
    float div2 = Ninformado / 2;
    float div3 = Ninformado / 3;
    float div4 = Ninformado / 4;
    float div5 = Ninformado / 5;
    float div6 = Ninformado / 6;
    float div7 = Ninformado / 7;
    float div8 = Ninformado / 8;
    float div9 = Ninformado / 9;

    printf("\nTabuada do + e do - para o numero %i:", Ninformado);
    printf("\n%i + 0 = %i      %i - 0 = %i", Ninformado,(Ninformado + 0), Ninformado,abs(Ninformado - 0));
    printf("\n%i + 1 = %i      %i - 1 = %i", Ninformado,(Ninformado + 1), Ninformado,abs(Ninformado - 1));
    printf("\n%i + 2 = %i      %i - 2 = %i", Ninformado,(Ninformado + 2), Ninformado,abs(Ninformado - 2));
    printf("\n%i + 3 = %i      %i - 3 = %i", Ninformado,(Ninformado + 3), Ninformado,abs(Ninformado - 3));
    printf("\n%i + 4 = %i      %i - 4 = %i", Ninformado,(Ninformado + 4), Ninformado,abs(Ninformado - 4));
    printf("\n%i + 5 = %i      %i - 5 = %i", Ninformado,(Ninformado + 5), Ninformado,abs(Ninformado - 5));
    printf("\n%i + 6 = %i      %i - 6 = %i", Ninformado,(Ninformado + 6), Ninformado,abs(Ninformado - 6));
    printf("\n%i + 7 = %i      %i - 7 = %i", Ninformado,(Ninformado + 7), Ninformado,abs(Ninformado - 7));
    printf("\n%i + 8 = %i      %i - 8 = %i", Ninformado,(Ninformado + 8), Ninformado,abs(Ninformado - 8));
    printf("\n%i + 9 = %i      %i - 9 = %i", Ninformado,(Ninformado + 9), Ninformado,abs(Ninformado - 9));


    printf("\n\nTabuada do * e do / para o numero %i:", Ninformado);
    printf("\n%i * 0 = %i      %i / 0 = Nao existe", Ninformado,(Ninformado * 0), Ninformado);
    printf("\n%i * 1 = %i      %i / 1 = %f", Ninformado,(Ninformado * 1), Ninformado, div1);
    printf("\n%i * 2 = %i      %i / 2 = %f", Ninformado,(Ninformado * 2), Ninformado, div2);
    printf("\n%i * 3 = %i      %i / 3 = %f", Ninformado,(Ninformado * 3), Ninformado, div3);
    printf("\n%i * 4 = %i      %i / 4 = %f", Ninformado,(Ninformado * 4), Ninformado, div4);
    printf("\n%i * 5 = %i      %i / 5 = %f", Ninformado,(Ninformado * 5), Ninformado, div5);
    printf("\n%i * 6 = %i      %i / 6 = %f", Ninformado,(Ninformado * 6), Ninformado, div6);
    printf("\n%i * 7 = %i      %i / 7 = %f", Ninformado,(Ninformado * 7), Ninformado, div7);
    printf("\n%i * 8 = %i      %i / 8 = %f", Ninformado,(Ninformado * 8), Ninformado, div8);
    printf("\n%i * 9 = %i      %i / 9 = %f", Ninformado,(Ninformado * 9), Ninformado, div9);
    printf("\n\n");

    return 0;
}
