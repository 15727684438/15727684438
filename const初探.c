#include <stdio.h>	
int main(void) {
	int const* pt[5];
	int array[5];
	*pt = array;
	return 0;
} 