
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salarioM;
    float salarioF;
    float qtd_salario;

    printf("Informe o valor do salario minimo: ");
    scanf("%f", &salarioM);

    printf("Informe o valor do salario do funcionario: ");
    scanf("%f", &salarioF);

    qtd_salario = salarioF/salarioM;

    printf("O funcionario recebe %.1f salarios minimos!", qtd_salario);

    return 0;
}
