#include <stdio.h>
int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;
    // Asking user for input
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    // Assigning the address of the variables to pointers
    ptr1 = &num1;
    ptr2 = &num2;
    // Adding the numbers using pointers
    sum = *ptr1 + *ptr2;
    // Displaying the result
    printf("The sum of %d and %d is: %d\n", *ptr1, *ptr2, sum);
    return 0;
}

