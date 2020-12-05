/*A função strncpy (char * dest, const char * src, size_t n) copia até n caracteres da string apontada,
por src para dest. Em um caso em que o comprimento de src é menor do que n, o restante de dest será preenchido com bytes nulos.
*/
#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n) //unsidned int nr só pode ser positivo.
{ //variáveis do tipo unsigned só aceitam numeros positivos, mas o limite é duas vezes maior. 
	unsigned int i; //criando uma variável tipo unsigned int chamada "i". pode ser representada por "uint".
 
	i = 0; //iniciando o contador para o loop while.
	while ((src[i] != '\0') && (i < n)) //loop que verifica se o valor de src é diferente do ultimo valor '\0' e se o 'i' é menor que o 'n'.
	{
		dest[i] = src[i]; //passando cada valor do ponteiro src[i] para o outro ponteiro dest[i], como pede o exercício.
		i++; //incremento do "i" para fazer o loop percorrer os caracteres da string.
	}
	dest[i] = '\0'; //quando acaba o loop o ultimo valor de dest é preenchido com o '\0'.
	return (dest); //a função retorna a cópia da string "dest".
}

int	main(void)
{
	char src[] = "Testando o teste do teste!@#12";
	char dest[15];

	ft_strncpy(dest, src, 15);
	printf("Copia da string: %s\n", dest);
	return(0);
}
