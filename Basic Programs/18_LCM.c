#include <stdio.h>

int main()
{

	int a, b, multiple, lcm;

	printf("Enter the two numbers: ");
	scanf("%d %d", &a, &b);

	multiple = (a < b) ? a : b;
	// LCM logic
	while (1)
	{
		if (multiple % a == 0 && multiple % b == 0)
		{
			lcm = multiple;
			break;
		}
		multiple++;
	}

	printf("The LCM of %d and %d is %d \n", a, b, lcm);
}
