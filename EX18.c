#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;
    printf("valor da conta: ");
    scanf("%f", &valor);

    float div3 = (valor/3);

    //printf("%.2f", div3);


    int carlos = (int)div3;
    int andre = (int)div3;
    float felipe = valor - carlos - andre;

    printf("Carlos pagara: R$%i\nAndre pagara R$%i\nFelipe pagara: R$%.2f", carlos, andre, felipe);

    return 0;
}
