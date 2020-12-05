/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgabriel <pgabriel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 12:58:09 by pgabriel          #+#    #+#             */
/*   Updated: 2020/12/03 21:55:01 by pgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

int main(void)
{
	char string[] = "Vou ser cadete da 42";
	int nr = ft_strlen(string);
	printf("O output da função é: %d\n", nr);
	return(0);
}