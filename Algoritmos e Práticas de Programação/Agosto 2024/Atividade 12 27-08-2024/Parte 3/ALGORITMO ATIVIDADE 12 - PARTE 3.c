#include <stdio.h>
#include <stdbool.h>

bool formaTriangulo(float x, float y, float z){
    return (x < y + z)&&(y < x + z)&&(z < x + y);
}

const char* tipoTriangulo(float x, float y, float z){
    if (x == y && y == z){
        return "Equilatero";
    }else if (x == y || y == z || x == z){
        return "Isosceles";
    }else{
        return "Escaleno";
    }
}

int main(){
    float x, y, z;

    printf("Digite o comprimento do lado X:");
    scanf("%f", &x);
    printf("Digite o comprimento do lado Y:");
    scanf("%f", &y);
    printf("Digite o comprimento do lado Z:");
    scanf("%f", &z);

    if(formaTriangulo(x, y, z)){
        printf("Os lados formam um triangulo do tipo:%s\n", tipoTriangulo(x, y, z));
    }else{
        printf("Os lados nao formam um triangulo.\n");
    }
return 0;
}
