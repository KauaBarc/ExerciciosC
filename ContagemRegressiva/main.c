#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int x=0,i, resp;

    setlocale(LC_ALL, "Portuguese");
    printf(" Digite o n�mero para iniciar a contagem regressiva...:");
    scanf("%i",&x);

    for(i=0; i<=x; x--){

        printf("\n %i\n",x);
    }
    printf(" \n Deseja fazer a contagem regrassiva de algum outro n�mero? 1-SIM ou 2-N�O...:");
    scanf("%i", &resp);
    system ("cls");
    while(resp == 1){
        printf(" Digite o n�mero para iniciar a contagem regressiva...:");
    scanf("%i",&x);

    for(i=0; i<=x; x--){

        printf("\n %i\n",x);
    }
    printf("\n Deseja fazer a contagem regrassiva de algum outro n�mero? 1-SIM ou 2-N�O...:");
    scanf("%i", &resp);
    system ("cls");
    }
    return 0;
}
