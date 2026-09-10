#include <stdbool.h>
#include <stdio.h>

int main(void)
{
	char letter = 'A';
	int count = 42;
	float temperature = 36.5f;
	double distance = 1234.5678;
	_Bool is_ready = true;

	printf("char: %c\n", letter);
	printf("int: %d\n", count);
	printf("float: %f\n", temperature);
	printf("double: %f\n", distance);
	printf("_Bool: %d\n", is_ready);

	return 0;
}
