#include<stdio.h>
int main() {
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);

    // Corrected the print statement
    printf("The entered integer is %d\n", a);

    // Example of if-else
    if (a % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}
