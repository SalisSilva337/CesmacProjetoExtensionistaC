#include <stdio.h>
#include <locale.h>
#include "system.h"

void resolverSystem(double a1, double b1, double c1, double a2, double b2, double c2) {
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("Sistema Linear:\n");
    printf("%.2lfx + %.2lfy = %.2lf\n", a1, b1, c1);
    printf("%.2lfx + %.2lfy = %.2lf\n", a2, b2, c2);

    double det = a1 * b2 - a2 * b1;
    double detX = c1 * b2 - c2 * b1;
    double detY = a1 * c2 - a2 * c1;

    printf("Passo 1: Determinante principal: D = %.2lf\n", det);

    if (det == 0) {
        printf("Sistema indeterminado ou impossível.\n");
        return;
    }

    double x = detX / det;
    double y = detY / det;

    printf("Passo 2: Dx = %.2lf, Dy = %.2lf\n", detX, detY);
    printf("Passo 3: x = Dx / D = %.4lf\n", x);
    printf("Passo 4: y = Dy / D = %.4lf\n", y);
}
