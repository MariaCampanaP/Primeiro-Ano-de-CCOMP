#include <stdio.h>
int main(){
int inicio = 1000;
int fim = 2000;
for (int i = inicio; i <= fim; i++){
        if (i % 7 == 0){
        printf("%d e divisivel por 7\n", i);
    }
 }
return 0;
}

