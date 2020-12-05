#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
	int nr = '1';

	ft_ft(&nr);

	printf("%i\n", nr);
	return(0);
}