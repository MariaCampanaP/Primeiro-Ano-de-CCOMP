#include <stdio.h>
int main(){
    float N1, N2, N3, media;
    printf("Digite a primeira nota:");
    scanf("%f", &N1);
    printf("Digite a segunda nota:");
    scanf("%f", &N2);
    printf("Digite a terceira nota:");
    scanf("%f", &N3);
    media = (N1 + N2 + N3) /3.0;
    printf("A media das tres notas e: %.2f\n", media);
    return 0;
}
