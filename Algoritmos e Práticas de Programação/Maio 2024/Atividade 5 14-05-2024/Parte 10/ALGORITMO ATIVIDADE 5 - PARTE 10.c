#include <stdio.h>
int main(){
    int horas_extras, horas_faltadas;
    float H, premio;
    printf("Digite o numero de horas extras: ");
    scanf("%d", &horas_extras);
    printf("Digite o numero de horas que faltou ao trabalho: ");
    scanf("%d", &horas_faltadas);
    H = horas_extras - (2.0 / 3.0 * horas_faltadas);
    if (H > 2400){
        premio = 500.0;
    }else if (H >= 1800){
        premio = 400.0;
    }else if (H >= 1200){
        premio = 300.0;
    }else if (H >= 600){
        premio = 200.0;
    }else {
        premio = 100.0;
    }
    printf("Valor do premio:R$ %.2f\n", premio);
    return 0;
}
