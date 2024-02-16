#include <stdio.h>
int main(){
    float salario;
    printf("Digite o valor do seu salário.\n");
    scanf("%f", &salario);
    if (salario <= 1000){
        salario = salario * 1.15;
    }
    else if (salario <= 2000){
        salario = salario * 1.10;
    }
    if (salario > 2000){
        salario = salario * 1.05;
    }
    printf("O valor total do seu salario com o aumento é: %2.f", salario);;
return 0;
}
