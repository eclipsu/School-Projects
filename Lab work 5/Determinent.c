#include <stdio.h>

int main() {
    int i, j;
    int A[3][3], determinant;

    printf("Enter the elements of matrix 3x3 Matrix A: \n");
    for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++){
        printf("Enter element for %dx%d: ", i + 1, j + 1);
        scanf("%d", &A[i][j]);
    }

    determinant = A[0][0] * (A[1][1] * A[2][2] - A[2][1] * A[1][2]) 
                - A[0][1] * (A[1][0] * A[2][2] - A[2][0] * A[1][2]) 
                + A[0][2] * (A[1][0] * A[2][1] - A[2][0] * A[1][1]);
    printf("The determinant is: %d", determinant);
    return 0;
}
