#include <stdio.h>

int main(){
	int L, A, G;
	float PA, PG, Val_A, Val_G;
	scanf("%d", &L);
	scanf("%d %d", &A, &G);
	scanf("%f %f", &PA, &PG);

	Val_A = (L*PA)/A;
	Val_G = (L*PG)/G;

    printf("%.2f\n", Val_A);
    printf("%.2f\n", Val_G);
	if(Val_A < Val_G){
		printf("Alcool\n");
	}else if(Val_G < Val_A){
		printf("Gasolina\n");
	}else{
		printf("Indiferente\n");
	}

    return 0;
}
