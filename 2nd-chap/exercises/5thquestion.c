#include<stdio.h>
	
	int main(void){

		float y, x;

		printf("Enter the value of x = ");
		scanf("%f", &x);
	
		y = 3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - 2*(x*x) + 7*(x) - 6;
		
		printf("y = %f\n", y);

	return 0;

	}
