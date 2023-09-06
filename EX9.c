#include <stdio.h>
#include <stdlib.h>

int main()
{
    //trapézio
    int baseMaiorTra;
    int baseMEnorTra;
    int alturaTra;
    float areaTra;
    printf("Area do trapezio:");
    printf("\ninforme o valor da base maior: ");
    scanf("%i", &baseMaiorTra);
    printf("informe o valor da base menor: ");
    scanf("%i", &baseMEnorTra);
    printf("informe o valor da altura: ");
    scanf("%i", &alturaTra);
    areaTra = ((baseMaiorTra + baseMEnorTra) * alturaTra) / 2;
    printf("A area do trapezio e: %.2f", areaTra);


    //quadrado
    int ladosQ;
    int areaQ;
    printf("\n\nArea do quadrado:\n");
    printf("informe o valor de um dos lados: ");
    scanf("%i", &ladosQ);
    areaQ = ladosQ*ladosQ;
    printf("A area do quadrado e: %i", areaQ);


    //retangulo
    int larguraR;
    int alturaR;
    int areaR;
    printf("\n\nArea do retangulo:\n");
    printf("informe o valor da largura: ");
    scanf("%i", &larguraR);
    printf("informe o valor da altura: ");
    scanf("%i", &alturaR);
    areaR = larguraR*alturaR;
    printf("A area do retangulo e: %i", areaR);


    //circulo
    int raio;
    float areaC;
    printf("\n\nArea do circulo:\n");
    printf("informe o valor do raio: ");
    scanf("%i", &raio);
    areaC = (raio*raio)*3.14;
    printf("A area do circulo e: %.2f", areaC);


    //triangulo
    int baseT;
    int alturaT;
    float areaT;
    printf("\n\nArea do triangulo:\n");
    printf("informe o valor da base: ");
    scanf("%i", &baseT);
    printf("informe o valor da altura: ");
    scanf("%i", &alturaT);
    areaT = (baseT*alturaT)/ 2;
    printf("A area do triangulo e: %.2f\n\n", areaT);


    return 0;
}
