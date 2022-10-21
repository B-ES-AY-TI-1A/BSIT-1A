#include <stdio.h>

int main() {
	
	int pep, seat, difference;
	
	printf("Please enter the number of passengers:");
	scanf("%i", &pep);
	
	printf("Please enter the number of seats:");
	scanf("%i", &seat);
	
	difference = seat % pep;
	
	printf("The number of seats left is %i.", difference);
	
	return 0;
	
}