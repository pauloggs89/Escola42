/*Escreva uma função que mostre um a um os caracteres de uma string na tela.
• O endereço do primeiro caractere da string está contido no ponteiro passado como
parâmetro para a função.
• Ela deverá ser prototipada da seguinte maneira:
void ft_putstr(char *str);
*/
#include <stdio.h>
void ft_putstr(char *str);

int main(void)
{
	char *str = "Vamo passar no base camp!!";
                                                                                                                                                                                                                                                                                                                                                                                                                                                             
	ft_putstr(str);

	return(0);
}