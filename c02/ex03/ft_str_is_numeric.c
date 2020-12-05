/*Escreva uma função que retorne 1 se a string passada como parâmetro só contiver
números e retorne 0 se a função contiver outros tipos de caracteres.
Ela deverá ser prototipada da seguinte maneira:
int ft_str_is_numeric(char *str);
Ela deverá retornar 1 se str for uma string vazia.*/

#include <unistd.h>
#include <stdio.h>
 
int ft_str_is_numeric(char *str)
{
	int x; //definindo duas variáveis. o "x" para retornar o valor 1 caso a string contenha números ou 0 caso tenha outros caracteres.
	int i; // o "i" serve para ser o contador do loop.

	x=1; //definindo o x como 1. 
	i=0; //iniciando o contador do loop com 0.
	while(str[i] != '\0') //loop para percorrer a string fornecida na função até encontrar o ultimo caractere '\0'.
	{
		if((str[i] < 48) || (str[i] > 57)) //condição if que verifica se cada caractere está fora do range dos numeros.
		{ //o 48 é o '0' da tabela ascii e o 57 é o '9'.
			x=0; //se sim o valor de x é alterado para 0 indicando que a função tem outros tipos de caracteres.
		}
		i++; //incremento do i para o loop percorrer os valores um por um.
	}
	return(x); //no final a função do tipo int precisa retornar um valor que é 'x'.
}
