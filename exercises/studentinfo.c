 #include <stdio.h>

int main(void)
{
	int roll_number;
	float marks[3];
	float total, average;

	printf("Enter roll number: ");
	scanf("%d", &roll_number);

	printf("Enter marks for three subjects: ");
	scanf("%f %f %f", &marks[0], &marks[1], &marks[2]);

	total = marks[0] + marks[1] + marks[2];
	average = total / 3.0f;

	printf("Roll number: %d\n", roll_number);
	printf("Total marks: %.2f\n", total);
	printf("Average marks: %.2f\n", average);

	return 0;
}
