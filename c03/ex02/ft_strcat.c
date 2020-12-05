char	*ft_strcat(char *dest, char *src)
{
	int	 i;
	int	 j;
 
	i = 0;
	j = 0;
	while (dest[i])
		++i;
	while (src[j])
	{
		dest[i] = src[j];
		++i;
		++j;
	}
	dest[i] = 0;
	return (dest);
}

 
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
char	*ft_strcat(char *dest, char *src);
 
int	 main(void)
{
	char	buffer[80];
 
	strcpy( buffer, "Hello " );
	ft_strcat( buffer, "World" );
 
	printf( "%s\n", buffer );
 
	return EXIT_SUCCESS;	
}
