#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");
    char p[25];
    int tam, i, resp, eh_palindromo = 1;

        printf("Digite uma palavra:");
        scanf("%s",&p);
            tam = strlen(p);

            for(i = 0; i < tam/2 ; i++){
                if(p[i] != p[tam-1 -i]){
                eh_palindromo = 0;
                break;

                }

             }
                  if (eh_palindromo) {
                        printf("\nA palavra \"%s\" é um palíndromo!\n", p);
                    } else {
                        printf("\nA palavra \"%s\" não é um palíndromo!\n", p);

                        }

        printf("\n Deseja saber se alguma palavra é palíndromo?");
        printf("  1-SIM OU 2-NÃO...:");
        scanf("%i",&resp);
        fflush(stdin);
        system("cls");

        while(resp ==1){

            printf("Digite uma palavra:");
        scanf("%s",&p);
            tam = strlen(p);

            for(i = 0; i < tam/2 ; i++){
                if(p[i] != p[tam-1 -i]){
                eh_palindromo = 0;
                break;

                }

             }
                  if (eh_palindromo) {
                        printf("\nA palavra \"%s\" é um palíndromo!\n", p);
                    } else {
                        printf("\nA palavra \"%s\" não é um palíndromo!\n", p);

                        }

                printf("\n Deseja saber se alguma palavra é palíndromo?");
                printf("  1-SIM OU 2-NÃO...:");
                scanf("%i",&resp);
                fflush(stdin);
                system("cls");
            }

    return 0;
}
