#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, resp;
    printf("Digite um valor INTEIRO!!, para saber se é ÍMPAR ou PAR...:");
    scanf("%d", &x);

    if(x%2 == 0){
        printf("\nO número %d é PAR", x);
    }else{
        printf("\nO número %d é ÍMPAR", x);
    }

    printf("\n\nDeseja saber se outro número é ÍMPAR ou PAR? 1-SIM ou 2-NÃO...:");
    scanf("%i",&resp);
    system ("cls");


    while(resp==1){

        printf("Digite o valor, para saber se é ÍMPAR ou PAR...:");
    scanf("%d", &x);

    if(x%2 == 0){
        printf("\nO número %d é PAR", x);
    }else{
        printf("\nO número %d é ÍMPAR", x);
    }

    printf("\n\nDeseja saber se outro número é ÍMPAR ou PAR? 1-SIM ou 2-NÃO...:");
    scanf("%i",&resp);
    system ("cls");


    }

    return 0;
}
