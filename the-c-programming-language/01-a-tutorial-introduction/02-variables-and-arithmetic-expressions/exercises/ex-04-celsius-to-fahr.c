#include <stdio.h>

/* print Celsius-Fahrenheit table
    for fahr = 0, 20, ..., 300

Exercise 1-4. Write a program to print the corresponding
Celsius to Fahrenheit table.
*/

main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("Celsius\t\tFahr\n");
    printf("########################\n");
    while (celsius <= upper) {
        fahr = celsius * (9.0 / 5.0) + 32.0;
        printf("%6.0f\t\t%3.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
