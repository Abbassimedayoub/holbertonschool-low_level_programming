# Variadic Functions

Variadic functions in programming languages allow a function to accept a variable number of arguments. These functions can take a varying number of parameters, making them flexible and versatile.

## Example in C

In C programming, variadic functions are commonly used with the `stdarg.h` header. Here's a simple example of a variadic function that calculates the sum of its arguments:

```c
#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...) {
    int result = 0;
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; ++i) {
        result += va_arg(args, int);
    }

    va_end(args);
    return result;
}

int main() {
    printf("Sum: %d\n", sum(3, 10, 20, 30));
    printf("Sum: %d\n", sum(5, 5, 10, 15, 20, 25));

    return 0;
}
