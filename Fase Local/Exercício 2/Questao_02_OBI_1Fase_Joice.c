#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//função recursiva para verificar invasão
void verifica(int ordem, char mapa[ordem][ordem], int i, int j, char forca){
    //verificando se a posição à esquerda existe
    if(j-1 >= 0){
        //verificando se a posição foi atingida
        if(mapa[i][j-1]!='*' && mapa[i][j-1] <= forca){
            mapa[i][j-1] = '*';
            verifica(ordem, mapa, i, j-1, forca);
        }
    }

    //verificando se a posição à direita existe
    if(j+1 < ordem){
        //verificando se a posição foi atingida
        if(mapa[i][j+1]!='*' && mapa[i][j+1] <= forca){
            mapa[i][j+1] = '*';
            verifica(ordem, mapa, i, j+1, forca);
        }
    }

    //verificando se a posição acima existe
    if(i-1 >= 0){
        if(mapa[i-1][j]!='*' && mapa[i-1][j] <= forca){
            mapa[i-1][j] = '*';
            verifica(ordem, mapa, i-1, j, forca);
        }
    }

    //verificando se a posição acima existe
    if(i+1 < ordem){
        if(mapa[i+1][j]!='*' && mapa[i+1][j] <= forca){
            mapa[i+1][j] = '*';
            verifica(ordem, mapa, i+1, j, forca);
        }
    }
}


int main(){
    // a entrada será a ordem da matriz e a força
    int ordem;
    char forca;

    //controladores da matriz
    int i, j;

    scanf("%d %c", &ordem, &forca);

    //matriz para representar o mapa
    char mapa[ordem][ordem];

    //lendo as linhas e transformando na matriz de mapa
    for(i=0; i<ordem; i++){
        setbuf(stdin, NULL);
        scanf("%s", mapa[i]);
    }

    printf("Mapa Inicial\n\n");
    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            printf("%c ", mapa[i][j]);
        }
        printf("\n");
    }


    //realizando as verificações das posições invadidas
    //verificando a força com a primeira posição
    if(mapa[0][0] <= forca){
        mapa[0][0] = '*';
        verifica(ordem, mapa, 0, 0, forca);
    }

    printf("Mapa de Impacto\n\n");
    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            printf("%c ", mapa[i][j]);
        }
        printf("\n");
    }


}
