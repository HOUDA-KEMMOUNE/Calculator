#include <stdio.h>
#include <limits.h>

int main()
{
    int firstNum = 0;
    int secondNum = 0;
    float a, b, result = 0;
    char operator = '\0';

    printf("Enter your first number:  => ");
    if (scanf("%d", &firstNum) != 1)
    {
        printf("ERROR: It's not a number :/\n");
        return 1;
    }

    //operator conditions

    if (firstNum > INT_MIN && firstNum < INT_MAX)
    {
        printf("Choose your operator ('+' or '-' or 'x' or '/'):  => ");
        scanf(" %c", &operator);

        printf("Enter your second number:  => ");
        if (scanf("%d", &secondNum) != 1)
        {
            printf("ERROR: It's not a number :/\n");
            return 1;
        }

        if (operator == '+')
        {
            printf("%d + %d = %d\n",firstNum, secondNum, firstNum + secondNum);
        }
        else if (operator == '-')
        {
            printf("%d - %d = %d\n",firstNum, secondNum, firstNum - secondNum);
        }
        else if (operator == 'x')
        {
            printf("%d x %d = %d\n",firstNum, secondNum, firstNum * secondNum);
        }
        else if (operator == '/')
        {
            if (secondNum != 0)
            {
                a = firstNum;
                b = secondNum;
                result = a / b;
                printf("%.0f / %.0f = %.2f\n",a, b, result);
            }
            else
            {
                printf ("ERROR: Division by zero :/\n");
            }
        }
        else
        {
            printf("ERROR: Invalid operator :/\n");
            return 1;
        }
    }
}
