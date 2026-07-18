#include <stdio.h>

	int main (void)
	{
	int length, width, height, volume, weight;
	
	length = 12;
	width = 10;
	height = 8;
	volume = length * width * height;
	weight = (volume + 165) / 166;

	printf("dimensions(meter):%dx%dx%d\n" , length, width, height);
	printf("volume(meter cube): %d \n", volume);
	printf("weight(kg): %d \n" , weight);

	return 0;

	}
