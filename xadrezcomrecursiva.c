#include <stdio.h>

void moverTorre (int casas){
    if (casas>0){
        moverTorre(casas-1);
        printf("Torre a direita (x%d)\n",casas);
    }
}

void moverBispo (int casas){
    if (casas>0){
        moverBispo(casas-1);
        for(int v=casas;v<=casas;v++){
            printf("Bispo acima (x%d)\n",v);
            for (int h=casas; h<=casas; h++){
                printf("Bispo a direita (x%d)\n",h);
            }
        }
    }
}

void moverRainha (int casas){
    if (casas>0){
        moverRainha(casas-1);
        printf("Rainha a esquerda (x%d)\n",casas);
    }
}

int main() {

    //Movimento da Torre: 5 casas para a direita
    moverTorre(5);

    //Movimento do Bispo: 5 casas na diagonal acima e à direita
    moverBispo(5);

    //Movimento da Rainha: 8 casas para a esquerda
    moverRainha(8);

    //Movimento do Cavalo: 2 casas para cima e 1 para direita
    for (int v=1, h=1; v<5 && h<5; v++, h++){
        if(v==3) break;
        if(h==2) break;
        printf("Cavalo acima (x%d)\n",v);
        printf("Cavalo a direita (x%d)\n",h);
    }
    
    printf("Fim de jogo!\n");

    return 0;
}