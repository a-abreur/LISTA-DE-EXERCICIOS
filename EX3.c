#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1;
    float nota2;
    float nota3;
    float mediaP;
    int peso1 = 1;
    int peso2 = 2;
    int peso3 = 3;


    printf("Informe a nota 1: ");
    scanf("%f", &nota1);

    printf("Informe a nota 2: ");
    scanf("%f", &nota2);

    printf("Informe a nota 3: ");
    scanf("%f", &nota3);

    mediaP = ((nota1*peso1) + (nota2*peso2) + (nota3*peso3)) / (peso1+peso2+peso3);

    printf("A media ponderada das notas e: %.2f", mediaP);


    return 0;
}
