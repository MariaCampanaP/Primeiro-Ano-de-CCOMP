#include <stdio.h>

void converterHora(int totalSegundos, int *hora, int *min, int *seg){
    *hora = totalSegundos / 3600;
    totalSegundos %= 3600;
    *min = totalSegundos / 60;
    *seg = totalSegundos % 60;
}

int main(){
    int totalSegundos, hora, min, seg;

    printf("Digite o total de segundos: ");
    scanf("%d", &totalSegundos);

    converterHora(totalSegundos, &hora, &min, &seg);

    printf("Resultado: %02d:%02d:%02d\n", hora, min, seg);

    return 0;
}
