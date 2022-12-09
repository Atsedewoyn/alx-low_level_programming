#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
	last = n % 10;
        if(last > 5)
                printf(" last digit of  %i is greater than 5\n",n,last);
        else if (last==0)
                printf(" last digit of %i is 0\n",n,last);
	else if (last < 6)
		printf("last difit of %i is %i and less than 6 and not 0\n",n,last);
       
        return (0);
}

