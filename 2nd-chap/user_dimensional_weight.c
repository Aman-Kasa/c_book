#include<stdio.h>
int main(void)
{
	int l, w, h, v, wg;

	printf("---<<<< type your measurnments below ---->>>>\n");
	printf("length: ");
	scanf("%d", &l);
	printf("width: ");
	scanf("%d", &w);
	printf("height: ");
	scanf("%d", &h);
	
	v = l*w*h;
        wg = (v+165)/166;	


	printf("\nv(cubic meter): %d\n", v);
	printf("wg(kg): %d\n", wg);
	printf("so your dimensional weight is: %dkg\n",wg); 
	printf("---------///--------\n");	
	return 0;
}
