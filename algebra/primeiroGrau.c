#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "primeiroGrau.h"

void resolverEquacaoPrimeiroGrau(double a, double b) {
    
    setlocale(LC_ALL, "Portuguese");

    printf("Equação do 1º grau: %.2lfx + %.2lf = 0\n", a, b);
    
    if (a == 0) {
        if (b == 0)
    
            printf("Infinitas soluções.\n");
    
        else
    
            printf("Sem solução.\n");
    
        return;
    
    }
   
    double x = -b / a;
   
    printf("Passo 1: Isolando x: %.2lfx = -%.2lf\n", a, b);
   
    printf("Passo 2: x = -%.2lf / %.2lf\n", b, a);
   
    printf("Solução: x = %.4lf\n", x);
}
