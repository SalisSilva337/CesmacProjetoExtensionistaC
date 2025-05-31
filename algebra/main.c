#include <stdio.h>
#include <locale.h>
#include "primeiroGrau.h"
#include "segundoGrau.h"
#include "system.h"

int main() {

      setlocale(LC_ALL, "Portuguese");


    int coefCount;
    double inputs[6];

    printf("---------------------------------\n");
    printf("-------Cálculos Algébricos-------\n");
    printf("---------------------------------\n");

    printf("Digite os coeficientes (máximo 6):\n");

    printf("Exemplos:\n");
    printf("  a b                   → Equação do 1º grau\n");
    printf("  a b c                 → Equação do 2º grau\n");
    printf("  a1 b1 c1 a2 b2 c2     → Sistema linear 2x2\n\n");

    printf("Quantidade de coeficientes: ");
    scanf("%d", &coefCount);

    if (coefCount != 2 && coefCount != 3 && coefCount != 6) {
        printf("Quantidade inválida!\n");
        return 1;
    }

    printf("Digite os coeficientes: ");
    for (int i = 0; i < coefCount; i++) {
        scanf("%lf", &inputs[i]);
    }

    printf("------------------------------\n");

    if (coefCount == 2) {
        resolverEquacaoPrimeiroGrau(inputs[0], inputs[1]);
    } else if (coefCount == 3) {
        resolverEquacaoSegundoGrau(inputs[0], inputs[1], inputs[2]);
    } else {
        resolverSystem(inputs[0], inputs[1], inputs[2], inputs[3], inputs[4], inputs[5]);
    }

    printf("------------------------------\n");
    return 0;
}