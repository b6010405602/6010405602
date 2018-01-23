#include <stdio.h>
int main()
{

	float radius, vol;
	printf("Please enter radius: ");
	scanf("%f", &radius);
	vol = (radius*radius*radius)*(22)*(4)/(7*3);
	printf("The volume of this sphere is %.2f", vol);
}