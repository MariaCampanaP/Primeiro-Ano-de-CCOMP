#include <stdio.h>
struct fessor{
    char sexo;
    int codigo;
    float horas_aula;
};
typedef struct fessor Fessor;

int main(){
    int i = 0;
    float salario_bruto;
    float desconto;
    float salario_liquido;
    float med_masc;
    float med_femi;
    int contm = 0;
    int contf = 0;

    Fessor p[10];
    for (i = 0; i < 10; i++){
        scanf("%d %c %f", &p[i].codigo, &p[i].sexo, &p[i].horas_aula);
        salario_bruto = 60.5 * p[i].horas_aula;
        if (p[i].horas_aula < 70){
            salario_liquido = salario_bruto - (salario_bruto/0.8);
        }else if (p[i].horas_aula >= 70){
            salario_liquido = salario_bruto - (salario_bruto/0.5);
        }
        if (p[i].sexo == 'm'){
        med_masc = med_masc + salario_bruto;
        contm++;
    }else if (p[i].sexo == 'f'){
        med_femi = med_femi + salario_bruto;
        contf++;
    }
    }

    med_masc = med_masc / contm;
    med_femi = med_femi / contf;

    printf("Media aritmetica masc: %.2f\n", med_masc);
    printf("Media aritmetica femi: %.2f\n", med_femi);

    return 0;

}













