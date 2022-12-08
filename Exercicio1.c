#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float base, altura, area;
    printf("Informe a base do triângulo: ");
    scanf("%f", &base);
    printf("Informe a altura do triângulo: ");
    scanf("%f", &altura);
    area = base * altura / 2;
    printf("A área do triângulo é: %.2f", area);
    return 0;
}
