#include <stdio.h>

void movimentoTorre(int casas){//void da torre
    if(casas > 0){
        printf ("Direita \n");
        movimentoTorre(casas - 1);
    }
}


void movimentoRainha(int casas){//void da rainha
    if (casas > 0){
        printf ("Esquerda \n");
        movimentoRainha(casas - 1);
    }
}


void movimentoBispo(int casas){//void aninhado do bispo
    if (casas > 0){

        for (int i = 0; i < 1; i++){
            printf ("Cima \n");

            for (int j = 0; j < 1; j++){
            printf ("Direita \n");
        }
     }

     movimentoBispo(casas - 1);

    }

}
int main () {

    printf ("\n Torre \n");
    movimentoTorre(5);



    printf ("\n Bispo \n");
    movimentoBispo(5);


        
    printf ("\n Rainha \n");
    movimentoRainha(8);


    

    int cima = 2, direita = 1;//Cavalo aninhado

    printf ("\n Cavalo \n");

        for (int i = 0; i < cima; i++){

            for (int j = 0; j < direita; j++){

                if (j == 1){
                    continue;

                }

                printf ("Cima \n");

            }
    
    for (int j = 0; j < direita + 1; j++)

            if (i == 1){
                printf ("Direita \n");
                break;
            }   
        }

    return 0;
}