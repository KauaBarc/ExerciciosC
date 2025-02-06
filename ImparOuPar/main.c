#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int aux, x, resp;
    printf("Digite o valor, para saber se é ÍMPAR ou PAR...:");
    scanf("%i", &x);

    aux = x%2;

    if(aux == 0){
        printf("\nO número %i é PAR", x);
    }else{
        printf("\nO número %i é ÍMPAR", x);
    }

    printf("\n\nDeseja saber se outro número é ÍMPAR ou PAR? 1-SIM ou 2-NÃO...:");
    scanf("%i",&resp);
    system ("cls");


    while(resp==1){

        printf("Digite o valor, para saber se é ÍMPAR ou PAR...:");
    scanf("%i", &x);

    aux = x%2;

    if(aux == 0){
        printf("\nO número %i é PAR", x);
    }else{
        printf("\nO número %i é ÍMPAR", x);
    }

    printf("\n\nDeseja saber se outro número é ÍMPAR ou PAR? 1-SIM ou 2-NÃO...:");
    scanf("%i",&resp);
    system ("cls");


    }

    return 0;
}
