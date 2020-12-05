// import function ft_putchar
void	ft_putchar(char c);

// Function to print hollow rectangle 
void	rush(int x, int y) 
{ 
	int i=1;
	while (i <= x) 
	{
		int j=1; 
		while (j <= y) 
		{ 
			if (i==1 && j==1 || i==1 && j==y || i==x && j==1 || i==x && j==y)
			{		 
				ft_putchar("o");
			} 
			else if (i==1 && j!=1 || i==1 && j!=y || i==x && j!=1 || i==x && j!=y)
			{		 
				ft_putchar("-");
			} 
			else if ( i!=1 && j==1 || i!=x && j==1 || i!=1 && j==y || i!=x && j==y)
			{			 
				ft_putchar("|");			 
			} 
			else 
			{
				ft_putchar(" ");
			}
			j++;
		} 
		j=1;
		i++;
		write(1, "\n", 1); 
	} 

} 