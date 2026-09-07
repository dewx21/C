 #include <stdio.h>

int main(void)
{
	long long number, original, remainder, sum = 0;
	int digits = 0;

	printf("Enter a number: ");
	if (scanf("%lld", &number) != 1) {
		printf("Invalid input.\n");
		return 1;
	}

	if (number < 0) {
		printf("%lld is not an Armstrong number.\n", number);
		return 0;
	}

	original = number;

	if (number == 0) {
		digits = 1;
	} else {
		for (long long value = number; value != 0; value /= 10) {
			digits++;
		}
	}

	for (long long value = number; value != 0; value /= 10) {
		remainder = value % 10;
		long long power = 1;

		for (int i = 0; i < digits; i++) {
			power *= remainder;
		}
		sum += power;
	}

	if (sum == original) {
		printf("%lld is an Armstrong number.\n", original);
	} else {
		printf("%lld is not an Armstrong number.\n", original);
	}

	return 0;
}
