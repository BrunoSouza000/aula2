/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

double soma(double A, double B);

int main()
{
    double X, Y;
    char mensagem [100];

    printf("selecione uma das operacoes:\n");
    printf("1 -soma\n");
    printf("2 -somasubtracao\n");
    printf("3 -multiplicacao\n");
    printf("4 -divisao\n");
    printf("5 -potenciacao\n");
    printf("\n");



fgets(mensagem, sizeof(mensagem), stdin);
    printf("\n");

    printf("voce selecionou: %s\n", mensagem);

    printf("insira os valores:\n");

   printf("\n");

    //-soma

    //scanf("%lf\n%lf", &A, &B);

    //soma = A+B;

    printf("\n");
    scanf("%lf\n%lf",&X,&Y);
    printf("resultado = %lf\n", soma(X,Y));

    return 0;
}

double soma(double A, double B)
{
    double resultado;

    resultado = A+B;
    return(resultado);

}
