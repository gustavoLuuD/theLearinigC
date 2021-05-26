//exemplo retirado do livro  "The C Programming language - Brian W.Kernighan & Dennis M. Ritchie"
#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */
int main()
{
    int fahr, celsius;
    int lower, upper, step;
    lower = 0; /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = lower;
    printf("The fahrenheit -> celsius table: ");
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("\n%d\t | \t %d", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}