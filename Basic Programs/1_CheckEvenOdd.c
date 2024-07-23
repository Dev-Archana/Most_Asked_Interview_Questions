
#include <stdio.h>

int main()
{

	int number;

	printf("Enter an integer: ");
	scanf("%d", &number);

	// Check Even or Odd
	if (number % 2 == 0)
		printf("The number is Even \n");
	else
		printf("The number is Odd \n");
}
