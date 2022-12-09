#include <stdlib.h>
#include <time.h>
/* more headers goes there*/

#include <stdio.h>
/* betty styele doc for function main goes there */
int main(void)
{
       	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("The number %d is positive\n", n);
	}
	
	else if (n < 0)
	{
	       	printf("The number %d is negative\n", n);
	}
	
	else
	{
		printf("The number %d is zero\n", n); 
	}
	
	return (0);

}
