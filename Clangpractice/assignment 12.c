#include <stdio.h>
#define  LENGTH 5


void copy_arr(double *target, double *source, int arr_len);
void copy_ptr(double *target, double *source, int arr_len);
void copy_ptrs(double *target, double *source_start, double *source_end);

int main(void)
{
	double source[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	double target1[5];
	double target2[5];
	double target3[5];

	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);
	copy_ptrs(target3, source, source + 5);

	printf("%15s|%15s|%15s\n", "target1", "target2", "target3");
	for (int i = 0; i < 5; i++)
		printf("%15.3f|%15.3f|%15.3f\n", target1[i], target2[i], target3[i]);

	return 0;
}

void copy_arr(double *target, double *source, int arr_len)
{
	for (int i = 0; i < arr_len; i++)
	{
		target[i] = source[i];
	}
}

void copy_ptr(double *target, double *source, int arr_len)
{
	for (int i = 0; i < arr_len; i++)
	{
		*(target + i) = *(source + i);
	}
}

void copy_ptrs(double *target, double *source_start, double *source_end)
{
	for (double *ptr = source_start; ptr < source_end; ptr++, target++)
		*target = *ptr;
}