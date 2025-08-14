#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float C, F;
    int resp;
    setlocale(LC_ALL, "Portuguese");
    printf("\nDigite um valor que deseja converter de graus Celsius para Fahrenheit...:");
    scanf("%f", &C);

    F = (C * 1.8) + 32;

    printf("\nO resultado em Fahrenheit é %0.1f\n", F);

    printf("\nQuer converter outro valor de Celsius para Fahrenheit 1-SIM OU 2-NÃO...:");
    scanf("%i", &resp);
    fflush(stdin);
    system("cls");

    while(resp == 1){
        printf("\nDigite um valor que deseja converter de graus Celsius para Fahrenheit...:");
    scanf("%f", &C);

    F = (C * 1.8) + 32;

    printf("\nO resultado em Fahrenheit é %0.1f\n", F);

    printf("\nQuer converter outro valor de Celsius para Fahrenheit 1-SIM OU 2-NÃO...:");
    scanf("%i", &resp);
    fflush(stdin);
    system("cls");

    }

    return 0;
}
