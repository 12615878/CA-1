#include <stdio.h>

int main() {
    int branch;

    // Input the day number from the user
    printf("Enter a number between 1 and 4: ");
    scanf("%d", &branch);

    // Use a switch statement to print the corresponding day of the week
    switch (branch) {
        case 1:
            printf("B tech in CSE\n");
            break;
        case 2:
	    printf("B tech in CSE AIML\n");
	    break;
	case 3:
	    printf("B tech in Robotics\n");
            break;
	case 4:
	    printf("B tech in Electronics\n");
	    break;
	default:
	    printf("Invalid input!\n");
	    break;
    }
    return 0;
}
