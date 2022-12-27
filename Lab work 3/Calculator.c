#include <stdio.h>
int main() {
    char op;
    int a, b;

    printf("Enter operator (+, -, *, /, %): ");
    scanf("%c", &op);

    printf("Enter any two number");
    scanf("%d%d", &a, &b);

    switch (op) {
        case '+':
            printf("%d %c %d is %d", a, op, b, a + b);
            break;
        case '-':
            printf("%d %c %d is %d", a, op, b, a - b);
            break;
        case '*':
            printf("%d %c %d is %d", a, op, b, a * b);
            break;
        case '/':
            printf("%d %c %d is %.2f", a, op, b, (float) a /
            b);
        break;
        case '%':
            printf("%d %c %d is %d", a, op, b, a % b);
            break;
        default :
            printf("%c is not an operator", op);
        }
    return 0;
}