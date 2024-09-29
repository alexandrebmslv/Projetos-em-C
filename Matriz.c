//---Matriz---

#include <stdio.h>

int main()

{
    int lin, col;
    int mat[3][3];

    for(lin = 0; lin < 3; lin++)
    {
        for(col = 0; col < 3; col++)
        {
            printf("\nDigite um valor para a posicao Matriz[%d][%d]: ", lin, col);
            scanf("%d", &mat[lin][col]);
        }
    }

    printf("\nImpressao da Matriz com seus elemntos multiplicados por 5:\n\n");

    for(lin = 0; lin < 3; lin++)
    {
        for(col = 0; col < 3; col++)
        {
            mat[lin][col] = (mat[lin][col]) * 5;
        }
    }
    for(lin = 0; lin < 3; lin++)
    {
        for(col = 0; col < 3; col++)
        {
            printf("Elemento Matriz[%d][%d]: %d\n\n", lin, col, mat[lin][col]);
        }
    }
}