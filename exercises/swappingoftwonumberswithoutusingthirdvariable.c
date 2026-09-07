
#include <stdio.h>

int main(void)
{
	int first, second;

	printf("Enter two integers: ");
	if (scanf("%d %d", &first, &second) != 2) {
		printf("Invalid input.\n");
		return 1;
	}

	first = first + second;
	second = first - second;
	first = first - second;

	printf("After swapping: %d %d\n", first, second);
	return 0;
}
