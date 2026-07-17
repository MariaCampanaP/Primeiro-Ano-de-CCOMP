#include <stdio.h>
int main (){
    int voto = 0, quant1 = 0, quant2 = 0, quant3 = 0, quant4 = 0, quant0 = 0, quantB = 0, porcent0 = 0, porcentB = 0, total = 0;
    do{
        printf("Digite o numero do candidato 1\n\n");
        scanf("%d", &voto);
        if (voto == 1){
            quant1++;
            total++;
            printf("Voto computado para o candidato 1\n\n");
        }else if (voto == 2){
            quant2++;
            total++;
            printf("Voto computado para o candidato 2\n\n");
        }else if (voto == 3){
            quant3++;
            total++;
            printf("Voto computado para o candidato 3\n\n");
        }else if (voto == 4){
            quant4++;
            total++;
            printf("Voto computado para o candidato 4\n\n");
        }else if (voto == 5){
            quant0++;
            total++;
            printf("Voto em nulo registrado\n\n");
        }else if (voto == 6){
            quantB++;
            total++;
            printf("Voto em branco registrado\n\n ");
        }else if (voto == 0){
            printf("Saindo\n");
        }else{
            printf("Voto invalido\n\n");
            }
    }while (voto > 0 || voto < 0);
    porcent0 = quant0 * 100;
    porcentB = quantB * 100;
    porcent0 = porcent0 / total;
    porcentB = porcentB / total;
    printf("Candidato 1: %d votos\nCandidato 2: %d votos\nCandidatos 3: %d votos\nCandidato 4: %d votos\n", quant1, quant2, quant3, quant4);
    printf("Votos nulos: %d votos\nVotos em branco: %d votos\n", quant0, quantB);
    printf("Porcentagem de votos nulos: %d%%\n", porcent0);
    printf("Porcentagem de votos em branco: %d%%\n", porcentB);
    return 0;
    }
