#include <stdio.h>

/* mod - modulo of two integers
 * @a: first integer
 * @b: second integer
 * Return: modulo
 */
int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        return 0;
    }
}
