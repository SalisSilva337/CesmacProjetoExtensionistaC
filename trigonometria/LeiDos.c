#include <stdio.h>
#include <math.h>
#include <locale.h>

#define PI 3.141592653589793

double grausParaRadianos(double graus) {
    return graus * (PI / 180.0);
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    char ladoX;
    double A, B, C, a, b, c;

    printf("Qual lado você quer descobrir? Digite 'a', 'b' ou 'c': ");
    scanf(" %c", &ladoX); // espaço antes do %c para ignorar '\n'

    switch (ladoX) {
        case 'a':
            printf("Digite o ângulo A (graus): ");
            scanf("%lf", &A);
            printf("Digite o ângulo B (graus): ");
            scanf("%lf", &B);
            printf("Digite o lado b: ");
            scanf("%lf", &b);

            A = grausParaRadianos(A);
            B = grausParaRadianos(B);

            if (sin(B) == 0) {
                printf("Erro: divisão por zero.\n");
                return 1;
            }

            a = (b * sin(A)) / sin(B);
            printf("O lado a é: %.2f\n", a);
            break;

        case 'b':
            printf("Digite o ângulo B (graus): ");
            scanf("%lf", &B);
            printf("Digite o ângulo A (graus): ");
            scanf("%lf", &A);
            printf("Digite o lado a: ");
            scanf("%lf", &a);

            A = grausParaRadianos(A);
            B = grausParaRadianos(B);

            if (sin(A) == 0) {
                printf("Erro: divisão por zero.\n");
                return 1;
            }

            b = (a * sin(B)) / sin(A);
            printf("O lado b é: %.2f\n", b);
            break;

        case 'c':
            printf("Digite o ângulo C (graus): ");
            scanf("%lf", &C);
            printf("Digite o ângulo A (graus): ");
            scanf("%lf", &A);
            printf("Digite o lado a: ");
            scanf("%lf", &a);

            A = grausParaRadianos(A);
            C = grausParaRadianos(C);

            if (sin(A) == 0) {
                printf("Erro: divisão por zero.\n");
                return 1;
            }

            c = (a * sin(C)) / sin(A);
            printf("O lado c é: %.2f\n", c);
            break;

        default:
            printf("Opção inválida. Use 'a', 'b' ou 'c'.\n");
            break;
    }

    return 0;
}
