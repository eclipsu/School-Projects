#include <stdio.h>
int main() {
    int i, j, k, m, n, p, q;
    
    printf("Enter order of 1st Matrix: ");
    scanf("%d%d", &m, &n);
    
    printf("Enter order of 2nd Matrix: ");
    scanf("%d%d", &p, &q);

    if(n != p)
        return printf("Given orders don't yeild a product.");
    int mtxA[m][n], mtxB[p][q], mtxAxB[m][q];
    
    printf("Enter values for Matrix A:\n");
    for(i = 0; i < m; i++)
    for(j = 0; j < n; j++) {
        printf("Enter element %dx%d: ", i + 1, j + 1);    
        scanf("%d", &mtxA[i][j]);
    }
    
    printf("Enter values for Matrix B:\n");
    for(i = 0; i < m; i++)
    for(j = 0; j < n; j++) {
        printf("Enter element %dx%d: ", i + 1, j + 1);
        scanf("%d", &mtxB[i][j]);
    }
    
    printf("Matrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++)
            printf("%d\t", mtxA[i][j]);
        printf("\n");
    }
    
    printf("Matrix B:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++)
            printf("%d\t", mtxB[i][j]);
        printf("\n");
    }
 
    for(i = 0; i < m; i++)
    for(j = 0; j < q; j++) {
        mtxAxB[i][j] = 0;
        for(k = 0; k < n; k++)
            mtxAxB[i][j] += mtxA[i][k] * mtxB[k][j];
    }
    
    printf("Their product: \n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++)
            printf("%d\t", mtxAxB[i][j]);
        printf("\n");
    }

    return 0;
}