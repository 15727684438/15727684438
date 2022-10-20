#include <stdio.h>	
int main(void) {
	volatile long a = 0;
	while (a < 100000000)
	{
		a++;
	}
	return 0;
}