/*Escreva uma função que troque o conteúdo de dois inteiros cujos endereços são
dados em parâmetros.
• Ela deverá ser prototipada da seguinte maneira:
void ft_swap(int *a, int *b);
*/
#include <stdio.h>

void	ft_swap(int *a, int *b); //importando a função que irá fazer a troca das variáveis.
 
int		main(void) //definindo a função main.
{
    int na, nb; //definindo duas variáveis do tipo inteiro 'na' e 'nb'.
    int *a, *b; //definindo dois ponteiros do tipo inteiro '*a' e '*b'.
 
    na = 9; //atribunindo o valor '2' a variável na.
    nb = 0; //atribundo o valor '4' a variável nb.
    a = &na; //associando o ponteiro 'a' no endereço da variável 'na' através do sinal '&'.
    b = &nb; //associando o ponteiro 'b' no endereço da variável 'nb' utilizando o sinal '&'.
 
    ft_swap(a, b); //chamando a função ft_swap para trocar o valor das variáveis.
    printf("quarenta e dois: %i%i\n", na, nb); //mostrando o resultado da troca na tela.
}