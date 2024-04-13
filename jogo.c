#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite, tentativas = 0;
    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    // Gera um número aleatório entre 1 e 100
    numeroSecreto = rand() % 100 + 1;

    printf("Bem-vindo ao Jogo de Adivinhar o Número!\n");
    printf("Tente adivinhar o número secreto entre 1 e 100.\n\n");

    do {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite > numeroSecreto) {
            printf("Muito alto! Tente um número menor.\n");
        } else if (palpite < numeroSecreto) {
            printf("Muito baixo! Tente um número maior.\n");
        } else {
            printf("Parabéns! Você acertou o número secreto %d em %d tentativas!\n", numeroSecreto, tentativas);
        }
    } while (palpite != numeroSecreto);

    return 0;
}
