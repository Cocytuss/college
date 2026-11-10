#include <stdio.h>

int main() {
    int start, end, temp, sum = 0;

    // Input lower and upper limits
    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    // Swap if starting number is greater than ending number
    if (start > end) {
        temp = start;
        start = end;
        end = temp;
    }

    // Loop through the range and calculate sum of odd numbers
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    // Display total sum
    printf("\nSum of all odd numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}
