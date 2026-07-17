#include <stdio.h>
int main() {
    float temperaturas[12];
    char *meses[12] = {
        "janeiro", "fevereiro", "marco", "abril", "maio", "junho",
        "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"
    };
    float temp_max, temp_min;
    int mes_max, mes_min;
    for (int i = 0; i < 12; i++) {
        printf("Digite a temperatura media de %s: ", meses[i]);
        scanf("%f", &temperaturas[i]);
    }
    temp_max = temp_min = temperaturas[0];
    mes_max = mes_min = 0;
    for (int i = 1; i < 12; i++) {
        if (temperaturas[i] > temp_max) {
            temp_max = temperaturas[i];
            mes_max = i;
        }
        if (temperaturas[i] < temp_min) {
            temp_min = temperaturas[i];
            mes_min = i;
        }
    }
    printf("\nA maior temperatura do ano foi %.2fC em %s.\n", temp_max, meses[mes_max]);
    printf("A menor temperatura do ano foi %.2fC em %s.\n", temp_min, meses[mes_min]);

    return 0;
}
