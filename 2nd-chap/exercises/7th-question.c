#include <stdio.h>

	int main(void){

		int amount, x, y, z, q;

		printf("Enter your amount in us dollars = ");
		scanf("%d", &amount);
		
		x = amount/20;
		amount = amount % 20;

		y = amount/10;
		amount = amount % 10;

		z = amount/5;
		amount = amount % 5;

		q = amount/1;
		amount = amount % 1;

		printf("$20_dollar_bill = %d\n", x);
		printf("$10_dollar_bill = %d\n", y);
		printf("$5_dollar_bill = %d\n", z);
		printf("$1_dollar_bill = %d\n", q);

	return 0;
}
