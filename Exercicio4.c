#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario;
    printf("Informe o valor da conta: ");
    scanf("%f", &salario);
    printf("A porcentagem do garçom é: R$%.2f", 0.1*salario);
    
    
    return 0;
}
