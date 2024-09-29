//---Estrutura_de_Repeticao_com_For---

#include <stdio.h>

int main()

{
    int num1, num2, pares;

    printf("Digite o menor valor, para ser o inicial: ");
    scanf("%d", &num1);
    printf("\nDigite o maior valor, para ser o final: ");
    scanf("%d", &num2);

    if(num1 < num2)
    {
        printf("Valores validos, iniciando...\n\n");
    }
    else
    {
        printf("Valores invalidos, o segundo valor deve ser maior que o primeiro!");
    }

    for(pares = 0; num1 <= num2; num1++)
    {
        if(num1 % 2 == 0)
        {
            printf("O valor do numero e: %d\n", num1);
            printf("Ele e par\n\n");
            pares++;
        }
        else
        {
            printf("O valor do numero e: %d\n", num1);
            printf("Ele e impar\n\n");
        }
    }

    printf("Quantidade de numeros pares: %d\n", pares);
}