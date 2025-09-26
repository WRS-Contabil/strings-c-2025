#include <stdio.h>

int main() {

    //sequencia de fibonacci

    int n;

    printf("Qual a quantidade de elementos: ");
    scanf("%d", &n);

    int sequencia[n];

    if(n >= 1){
        sequencia[0] = 0;
    }
    if(n >= 2){
        sequencia[1] = 1;
    }

    //for é loop e começa na posição dois e repete até analisar tudo digitado
    int cont;
    
    for(cont = 2; cont < n;cont++);
        sequencia[cont] = sequencia[cont - 1] + sequencia[cont - 2];

        printf("Sequencia de Fibonacci\n");
        for(int cont = 0; cont < n; cont++){
            printf("%d ", sequencia[cont]);
        }
        printf("\n");


    return 0;
}