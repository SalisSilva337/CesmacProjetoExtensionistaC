#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include "segundoGrau.h"

void resolverEquacaoSegundoGrau(double a, double b, double c) {

        setlocale(LC_ALL, "Portuguese");
    
    printf("Equação do 2º grau: %.2lfx² + %.2lfx + %.2lf = 0\n", a, b, c);
    
    if (a == 0) {
   
        printf("Não é equação do 2º grau.\n");
   
        return;
    
    }
    
    double delta = b * b - 4 * a * c;
    
    printf("Passo 1: Calculando delta: Δ = %.2lf² - 4 * %.2lf * %.2lf = %.2lf\n", b, a, c, delta);
    
    if (delta < 0) {
        printf("Não há raízes reais.\n");
    } else if (delta == 0) {
    
        double x = -b / (2 * a);
    
        printf("Delta = 0: raiz única x = %.4lf\n", x);
    
    } else {
    
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
    
        printf("Passo 2: x1 = (-%.2lf + √%.2lf) / (2 * %.2lf) = %.4lf\n", b, delta, a, x1);
        printf("Passo 3: x2 = (-%.2lf - √%.2lf) / (2 * %.2lf) = %.4lf\n", b, delta, a, x2);
    
    }
}