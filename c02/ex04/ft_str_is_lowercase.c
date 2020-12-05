/*Escreva uma função que retorne 1 se a string passada como parâmetro só contiver
caracteres alfabéticos minúsculos e retorne 0 se a função contiver outros tipos de
caracteres.
Ela deverá ser prototipada da seguinte maneira:
int ft_str_is_lowercase(char *str);
Ela deverá retornar 1 se str for uma string vazia.*/

#include <unistd.h>
#include <stdio.h>
 
int ft_str_is_lowercase(char *str)
{
	int i;
	int x;
	x=1;
	i =0;

	if( str[i] != '\0')
	{
			if((str[i] < 96) || (str[i] > 123))
			{
				x=0;
			}
		i++;
	}
	return(x);
}

