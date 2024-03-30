#include <stdio.h>

/* div - division of two integers
 * @a: first integer
 * @b: second integer
 * Return: division
 */
int div(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

