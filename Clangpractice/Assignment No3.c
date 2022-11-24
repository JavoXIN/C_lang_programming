#include <stdio.h>

int main(void)
{
	float secondsinyear = 3.156e+07;
	int age, now;

	printf("Please enter your age:\n");
	scanf_f("%d", &age);
	now = age * secondsinyear;
	printf("Now you are living in %d ", now);
	printf("seconds of your life.\n");

	return 0;
}