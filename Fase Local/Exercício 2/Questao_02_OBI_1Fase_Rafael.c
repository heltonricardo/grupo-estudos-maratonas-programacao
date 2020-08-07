#include <stdio.h>
#include <string.h>

int main(){

    int ordem, forca, i, l, c, trocou =0;

    scanf("%i %i", &ordem,&forca);

    //DECLARANDO A MATRIZ
    char matriz[ordem][ordem];

    //LENDO VALOR DA MATRIZ
    for(i=0; i<ordem ; i++){
        scanf("%s", matriz[i]);
    }

    //IMPRIMINDO MATRIZ INICIAL
    for(l=0; l<ordem;l++){
        for(c=0;c<ordem;c++){
           printf("%c ", matriz[l][c]);
        }
        printf ("\n");
    }

    // VERIFICANDO CASOS
      if (forca >= matriz[0][0]-48){// -48 para converter char em int já que o char é armazenado em ASCII
           matriz[0][0] = '*';
           do{
                trocou =0;
                for(l=0; l<ordem;l++){
                    for(c=0;c<ordem;c++){
                        if (matriz[l][c] != '*' && forca >= matriz[l][c]-48){// -48 para converter char em int já que o char é armazenado em ASCII
                            if ((matriz[l-1][c] == '*') ||
                                (matriz[l][c-1] == '*') ||
                                (matriz[l+1][c] == '*') ||
                                (matriz[l][c+1] == '*')){
                              matriz[l][c] = '*';
                              trocou =1;
                            }
                        }
                    }
                }
            }while (trocou == 1);
      }


    // VERIFICANDO OUTROS CASOS



    //IMPRIMINDO MATRIZ FINAL
    printf ("\n");
        for(l=0; l<ordem;l++){
            for(c=0;c<ordem;c++){
               printf("%c ", matriz[l][c]);
            }
            printf ("\n");
        }


return 0;
}
