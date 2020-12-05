int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
 
	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0') && --n)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}


#include <stdio.h>
#include <string.h>
 
int ft_strncmp(char *s1, char *s2, unsigned int n);
 
int main(void)
{
	char	s1[15];
	char	s2[15];
	int	 ret;
 
	strcpy(s1, "abcd");
	strcpy(s2, "ABCD");
 
	ret = ft_strncmp(s1, s2, 4);
 
	if (ret < 0)
	{
		printf("A string s1 é menor e não confere\n");
	}
	else if (ret > 0)
	{
		printf("A string s1 é menor e não confere\n");
	}
	else
	{
		printf("As strings conferem\n");
	}
	return (0);
}
