#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float x = 0,y = 0, aux = 0;
    int resp = 0;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite o primeiro n�mero para ser feita soma...:");
    scanf("%f",&x);
    printf("\n\nDigite o segundo n�mero para ser feita soma...:");
    scanf("%f",&y);

    aux = x + y;

    printf("\nA soma dos dois n�meros s�o %.1f", aux);

    printf("\n\nDeseja fazer outra conta? DIGITE 1-SIM OU 2-N�O...:");
    scanf("%i", &resp);
    fflush(stdin);
    system("cls");

    while(resp ==1){

    printf("Digite o primeiro n�mero para ser feita soma...:");
    scanf("%f",&x);
    printf("\n\nDigite o segundo n�mero para ser feita soma...:");
    scanf("%f",&y);

    aux = x + y;

    printf("\nA soma dos dois n�meros s�o %.1f", aux);

    printf("\n\nDeseja fazer outra conta? DIGITE 1-SIM OU 2-N�O...:");
    scanf("%i", &resp);
    fflush(stdin);
    system("cls");
    }
    return 0;
}
