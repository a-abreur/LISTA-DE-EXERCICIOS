#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor1;
    float valor2;
    float result;

    printf("informe o valor 1:");
    scanf("%f", &valor1);

    printf("informe o valor 2:");
    scanf("%f", &valor2);

    result = valor1 / valor2;

    printf("A divisao de %.1f por %.1f e %.2f", valor1, valor2, result);



    return 0;
}
