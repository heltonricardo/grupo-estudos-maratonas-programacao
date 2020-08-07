#include <stdio.h>
#include <math.h>

int main(){
int P,C, Passageiros;
float  V, D, R;

    scanf("%d %f %f %d", &P, &V, &D, &C);
    R = -((((P*D)+V)*((P*D)+V) + 4*D)/(-4*D));
    Passageiros = -(((P*D)+V)/-(2*D));

    printf("Passageiros: %d\n", Passageiros);
    printf("Receita maxima:%.2f\n", R);
}
