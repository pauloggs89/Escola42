#include <unistd.h> //biblioteca necessárioa para chamar a função write.

void ft_putstr(char *str) //definindo a função void com um ponteiro tipo char como parâmetro.
{
	int i = 0; //definindo uma variável tipo int para servir de ponto de partida para a repetição while

	while (str[i] != '\0') //repetição while que percorre os valores da string até e encontrar o valor '\0'(ultimo valor de uma string).
	{
		write(1, &str[i], 1); //função write que imprime o valor contido no endereçço do ponteiro str para cada valor de 'i'.
		i++; //incremento da variável 'i' para fazer o loop percorrer os valores. 
	}

}