#include <stdio.h>

int main(void)
{
	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < (row == 0 ? 3 : 5); col++) {
			if ((row == 0 && col == 2) ||
			    (row == 1 && (col == 0 || col == 4)) ||
			    (row == 2 && (col == 0 || col == 2 || col == 4))) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}