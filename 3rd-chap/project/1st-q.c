#include<stdio.h>

	int main()

{
	int mm, dd, yyyy;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm,&dd,&yyyy);

	printf("you entered the date: %d %d %d\n ", yyyy, mm, dd);

	return 0;
	

}
