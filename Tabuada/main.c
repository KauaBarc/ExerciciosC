#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int aux, res, val, resp;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite o valor que voc� quer a tabuada at� o 10...:");
    scanf("%i",&val);
    printf("\n=========================/TABUADA/=========================\n");
    for(aux =0; aux <=10; aux++){
     res = val * aux;
        printf("\n                           %i x %i = %i\n", val, aux, res );
        }

        printf("\n=============================//=============================");

        printf("\n Deseja saber a tabuada de mais um n�mero?");
        printf("  1-SIM OU 2-N�O...:");
        scanf("%i",&resp);
        fflush(stdin);
        system("cls");

        while(resp ==1){
        printf("Digite o valor que voc� quer a tabuada at� o 10...:");
        scanf("%i",&val);
        fflush(stdin);
        printf("\n=========================/TABUADA/=========================\n");
        for(aux =0; aux <=10; aux++){
        res = val * aux;
            printf("\n                           %i x %i = %i\n", val, aux, res );
        }

        printf("\n=============================//=============================");
        printf("\n Deseja saber a tabuada de mais um n�mero?");
        printf("  1-SIM OU 2-N�O...:");
        scanf("%i",&resp);
        system("cls");

        }

    return 0;
}
