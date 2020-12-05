/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgabriel <pgabriel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 22:09:58 by pgabriel          #+#    #+#             */
/*   Updated: 2020/11/21 22:39:39 by pgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// C code for hollow rectangle 
#include <stdio.h> 
#include <unistd.h>

// Function to print hollow rectangle 
void print_rectangle(int x, int y) 
{ 
	int i=1;
	while (i <= x) 
	{
		int j=1; 
		while (j <= y) 
		{ 
			if (i==1 && j==1 || i==1 && j==y || i==x && j==1 || i==x && j==y)	{		 
				write(1, "o", 1);
			} else if (i==1 && j!=1 || i==1 && j!=y || i==x && j!=1 || i==x && j!=y)	{		 
				write(1, "-", 1);
			} else if ( i!=1 && j==1 || i!=x && j==1 || i!=1 && j==y || i!=x && j==y) {			 
				write(1, "|", 1);			 
			} else {
				write(1, " ", 1);
			}
			j++;
		} 
		j=1;
		i++;
		write(1, "\n", 1); 
	} 

} 

// Driver program for above function 
int main() 
{ 
	int rows = 8, columns = 1; 
	print_rectangle(rows, columns); 
	return 0; 
} 
