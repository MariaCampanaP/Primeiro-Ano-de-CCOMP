#include <stdio.h>

int main(){

    int nota=0, idd=0, sidd=0, o=0, r=0, b=0;
    float midd=0, pb=0;

    for (int i=1; i<=15; i++){
        printf ("Insira a idade e nota do filme\n");
        scanf ("%d %d", &idd, &nota);


        if (nota == 3){
            o = o+1;
            sidd = (sidd + idd);
        }
        if (nota == 1){
            r = r+1;
        }
        if (nota == 2){
            b = b+1;
        }
    }

    midd = sidd/o;
    pb = (b/15.0)*100;

    printf ("Idade media dos espectadores que avaliaram como otimo: %.1f\n", midd);
    printf ("Espectadores que avaliaram como regular: %d\n", r);
    printf ("Porcentagem de espectadores que avaliaram como bom: %.2f%%", pb);

return 0;
}
