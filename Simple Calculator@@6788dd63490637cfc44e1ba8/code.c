#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Read the input: two integers and one character (operator)
    if (scanf("%d %d %c", &num1, &num2, &op) != 3) {
        printf("Error\n");
        return 1;
    }

    if (op == '+') {
        printf("%d\n", num1 + num2);
    } else if (op == '-') {
        printf("%d\n", num1 - num2);
    } else if (op == '*') {
        printf("%d\n", num1 * num2);
    } else if (op == '/') {
        if (num2 == 0) {
            printf("Error\n");
        } else {
            printf("%d\n", num1 / num2);
        }
    } else {
        printf("Error\n");
    }

    return 0;
}
