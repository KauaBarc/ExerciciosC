#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
    {
        int x,num1,num2, resp;
        float aux, num3,num4;
            setlocale(LC_ALL, "Portuguese");

            printf(" 1-Adição  \n\n 2-Subtração   \n\n 3-Multiplicação   \n\n 4-Divisão");
            printf("\n\n Digite o número de uma das operação matemática acima...:");
            scanf("%d",&x);

    while(x>4){
            printf("    \n\nERRO!! DIGITE UM VALOR DE ACORDO COM A TABELA ACIMA!!!\n\n");
            printf("\nSelecione uma operação matemática...:");
            scanf("%i",&x);

    }if(x == 1){

            system("cls");

            printf("\n Digite o PRIMEIRO número para que seja feita a soma...:" );
            scanf("%d",&num1);
            printf("\n Digite o SEGUNDO número para que seja feita a soma...:" );
            scanf("%d",&num2);

            aux = num1+num2;

            printf("\n Resultado da soma...: %d + %d = %.0f", num1, num2, aux);

    }if(x == 2){

            system("cls");

            printf("\n Digite o PRIMEIRO número para que seja feita a subtração...:");
            scanf("%i",&num1);
            printf("\n Digite o SEGUNDO número para que seja feita a subtração...:");
            scanf("%i",&num2);

            aux = num1-num2;

            printf("\n Resultado da subtração...: %d - %d = %.0f", num1, num2, aux);

    }if(x == 3){

            system("cls");

            printf("\nDigite o PRIMEIRO número para que seja feita a multiplicação...:");
            scanf("%i",&num1);
            printf("\nDigite o SEGUNDO número para que seja feita a multiplicação...:");
            scanf("%i",&num2);

            aux = num1*num2;

            printf("\nResultado da multiplicação...: %d x %d = %.0f", num1, num2, aux);

     }if(x == 4){

            system("cls");

            printf("\nDigite o PRIMEIRO número para que seja feita a divisão...:");
            scanf("%f",&num3);
            printf("\nDigite o SEGUNDO número para que seja feita a divisão...:");
            scanf("%f",&num4);

            aux = num3/num4;

            printf("\nResultado da multiplicação...: %0.f / %.0f = %.2f", num3, num4, aux);

    }

            printf(" \n\n Deseja fazer uma nova operação matemática? 1-SIM ou 2-NÃO...:");
            scanf("%i", &resp);
            system ("cls");



    while(resp == 1){

            setlocale(LC_ALL, "Portuguese");

            printf(" 1-Adição  \n\n 2-Subtração   \n\n 3-Multiplicação   \n\n 4-Divisão");
            printf("\n\n Digite o número de uma das operação matemática acima...:");
            scanf("%i",&x);

    while(x>4){

            printf("    \n\nERRO!! DIGITE UM VALOR DE ACORDO COM A TABELA ACIMA!!!\n\n");
            printf("\nSelecione uma operação matemática...:");
            scanf("%i",&x);
        }

            printf("\n Digite o primeiro número para que seja feita a operação matemática...:");
            scanf("%i",&num1);

            printf("\n\n Digite o segundo número para que seja feita a operação matemática...:");
            scanf("%i",&num2);

    if(x == 1){

            system("cls");

            printf("\nDigite o PRIMEIRO número para que seja feita a soma...:" );
            scanf("%d",&num1);
            printf("\nDigite o SEGUNDO número para que seja feita a soma...:" );
            scanf("%d",&num2);

            aux = num1+num2;

            printf("\nResultado da soma...: %d + %d = %d", num1, num2, aux);

    }if(x == 2){

            system("cls");

            printf("\nDigite o PRIMEIRO número para que seja feita a subtração...:");
            scanf("%d",&num1);
            printf("\nDigite o SEGUNDO número para que seja feita a subtração...:");
            scanf("%d",&num2);

            aux = num1-num2;

            printf("\nResultado da subtração...: %d - %d = %d", num1, num2, aux);

    }if(x == 3){

            system("cls");

            printf("\nDigite o PRIMEIRO número para que seja feita a multiplicação...:");
            scanf("%d",&num1);
            printf("\nDigite o SEGUNDO número para que seja feita a multiplicação...:");
            scanf("%d",&num2);

            aux = num1*num2;

            printf("\nResultado da multiplicação...: %d x %d = %d", num1, num2, aux);

    }if(x == 4){
            system("cls");

            printf("\nDigite o PRIMEIRO número para que seja feita a divisão...:");
            scanf("%d",&num1);
            printf("\nDigite o SEGUNDO número para que seja feita a divisão...:");
            scanf("%d",&num2);

            aux = num1/num2;

            printf("\nResultado da multiplicação...: %d / %d = %0.2f", num1, num2, aux);
        }
            printf(" \n\n Deseja fazer uma nova operação matemática? 1-SIM ou 2-NÃO...:");
            scanf("%i", &resp);
            system ("cls");

            }

    return 0;
}
