#include <stdio.h>

int main() {
    int m, n, i, j;

    printf("Enter order of matrix: ");
    scanf("%d%d", &m, &n);

    int A[m][n], R[n][m];

    printf("\nEnter the elements of matrix A: \n");
    for(i = 0; i < m; i++)
    for(j = 0; j < n; j++){
        printf("Enter element for %dx%d: ", i + 1, j + 1);
        scanf("%d", &A[i][j]);
    }

    for(i = 0; i < n; i++)
    for(j = 0; j < m; j++)
        R[i][j] = A[j][i];

    printf("\nThe transpose of the given matrix is: \n");
    for(i  = 0; i < n; i++) {
        for(j  = 0; j < m; j++)
            printf("%d\t", R[i][j]);
        printf("\n\n");
    }

    return 0;
}
