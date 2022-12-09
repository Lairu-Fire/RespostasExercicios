#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario;
    printf("Informe o seu salario: ");
    scanf("%f", &salario);
    printf("Seu salario ajustado é: %.2f", 1.1*salario);
    
    
    return 0;
}
