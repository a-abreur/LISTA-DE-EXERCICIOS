#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1;
    int valor2;
    float result;

    printf("informe o valor 1:");
    scanf("%i", &valor1);

    printf("informe o valor 2:");
    scanf("%i", &valor2);

    result = valor1 / valor2;

    printf("A divisão de %i por %i e %.2f", valor1, valor2, result);



    return 0;
}
