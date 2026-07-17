#include <stdio.h>
int main(){
int idd = 0, sidd = 0, b = 0, c = 0, mun = 0;
float midd = 0, peso = 0, alt = 0, pc = 0;
for (int i = 1; i <= 10; i++){
        printf("Insira a idade, peso e altura\n");
        scanf("%d %f %f", &idd, &peso, &alt);
        sidd = (sidd + idd);
        midd = (sidd + idd)/i;
        if (peso > 90 && alt < 1.50){
            b = b + 1;
        }
        if (alt > 1.90){
            mun = mun + 1;
        }
        if (idd >= 10 && idd <= 30 && alt > 1.90){
            c = c + 1;
            pc = (mun / c) * 100;
        }
}
printf("Idade media: %.lf\n", midd);
printf("Pessoas menores que 1.50 e mais que 90kg: %d\n", b);
printf("Porcentagem de pessoas entre 10 e 30 anos maiores que 1.90: %.2f Porcento\n", pc);

return 0;
}
