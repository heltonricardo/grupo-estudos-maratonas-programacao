#include <stdio.h>

int main(){
float sal_M=0, val_saude=0, sal_total=0, imp_parcial=0, imp_final=0, desc=0;
int n_dep;

    scanf("%f %d %f", &sal_M, &n_dep, &val_saude);
    if(sal_M<=2999){
        printf("Isento\n");
    }else{
        sal_total = (sal_M * 13);
        if(n_dep==1){
            desc = desc + 0.1;
        }else if(n_dep==2){
            desc = desc + 0.2;
        }else if(n_dep>2){
            desc = desc + 0.3;
        }else{
            desc = desc + 0;
        }

        if(sal_M >=3000 && sal_M<=4999){
            imp_parcial = (0.05 * sal_total);
        }else if(sal_M >=5000 && sal_M<=9999){
            imp_parcial = (0.1 * sal_total);
        }else if(sal_M >=10000 && sal_M<=14999){
            imp_parcial = (0.15 * sal_total);
        }else if(sal_M >=15000 && sal_M<=19999){
            imp_parcial = (0.2 * sal_total);
        }else if(sal_M >=20000 && sal_M<=24999){
            imp_parcial = (0.25) * sal_total;
        }else if(sal_M >=25000 && sal_M<=29999){
            imp_parcial = (0.3 * sal_total);
        }else if(sal_M >=30000){
            imp_parcial = (0.35 * sal_total);
        }

        if(val_saude > (0.15 * imp_parcial)){
            desc = desc + 0.15;
        }else{
            imp_parcial -= val_saude;
        }

        imp_final = imp_parcial - (desc*imp_parcial);

        printf("%0.f\n", imp_final);
    }

    return 0;
}
