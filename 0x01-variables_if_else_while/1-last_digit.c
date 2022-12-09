#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
        int n;
	int last;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
	printf("last digit of %i is",n);
	last = n % 10;
        if(last > 5)
                printf(" last digit of  %i is greater than 5\n",n,last);
        else if ((last < 6) && (last <0))
                printf(" last digit of %i is less than 6 and not 0\n",last);
	else
		printf("last difit of %i is 0\n",last);
       
        return (0);
}

