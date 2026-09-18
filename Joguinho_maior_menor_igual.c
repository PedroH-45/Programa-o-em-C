#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {


    int numjogador, numPC, resultado;
    char tpcomparacao;

    srand (time (0));
    numPC = rand() % 100 + 1;

    printf ("Bem-Vindo ao Jogo Maior, Menor ou Igual! \n");
    printf ("Escolha um Numeo de 1 a 100 e o Tipo da Comparacao \n");
    printf ("M. Maior \n");
    printf ("N. Menor \n");
    printf ("I. Igual \n");

    printf ("Escolha a Comparacao: \n");
    scanf ("%c", &tpcomparacao);

    printf ("Escolha um Nmero de 1 a 100: \n");
    scanf ("%d", &numjogador);

    //printf ("O Numero do Computador e: %d\n", numPC);

    switch (tpcomparacao) {
        case 'M':
        case 'm':
        printf ("Voce escolheu a Opcao Maior \n");
        resultado = numjogador > numPC ? 1: 0;
        break;

        case 'N':
        case 'n':
        printf ("Voce escolheu a Opcao Menor \n");

        resultado = numjogador < numPC ? 1: 0;
        break;

        case 'I':
        case 'i':
        printf ("Voce escolheu a Opcao Igual \n");
        resultado = numjogador == numPC ? 1: 0;
        break;
        
        default:
        printf ("Opcao de Jogo Invalida \n");
    }

     printf ("O Numero do Computador e: %d\nE o numero do Jogador e: %d\n", numPC, numjogador);

    if (resultado == 1) {
        printf ("Voce Venceu. \n");
    } else {
        printf ("Voce Perdeu. \n");
    }

    return 0;


}