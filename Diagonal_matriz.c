#include <stdio.h>

int main (){
    int matriz [20][20];
    int i, j;
    int rows, columns;

    printf("Ingresa la cantidad de filas que quieres: ");
    scanf("%d", &rows);
    printf("Ingresa la cantidad de columnas que quieres: ");
    scanf("%d", &columns);

    for ( i = 0; i < rows; i++){
        for ( j = 0; j < columns; j++){
            matriz[i][j] = 0;
            if (i == j){
                matriz[i][j] = 1;
            }
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    



    return 0;
}