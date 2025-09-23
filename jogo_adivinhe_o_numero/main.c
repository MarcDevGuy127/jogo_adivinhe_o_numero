#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//caso windows32
#ifdef _WIN32
  #define CLEAR_CMD "cls"  // comando para limpar tela no Windows
#else
  #define CLEAR_CMD "clear" // comando para limpar tela em Unix-like
#endif

void limparTela() {
    system(CLEAR_CMD);
}

int aleatoriza(int minimo, int maximo) {
    return minimo + rand() % (maximo - minimo + 1);
}

int main()
{
    srand(time(NULL));

    int num_secreto = aleatoriza(1,100);
    int num_digitado;

    do {
        printf("Adivinhe o numero que estou pensando!\n");
        printf("Darei dicas quando necessario.\n");
        printf("Digite um numero: ");
        scanf("%d", &num_digitado);
        getchar();

        if(num_digitado < num_secreto) {
            printf("Dica: o numero que estou pensando e maior que %d.", num_digitado);

            getchar();

            limparTela();
        } else if(num_digitado > num_secreto) {

            printf("Dica: o numero que estou pensando e menor que %d.", num_digitado);

            getchar();

            limparTela();
        } else {
            printf("Voce ganhou!");

            getchar();

            limparTela();
        };
    } while (num_digitado != num_secreto);

    return 0;
}
