#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <primeiroGrau.h>

void resolverEquacaoPrimeiroGraus() {
    setlocale(LC_ALL, "Portuguese");
    
    float a,b;

    printf("\nEquação do 1˚ grau: ax + b = 0 \n");
    printf("");
    printf("Digite o valor de a: ");
    scanf("%f", &a);

    while (a == 0){
        printf("O valor de 'a' não pode ser zero. Digite novamente: ");
        scanf("%f", &a);
    }

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("\nPasso 1: Identificar os coeficientes: \n");
    printf("a = %.2f, b = %.2f\n", a, b);

    float x = -b / a;

    printf("\nPasso 2: Aplicar a fórmula: x = -b / a\n");
    printf("x = -%.2f / %.2f = %2.f\n", b, a, x);

    printf("\nResultado final: x = %.2f\n", x);
    
}