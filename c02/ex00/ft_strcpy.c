/*Reproduzir de forma idêntica o funcionamento da função strcpy (man strcpy).
• Ela deverá ser prototipada da seguinte maneira:
char *ft_strcpy(char *dest, char *src);

A função strcpy() copia a string apontada no src, incluindo caracteres nulos, para o dest.
Essa função também retorna a string copiada.
*/
#include<stdio.h> 
char *ft_strcpy(char *dest, char *src);

int		main(void)
{//definindo variáveis para realizar o teste na função main
	char dest[20];
	char src[] = "Vamos virar cadetes da 42!";
//chamando a função ft_strcpy e passando como parâmetro o dest e o src sem o sinal de &.
	ft_strcpy(dest, src);
	printf("O que vai acontecer daqui a pouco? %s\n", dest);
	return(0);
}
//criando a função ft_strcpy conforme o exercício.
char	*ft_strcpy(char *dest, char *src)
{//criando uma variável "i" para servir de contador do while.
	int i;

	i = 0;
	while (src[i] != '\0') //repetição while que vai executar caso o caractere do src[i] não seja '\0'.
	{
		dest[i] = src[i]; //atribuindo cada valor do src[i] ao dest[i].
		i++; //incremento do "i" para o while funcionar.
	}
	dest[i] = '\0'; //ao final da repetição while o valor '\0' é atribuído ao dest[i] para indicar o fim da lista.
	return (dest); //retorna 
}

