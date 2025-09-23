#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatoriza(int minimo, int maximo) {
    return minimo + rand() % (maximo - minimo + 1);
}

int main()
{
    int num_digitado;

    srand(time(NULL));

    //testando recebimento do valor digitado
    printf("Adivinhe o numero que estou pensando!\n");
    printf("Darei dicas quando necessario.\n");

    //aleatoriza(1, 100);

    //testando numero aleatorio
    printf("Numero Aleatorio: %d", aleatoriza(1, 100));

    //printf("Digite um numero: ");
    //scanf("%d", &num_digitado);
    //printf("Valor digitado: %d", num_digitado);

    //if(num_digitado == num_ad) {};

    return 0;
}
