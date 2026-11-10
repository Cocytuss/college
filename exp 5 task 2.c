
#include <stdio.h>

// Recursive function to find the nth Fibonacci number
int fibonacci(int n) {
    // Base case 1: if n is 0, return 0
    if (n <= 0) {
        return 0;
    }
    // Base case 2: if n is 1, return 1
    else if (n == 1) {
        return 1;
    }
    // Recursive case: sum of the two preceding numbers
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n_terms = 9;
    printf("Fibonacci series up to %d terms:\n", n_terms);
    for (int i = 0; i < n_terms; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}


