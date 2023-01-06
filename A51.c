#include <stdio.h>
int main () {
    int n , r , count = 0;

    printf("Enter a number:");
    scanf("%d", &n);

    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        if(r % 2 == 0){
            count = count + 1;
        }
    }
    printf("%d",count);
    return 0;
}
   