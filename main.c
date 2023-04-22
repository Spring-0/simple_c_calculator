#include <stdio.h>
#include <math.h>


int main() {

    float num1;
    float num2;
    char operator;
    float answer;

    printf("Enter expression:\n");
    scanf("%f %c %f", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            answer = num1+num2;
            break;
        case '-':
            answer = num1-num2;
            break;
        case '*':
            answer = num1*num2;
            break;
        case '/':
            answer = num1/num2;
            break;
        case '^':
            answer = pow(num1, num2);
            break;
        default:
            printf("Invalid operator.");
            return 1;
    }

    printf("%f %c %f = %f", num1, operator, num2, answer);
    return 0;
}
