#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[50], sexo[10];
    int idade;
    printf("Informe seu nome: ");
    gets(nome);
    printf("Informe seu sexo (masculino ou feminino): ");
    gets(sexo);
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    
    if (sexo[0] == 'f' || sexo[0] == 'F')
    printf("É mulher");
    else
    printf("Não é mulher");
    
    
    return 0;
}
