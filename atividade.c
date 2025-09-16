#include <stdio.h>

    int main(){

        char mensagem[50];
        int cont = 0;

        printf("Digite uma mensagem: ");
        scanf("%50[^\n]", mensagem);

        printf("Mensagem Digitada: %s\n", mensagem);


        while(mensagem[cont] !='\0'){
            cont++;
        }

            printf("Quantidade de caracteres: %d\n", cont);

        return 0;
    }