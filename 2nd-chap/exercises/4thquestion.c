#include<stdio.h>

	int main(void){

		int tax, amount, tax_added;

		printf(">>Enter your amount: ");
		scanf("%d",&amount);

		tax = amount * 5/100;

		tax_added  = amount + tax;

		printf("Amount after 5 percent tax_added =  %d\n", tax_added);

	return 0;
}
