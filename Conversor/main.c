#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float m, cm, ml, dcm, calc1, calc2, calc3;
    int resp;
    printf("Digite um valor em METROS para ser mostrado em decímetros, centímetros e milímetros...:");
    scanf("%f",&m);
    calc1 = m*10;
    calc2 = m*100;
    calc3 = m*1000;

    printf("\n========================\RESPOSTA\============================\n");
    printf("\nO valor em decímetros é:%.0f", calc1);
    printf("\n\nO valor em centímetros é:%.0f", calc2);
    printf("\n\nO valor em milímetros é:%.0f\n\n", calc3);
    printf("==========================\\==============================\n");

    printf("\nDeseja fazer outro cálculo? DIGITE 1-SIM OU 2-NÃO...:");
    scanf("%i", &resp);
    fflush(stdin);
    system("cls");

    while(resp ==1){

    printf("Digite um valor em METROS para ser mostrado em decímetros, centímetros e milímetros...:");
    scanf("%f",&m);

    calc1 = m*10;
    calc2 = m*100;
    calc3 = m*1000;

    printf("\n========================\RESPOSTA\============================\n");
    printf("\nO valor em decímetros é:%.0f", calc1);
    printf("\n\nO valor em centímetros é:%.0f", calc2);
    printf("\n\nO valor em milímetros é:%.0f\n\n", calc3);
    printf("==========================\\==============================\n");

    printf("Deseja fazer outro cálculo? DIGITE 1-SIM OU 2-NÃO...:");
    scanf("%i", &resp);
    fflush(stdin);
    system("cls");
}

   return 0;
}
