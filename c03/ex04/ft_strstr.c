char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
 
	i = 0;
	if (!*to_find)
		return (str);
	while (*(str + i) != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}




#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	 main(void)
{
	printf( "%s\n", ft_strstr("This is an example", "is") );
	return (0);
}
