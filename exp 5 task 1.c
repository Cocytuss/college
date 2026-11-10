
#include <stdio.h>

void printFibonacciIterative(int n) {
    long long first = 0, second = 1, next;

    printf("Fibonacci Series (%d terms): ", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%lld ", next);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms (N): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    printFibonacciIterative(n);
    return 0;
}
