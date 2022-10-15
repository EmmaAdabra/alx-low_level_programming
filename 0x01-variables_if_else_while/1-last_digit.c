#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *main-program entry point.
 *
 *Return:0 if no error, non-zero value if error.
 */
int main(void)
{
	int n;
	int lst_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst_digit = n % 10;
	if (lst_digit > 5)												
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_digit);
	}
	else if (lst_digit == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, ldigit);
	}
	else if (lst_digit < 6 && lst_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not zero\n", n, lst_digit);
	}
	return (0);
}
