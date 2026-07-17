#include <stdio.h>
int main (){
float salario, percentual_aumento, aumento, novo_salario;
printf("Digite o salario do funcionario: ");
scanf("%f", &salario);
printf("Digite o percentual de aumento do funcionario: ");
scanf("%f", &percentual_aumento);
aumento = salario*(percentual_aumento/100);
novo_salario = salario + aumento;
printf("O valor do novo salario e: %.2f\n", aumento);
return 0;
}
