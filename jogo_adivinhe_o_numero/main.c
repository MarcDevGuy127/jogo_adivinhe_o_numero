#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_digitado;

    //testando recebimento do valor digitado
    printf("Adivinhe o numero que estou pensando!\n");
    printf("Darei dicas quando necessario.\n");

    printf("Digite um numero: ");
    scanf("%d", &num_digitado);
    printf("Valor digitado: %d", num_digitado);

    return 0;
}
