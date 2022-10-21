#include <stdio.h>

int main() {
	
	float x1, y1, x2, y2, res1, res2;
	
	printf("Please Input the First X and Y coordinates:");
	scanf("%g, %g", &x1, &y1);
	
	printf("Please Input the Second X and Y coordinates:");
	scanf("%g, %g", &x2, &y2);
	
	res1 = (x1 + y1)/2;
	res2 = (x2 + y2)/2;
	
	printf("%g,%g is the mid-point coordinate.", res1, res2);
	
	return 0;
	
}