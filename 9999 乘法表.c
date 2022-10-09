#include <stdio.h>
int main(void) {
	int i=1, j=1,result=0;
	for ( i = 1; i <= 9999; i++)
	{
		for ( j = 1; j <=i; j++)
		{
			result = i * j;
		}
	}	return 0;
}