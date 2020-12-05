/*Escreva uma função ft_div_mod que tenha a seguinte prototipagem:
void ft_div_mod(int a, int b, int *div, int *mod);
• Essa função divide os dois parâmetros a e b e armazena o resultado no int apontado
por div.
Ela também armazena o resto da divisão de a e b no int apontado por mod.
*/
#include <stdio.h> //biblioteca cujo nome vem da expressão inglesa standard input-output header, que significa "cabeçalho padrão de entrada/saída"

void	ft_div_mod(int a, int b, int *div, int *mod); //chamada da função ft_div_mod.
 
int		main(void) //
{
		int a, b, x, y; //definindo as variáveis do tipo inteiro 'a', 'b', 'x' e 'y'.
 		int *div, *mod; //definindo os ponteiros do tipo inteiro '*div' e '*mod'.
 
		a = 10; //atribuindo o valor 7 a variável 'a'.
		b = 2; //atribuindo o valor 2 a variável 'b'.
		div = &x; //atribuindo o valor do endereço da variável 'x' no ponteiro 'div'.
		mod = &y; //atribuindo o valor do endereço da variável 'y' no ponteiro 'mod'.
		ft_div_mod(a, b, div, mod); //chamando a função ft_div_mod.
		printf("resultado: %d\n", *div); //printando o valor do ponteiro *div.
		printf("resto: %d\n", *mod); //printando o valor do ponteiro *mod.
}