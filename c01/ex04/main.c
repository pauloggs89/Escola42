/*• Escreva uma função ft_ultimate_div_mod que tenha a seguinte prototipagem:
void ft_ultimate_div_mod(int *a, int *b);
• Essa função divide os int apontados por a e b.
O resultado da divisão está armazenado no int apontado por a.
O resultado do resto da divisão está armazenado no int apontado por b.*/
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int var_a, var_b; //definindo as variáveis
	var_a = 100; //atribunindo valor para as variáveis
	var_b = 50;

	printf("O valor da variável 'a' é: %d\n", var_a);
	printf("O valor da variável 'b' é: %d\n", var_b);

	ft_ultimate_div_mod(&var_a, &var_b); //chamando a função passando os endereços das variáveis como parâmetro.

	printf("O novo valor da variável 'a' é: %d\n", var_a);
	printf("O novo valor da variável 'b' é: %d\n", var_b);

	return(0);
}