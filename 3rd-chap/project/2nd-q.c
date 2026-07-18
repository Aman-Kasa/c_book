#include<stdio.h>

	int main(void)

{
	int mm, dd, yyyy, item_number;
	float unit_price;

	//product information function
	printf("enter item no: ");
	scanf("%d", &item_number);   //item number
	

	printf("enter unit price: ");	
	scanf("%f", &unit_price);   //unit price
	
	
	printf("enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);   //date 

	
	printf("\nitem\tunit\tpurchase\n");
	printf("\tprice \t Date");

	printf("\n%d\t$%.2f\t%d/%d/%d\n", item_number,unit_price, mm, dd, yyyy);

	return 0;
}
