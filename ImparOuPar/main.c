#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int aux, x, resp;
    printf("Digite o valor, para saber se � �MPAR ou PAR...:");
    scanf("%i", &x);

    aux = x%2;

    if(aux == 0){
        printf("\nO n�mero %i � PAR", x);
    }else{
        printf("\nO n�mero %i � �MPAR", x);
    }

    printf("\n\nDeseja saber se outro n�mero � �MPAR ou PAR? 1-SIM ou 2-N�O...:");
    scanf("%i",&resp);
    system ("cls");


    while(resp==1){

        printf("Digite o valor, para saber se � �MPAR ou PAR...:");
    scanf("%i", &x);

    aux = x%2;

    if(aux == 0){
        printf("\nO n�mero %i � PAR", x);
    }else{
        printf("\nO n�mero %i � �MPAR", x);
    }

    printf("\n\nDeseja saber se outro n�mero � �MPAR ou PAR? 1-SIM ou 2-N�O...:");
    scanf("%i",&resp);
    system ("cls");


    }

    return 0;
}
