//---Calculadora_com_quatro_operacoes_na_Linguagem_C---

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int operacao, val1, val2;
    
    

    printf("Digite o numero da operacao que sera feita:");
    printf("\n1 - Adição\n2 - Subtração\n3 - Multiplicacao\n4 - Divisao\n\n");
    scanf("%d", &operacao);

    if (operacao > 0 && operacao < 5)
    {
        printf("\nDigite o primeiro valor da operacao a ser calculada: ");
        scanf("%d", &val1);
        printf("\nDigite o segundo valor da operacao a ser calculada: ");
        scanf("%d", &val2);
    }
    else
    {
        printf("Operacao inexistente");
    }
    switch(operacao)
    {
        case 1:
        {
            printf("\n%d + %d = %d\n", val1, val2, val1 + val2);
            break;
        }
        case 2:
        {
            printf("\n%d - %d = %d\n", val1, val2, val1 - val2);
            break;
        }
        case 3:
        {
            printf("\n%d x %d = %d\n", val1, val2, val1 * val2);
            break;
        }
        case 4:
        {
            while(val2 == 0)
            {
                printf("O segundo valor nao pode ser 0! Digite um novo valor: ");
                scanf("%d\n", &val2);
            }
            printf("\n%d : %d = %d\nE o resto foi %d\n", val1, val2, val1 / val2, val1 % val2);
            break;
        }
    }
}