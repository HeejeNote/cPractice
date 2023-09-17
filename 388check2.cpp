#include <stdio.h>

/**
  역수출력 
*/
int main()
{
	int number = 1234;
	int div = 10, result = 0;
	
	while(number != 0) {
		result = result * div;
		result = result + number % div;
		number = number / div;
	}	
	printf("%d", result); // 4321
}
