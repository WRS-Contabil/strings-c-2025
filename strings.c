#include<stdio.h>

int main(){

    char nome[10] = "William";

    printf("%s\n", nome);

    for (int cont = 0;nome[cont] != '\0';cont++){
        printf("%c\n", nome[cont]);
    }

    char mensagem[20];

    printf("Digite uma mensagem curta:");
    //scanf("%[^\n]", mensagem); //Lê até a quebra de linha
    //scanf("%s", mensagem);
    scanf("%20[^\n]", mensagem);

    printf("%s\n", mensagem);

    return 0;
}