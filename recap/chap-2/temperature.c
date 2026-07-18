#include <stdio.h>
	 
	int main(void)
	 
	{
		float celcius, fahreinheit;

		printf("fahreinheit temp: ");
		scanf("%f", &fahreinheit);

		celcius = (fahreinheit - 32) / 1.8;

		printf("celcius: %f\n", celcius);

		return 0;

	}
