#include <stdio.h>

	int main(void){

		float v, r;
		double pi = 3.141592653589793;

		printf("\n>>value or radius 'r' in metre: ");
		scanf("%f", &r);

		
		v = (4.0f/3.0f)*pi*r*r*r;

		printf(">>volume of the sphere in (cubic metre) = %f\n", v);
		
	return 0;
}
