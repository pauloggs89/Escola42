/*Escreva uma função que inverta a ordem dos elementos de uma matriz de inteiros.
• Os parâmetros são um ponteiro para inteiro e o número de inteiros na matriz.
• A função deverá ser prototipada da seguinte maneira:
void ft_rev_int_tab(int *tab, int size);
*/

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int total = 8;
	int array_i[total];
	int count_i;
	int *pointer;
	int pointer_i = 0;
	int pointer_new = 0;

	count_i = 0;
	while (count_i < total)
	{
		array_i[count_i] = count_i + 1;
		count_i++;
	}

	pointer = array_i;

	while(pointer_i < total)
	{
		printf("%d", pointer[pointer_i]);
		printf(",");
		pointer_i++;
	}

	ft_rev_int_tab(pointer, total);

	printf("\n");
	while(pointer_new < total)
	{
		printf("%d",pointer[pointer_new]);
		printf(",");
		pointer_new++;
	}
	printf("\n");

	return(0);
}