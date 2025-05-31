#include <stdio.h>
#include <math.h>
#include <locale.h>

#define PI 3.141592653589793

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int escolha;
    double angulo_graus, angulo_rad;
    double seno, cosseno, tangente;

    printf("Escolha qual razão trigonométrica você quer:\n");
    printf("1 - SENO\n2 - COSSENO\n3 - TANGENTE\n");
    scanf("%d", &escolha);
 
    printf("Digite o ângulo em graus: ");
    scanf("%lf", &angulo_graus);

   // escolhe  o tipo de resolução
    switch (escolha) {
        case 1:
            angulo_rad = angulo_graus * (PI / 180.0);  // converte pra radiano
            seno = sin(angulo_rad);
            printf("Seno: %.4f\n", seno);
            break;

        case 2:
            angulo_rad = angulo_graus * (PI / 180.0);
            cosseno = cos(angulo_rad);
            printf("Cosseno: %.4f\n", cosseno);
            break;

        case 3:
            if(angulo_graus == 90){
                printf("Tangente indefinida.");
            }
            else{
                angulo_rad = angulo_graus * (PI / 180.0); 
                tangente = tan(angulo_rad);
                printf("Tangente: %.4f\n", tangente);
            }
            break;

        default:
            printf("Opção inválida.\n");
    }

    return 0;
}

