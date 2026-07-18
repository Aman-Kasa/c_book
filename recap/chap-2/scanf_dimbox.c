#include <stdio.h>
 	
	int main(void)
	{
	int length, width, height, volume, weight;

	volume = length * width * height;
	weight = (volume + 165) / 166;

	printf("length(meter): ");        // length of the box//
	scanf("%d", &length);

	printf("width(meter): ");
	scanf("%d", &width);

	printf("height(meter): "); 	// height of the box
	scanf("%d", &height);

	volume = length * width * height;
	weight = (volume + 165) / 166;
	
	printf("volume(meter cube): %d \n", volume);
	printf("weight(kg): %d \n", weight);

	return 0;

	}
