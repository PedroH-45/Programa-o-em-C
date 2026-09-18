#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {


    int escolhajogador, escolhaPC;
    srand (time(0));


    printf ("Jogo de JO KEN PO\n");
    printf ("Escolha uma Opcao:\n");
    printf ("1. Pedra\n");
    printf ("2. Papel\n");
    printf ("3. Tesoura\n");
    printf ("Escolha: \n");
    scanf ("%d", &escolhajogador);

    escolhaPC = rand() % 3 + 1;

    switch (escolhajogador)
    {
        case 1:
        printf ("Jogador: Pedra - ");
        break;
        case 2:
        printf ("Jogador: Papel - ");
        break;
        case 3:
        printf ("Jogador: Tesoura - ");
        break;
        default:
        printf ("Opcao Invalida\n");
    }

        switch (escolhaPC)
    {
        case 1:
        printf ("PC: Pedra\n");
        break;
        case 2:
        printf ("PC: Papel\n");
        break;
        case 3:
        printf ("PC: Tesoura\n");
        break;
        
    }

    if (escolhajogador == escolhaPC)
    {
        printf ("O Jogo Empatou!\n");
    } else if ((escolhajogador == 1) && (escolhaPC == 3)  ||
                (escolhajogador == 2) && (escolhaPC == 1) ||
                 (escolhajogador == 3) && (escolhaPC == 2))
    {
        printf ("Voce Ganhou!\n");
    } else {
        printf ("Voce Perdeu\n");
    }               


    return 0;

}