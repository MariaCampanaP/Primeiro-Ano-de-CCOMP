#include <stdio.h>
int main(){

    int idd=0, sidd=0, o=0;
    float midd=0;

    do{
        printf ("Insira a idade\n");
        scanf ("%d", &idd);


    if (idd>0){
        o= o+1;

        sidd = (sidd + idd);
        midd = sidd*1.0/o*1.0;

        printf ("Idade media: %.1f\n", midd);}

    }while(idd>0);

    return 0;
}
