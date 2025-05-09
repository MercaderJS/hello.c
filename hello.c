#include <stdio.h>
#define TAM 100

int main()
{
    int m[TAM][TAM],column,row,index_c,index_r;
    // pidiendo datos al usuario
    printf("Ingresar numero de columnas\n");
    scanf("%i",&column);
    printf("Ingresar numero de filas\n");
    scanf("%i",&row);

    // recorriendo filas
    for(index_r = 0; index_r < row; index_r++)
    {
        for (index_c = 0; index_c < column; index_c++)
        {
            printf("Ingresa las calificaciones en los campos\n");
            scanf("%i",&m[index_r][index_c]);
        }
    }
        
    printf("Las calificaciones ordenadas en la matriz son:\n");
    for(index_r = 0; index_r < row; index_c++)
    {
        for (index_r = 0; index_r < column; index_r++)
        {
            printf("%i",m[index_r][index_c]);
        }
        getchar();
    }
    return 0;
};