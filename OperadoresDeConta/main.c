#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
    {
        int x,num1,num2, resp;
        float aux, num3,num4;
            setlocale(LC_ALL, "Portuguese");

            printf(" 1-Adi��o  \n\n 2-Subtra��o   \n\n 3-Multiplica��o   \n\n 4-Divis�o");
            printf("\n\n Digite o n�mero de uma das opera��o matem�tica acima...:");
            scanf("%d",&x);

    while(x>4){
            printf("    \n\nERRO!! DIGITE UM VALOR DE ACORDO COM A TABELA ACIMA!!!\n\n");
            printf("\nSelecione uma opera��o matem�tica...:");
            scanf("%i",&x);

    }if(x == 1){

            system("cls");

            printf("\n Digite o PRIMEIRO n�mero para que seja feita a soma...:" );
            scanf("%d",&num1);
            printf("\n Digite o SEGUNDO n�mero para que seja feita a soma...:" );
            scanf("%d",&num2);

            aux = num1+num2;

            printf("\n Resultado da soma...: %d + %d = %.0f", num1, num2, aux);

    }if(x == 2){

            system("cls");

            printf("\n Digite o PRIMEIRO n�mero para que seja feita a subtra��o...:");
            scanf("%i",&num1);
            printf("\n Digite o SEGUNDO n�mero para que seja feita a subtra��o...:");
            scanf("%i",&num2);

            aux = num1-num2;

            printf("\n Resultado da subtra��o...: %d - %d = %.0f", num1, num2, aux);

    }if(x == 3){

            system("cls");

            printf("\nDigite o PRIMEIRO n�mero para que seja feita a multiplica��o...:");
            scanf("%i",&num1);
            printf("\nDigite o SEGUNDO n�mero para que seja feita a multiplica��o...:");
            scanf("%i",&num2);

            aux = num1*num2;

            printf("\nResultado da multiplica��o...: %d x %d = %.0f", num1, num2, aux);

     }if(x == 4){

            system("cls");

            printf("\nDigite o PRIMEIRO n�mero para que seja feita a divis�o...:");
            scanf("%f",&num3);
            printf("\nDigite o SEGUNDO n�mero para que seja feita a divis�o...:");
            scanf("%f",&num4);

            aux = num3/num4;

            printf("\nResultado da multiplica��o...: %0.f / %.0f = %.2f", num3, num4, aux);

    }

            printf(" \n\n Deseja fazer uma nova opera��o matem�tica? 1-SIM ou 2-N�O...:");
            scanf("%i", &resp);
            system ("cls");



    while(resp == 1){

            setlocale(LC_ALL, "Portuguese");

            printf(" 1-Adi��o  \n\n 2-Subtra��o   \n\n 3-Multiplica��o   \n\n 4-Divis�o");
            printf("\n\n Digite o n�mero de uma das opera��o matem�tica acima...:");
            scanf("%i",&x);

    while(x>4){

            printf("    \n\nERRO!! DIGITE UM VALOR DE ACORDO COM A TABELA ACIMA!!!\n\n");
            printf("\nSelecione uma opera��o matem�tica...:");
            scanf("%i",&x);
        }

            printf("\n Digite o primeiro n�mero para que seja feita a opera��o matem�tica...:");
            scanf("%i",&num1);

            printf("\n\n Digite o segundo n�mero para que seja feita a opera��o matem�tica...:");
            scanf("%i",&num2);

    if(x == 1){

            system("cls");

            printf("\nDigite o PRIMEIRO n�mero para que seja feita a soma...:" );
            scanf("%d",&num1);
            printf("\nDigite o SEGUNDO n�mero para que seja feita a soma...:" );
            scanf("%d",&num2);

            aux = num1+num2;

            printf("\nResultado da soma...: %d + %d = %d", num1, num2, aux);

    }if(x == 2){

            system("cls");

            printf("\nDigite o PRIMEIRO n�mero para que seja feita a subtra��o...:");
            scanf("%d",&num1);
            printf("\nDigite o SEGUNDO n�mero para que seja feita a subtra��o...:");
            scanf("%d",&num2);

            aux = num1-num2;

            printf("\nResultado da subtra��o...: %d - %d = %d", num1, num2, aux);

    }if(x == 3){

            system("cls");

            printf("\nDigite o PRIMEIRO n�mero para que seja feita a multiplica��o...:");
            scanf("%d",&num1);
            printf("\nDigite o SEGUNDO n�mero para que seja feita a multiplica��o...:");
            scanf("%d",&num2);

            aux = num1*num2;

            printf("\nResultado da multiplica��o...: %d x %d = %d", num1, num2, aux);

    }if(x == 4){
            system("cls");

            printf("\nDigite o PRIMEIRO n�mero para que seja feita a divis�o...:");
            scanf("%d",&num1);
            printf("\nDigite o SEGUNDO n�mero para que seja feita a divis�o...:");
            scanf("%d",&num2);

            aux = num1/num2;

            printf("\nResultado da multiplica��o...: %d / %d = %0.2f", num1, num2, aux);
        }
            printf(" \n\n Deseja fazer uma nova opera��o matem�tica? 1-SIM ou 2-N�O...:");
            scanf("%i", &resp);
            system ("cls");

            }

    return 0;
}
