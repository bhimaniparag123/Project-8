#include <stdio.h>

void calculateCubes(int rows, int cols, int (*arr)[cols], int (*cubes)[cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cubes[i][j] = arr[i][j] * arr[i][j] * arr[i][j];
        }
    }
}

main() 
{
    int rows, cols;
    printf("Enter array's size (rows cols): ");
    scanf("%d %d", &rows, &cols);
    
    int arr[rows][cols];
    int cubes[rows][cols];

    printf("Enter array elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    calculateCubes(rows, cols, arr, cubes);
    printf("\nOriginal array:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nCubes of array elements:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            printf("%d\t", cubes[i][j]);
        }
        printf("\n");
    }
}
