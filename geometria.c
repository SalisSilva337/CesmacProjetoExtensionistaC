#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>



int main(){
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    printf("Selecione uma Op��o \n \n");
    printf("1.Area do Tri�ngulo \n");
    printf("2.Per�metro do C�rculo \n");
    printf("3.Pit�goras \n \n");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:

        printf("Digite o tamanho da base do tri�ngulo: \n");
        double base;
        scanf("%lf", &base);
        printf("Digite a altura do tri�ngulo: \n");
        double altura;
        scanf("%lf", &altura);
        double areaTriangulo = (base*altura)/2;
        printf("a area do tri�ngulo �: %.2lf", areaTriangulo);

        break;
    case 2:

        printf("Digite o tamanho do raio do c�rculo: \n");
        double raio;
        scanf("%lf", &raio);
        double pi = 3.14;
        double perimetroCirculo = 2*pi*raio;
        printf("o per�metro (comprimento) do c�rculo � de: %.2lf", perimetroCirculo);
        break;
    case 3:

        printf("Digite o valor do cateto 1: ");
        double cat1 = 0.0;
        scanf("%lf", &cat1);

        printf("Digite o valor do cateto 2: ");
        double cat2 = 0.0;
        scanf("%lf", &cat2);

        double hip = 0.0;
        hip = sqrt(pow(cat1, 2) + pow(cat2, 2));
        printf("Valor da sua hipotenusa: %.2lf", hip);

        break;
    default:
        break;
    }



    return 0;
}
