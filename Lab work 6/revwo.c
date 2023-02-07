#include <stdio.h>

int main() {
    int i, k;
    char A[20], R[20];

    printf("Enter A string: ");
    scanf("%s", A);

    for(k = 0; A[k] != '\0'; k++);
    for(i = 0; A[i] != '\0'; i++, k--)
        R[i] = A[k - 1];
    R[i] = '\0';

    printf("The reverse of string is %s", R);
    return 0;
}