#include <stdio.h>

int main() {
    
    int x, y, result;
    char op;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    while (1) {
        printf("Enter operand or 'q' to quit: ");
        scanf(" %c", &op);

        if (op == 'q') {
            printf("Exiting the program\n");
            break;
        } else if (op == '+' || op == '-' || op == '*' || op == '/') {
            switch (op) {
                case '+':
                    result = x + y;
                    break;
                case '-':
                    result = x - y;
                    break;
                case '*':
                    result = x * y;
                    break;
                case '/':
                    if (y != 0) {
                        result = x / y;
                    } else {
                        printf("Error: Division by zero\n");
                        continue; // Go back to the beginning of the loop
                    }
                    break;
                default:
                    printf("Invalid operator\n");
                    continue; // Go back to the beginning of the loop
            }
            printf("Result: %d %c %d = %d\n", x, op, y, result);
        } else {
            printf("Invalid operator\n");
        }
    }

    return 0;
}
