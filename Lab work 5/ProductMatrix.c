#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;
    printf("Enter order of first matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter order of second matrix: ");
    scanf("%d%d", &p, &q);

    
    if(n != p)
        return printf("The given matrices don't have a product");

    int A[m][n], B[p][q], R[m][q];

    printf("\nEnter the elements of matrix A: \n");
    for(i = 0; i < m; i++)
    for(j = 0; j < n; j++){
        printf("Enter element for %dx%d: ", i + 1, j + 1);
        scanf("%d", &A[i][j]);
    }

    printf("\nEnter elements for matrix B: \n");
    for(i = 0; i < p; i++)
    for(j = 0; j < q; j++){
        printf("Enter element for %dx%d: ", i + 1, j + 1);
        scanf("%d", &B[i][j]);
    }

    for(i  = 0; i < m; i++)
    for(j = 0; j < q; j++) {
        R[i][j] = 0;
        for(k = 0; k < n; k++) {
            R[i][j] += A[i][k] * B[k][j];
        }
    }

    printf("\nThe product of the given matrices is: \n");
    for(i  = 0; i < m; i++) {
        for(j  = 0; j < m; j++)
            printf("%d\t", R[i][j]);
        printf("\n\n");
    }
    return 0;
}