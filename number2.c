#include <stdio.h>

int main()  {

    int nome;
    float salario_fixo, total_vendas, salario_final;

    printf("Insisra o nome do funcionario: \n");
    scanf("%s", &nome);

    printf("Insira o salario do vendendor: \n");
    scanf("%lf", &salario_fixo);

    printf("Insira o total de vendas: \n");
    scanf("%lf", &total_vendas);

    salario_final = (salario_fixo + total_vendas*0.15);
    printf("TOTAL = R$ %.2lf", salario_final);



    return 0;
}
