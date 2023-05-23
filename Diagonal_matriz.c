#include <stdio.h>

int main (){
    //inincializacion de variables
    int matriz [20][20];
    int i, j;
    int rows, columns;

    //lector de inputs
    printf("Ingresa la cantidad de filas que quieres: ");
    scanf("%d", &rows);
    printf("Ingresa la cantidad de columnas que quieres: ");
    scanf("%d", &columns);

    //inicio de codigo
    for ( i = 0; i < rows; i++){// lazo for para las fials
        for ( j = 0; j < columns; j++){//lazo for para columnas
            matriz[i][j] = 0;//define el valor a 0 por default
            if (i == j){//si el numero de filas es igual que el de columnas el valor del elemento es =1
                matriz[i][j] = 1;
            }
            printf(" %d ", matriz[i][j]);//mostrar resultados
        }
        printf("\n");
    }
    return 0;
}