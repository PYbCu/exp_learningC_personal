#include <stdio.h> 
int main()
{
    int op1, op2, result, done = 1;
    char oprtr;
    scanf_s("%d%d", &op1, &op2);
    scanf_s("%c", &oprtr);
    switch (oprtr)
    {
    case '+':
        result = op1 + op2;
        break;
    case '-':
        result = op1 - op2;
        break;
    case '*':
        result = op1 * op2;
        break;
    case '/':
        result = op1 / op2;
        break;
    default: done = 0;
    }
        if (done)
            printf("%d%c%d=%d", op1, oprtr, op2, result);
        else
            printf("operator is invalid!");

    return 1;
}