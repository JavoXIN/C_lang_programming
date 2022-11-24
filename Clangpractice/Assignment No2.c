#include <stdio.h>

int main(void)
{
	char ch;

	printf("Please enter a character:\n");
	scanf_s("%d", &ch);    /* we can write just "scanf" too */
	printf("The code for %d is %c in Asc2 code system.\n", ch, ch);

	return 0;
}