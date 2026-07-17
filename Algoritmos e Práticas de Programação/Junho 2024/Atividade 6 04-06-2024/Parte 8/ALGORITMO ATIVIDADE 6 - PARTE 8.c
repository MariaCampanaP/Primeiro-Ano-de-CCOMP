#include <stdio.h>
int main(){

    int ni=0, idd=0, sidd=0;
    float midd=0;

    printf ("Insira  o numero de idades\n");
    scanf ("%d", &ni);

    for (int i=1; i<=ni; i++){
        printf ("Insira a idade\n");
        scanf ("%d", &idd);


        sidd = (sidd + idd);

    }

    midd = sidd*1.0/ni*1.0;

    printf ("Idade media : %.1f\n", midd);

    idd=0;

    return 0;
}
