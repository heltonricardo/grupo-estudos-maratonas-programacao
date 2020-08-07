#include <stdio.h>
#include <stdlib.h>

int main(){
    //----- variáveis -----
    int N; //total de amigos.
    int M; //total de reuniões.
    int i, k; //controles de posições.


    int I; //amigo contaminado fora do grupo.
    int R; //reunião que o amigo contaminado participou (reunião já contaminado).

    int A; //número de amigos por reunião
    int num; //número do amigo presente

    int numInfectados = 0;



    //----- leitura de dados -----
    //lendo o número de amigos e o número de reuniões
    scanf("%d %d", &N, &M);

    int matriz[M][N]; //matriz de reuniões, com cada participante presente. 0 - ausente e 1 - presente

    //inicializando a matriz com 0
    for(k=0; k<M; k++){
        for(i=0; i<N; i++){
            matriz[k][i] = 0;
        }
    }


    //lendo o identificador do amigo contaminado e a primeira reunião que participou contaminado
    scanf("%d %d", &I, &R);

    //lendo a matriz de reuniões com cada particante presente
    for(k=0; k<M; k++){
        //lendo o valor A, que indica a quantidade de participantes presentes
        scanf("%d", &A);

        //sinalizando cada presente
        for(i=0; i<A; i++){
                //lendo o número do amigo presente
                scanf("%d", &num);
                matriz[k][num-1] = 1;
            }
    }


    //----- manipulações -----
    //vetor de amigos. Cada posição indica um amigo.
    //O amigo número 1 ocupa a posição 0, o amigo número 2 ocupa a posição 1, e assim por diante
    int infectados[N];

    //iniciando cada amigo como não infectado.
    //O valor 0 indica não infectado. O valor 1 indica infectado.
    for(i=0; i<N; i++){
        infectados[i] = 0;
    }

    //verificando as reuniões onde as contaminações começaram
    for(k=R-1; k<M; k++){
        //se for a primeira reunião onde houve contaminação, todos os presentes foram contaminados
        if(k == R-1){
            for(i=0; i<N; i++){ //verifica todos os amigos presentes
                if(matriz[k][i] == 1){ //nessa reunião k, o amigo i estava presente
                    infectados[i] = 1; //amigo foi infectado
                }
            }
        }
        //verificando as contaminações nas reuniões seguintes
        else{
            for(i=0; i<N; i++){ //verifica todos os amigos presentes
                if(matriz[k][i] == 1 && infectados[i] == 1){//se houver um contaminado na reunião
                    //contamina todos os demais presentes
                    for(i=0; i<N; i++){
                        if(matriz[k][i]) infectados[i] = 1;
                    }
                }
            }
        }


        printf("Infectados\n");
        for(i=0; i<N; i++){
            printf("%d ", infectados[i]);
        }
        printf("\n\n");
    }

    //contando o número de infectados
    for(i=0; i<N; i++){
        if(infectados[i] == 1){
            numInfectados++;
        }
    }

    printf("Infectados = %d\n", numInfectados);


    return 0;
}
