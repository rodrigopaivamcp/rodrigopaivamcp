#include <stdio.h>
#include <math.h>

int main() {
    int porcentagem;
    float salario, aumento, novoSalario;

    
    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salario);

    
    if (salario <= 400.00) {
        aumento = salario * 0.15; 
    } else if (salario <= 800.00) {
        aumento = salario * 0.12; 
    } else if (salario <= 1200.00) {
        aumento = salario * 0.10; 
    } else if (salario <= 2000.00) {
        aumento = salario * 0.07; 
    } else {
        aumento = salario * 0.04; 
    }

    
    novoSalario = salario + aumento;
    porcentagem = aumento/novoSalario * 2;

    printf("Novo salário: R$ %.2f\n", novoSalario);
    printf("Reajuste ganho: R$ %.2f\n", aumento);
    printf("Em percentual: %d\n", porcentagem);
    
    return 0;
}
