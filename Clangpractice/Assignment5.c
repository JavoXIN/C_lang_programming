#include <stdio.h>
#define GALONTOLITR 3.785
#define MILETOKM 1.609


int main(void) 
{
	printf("Enter Number of Miles traveled and Gasoline used:\n");
	float miles, galon;
	scanf("%f", &miles);
	scanf("%f", &galon);
	printf("Miles per galon %.1f\n", miles / galon);
	float liters = galon * GALONTOLITR, kms = miles * MILETOKM;
	printf("km per liter %.1f\n", kms / liters);

	return 0;
}