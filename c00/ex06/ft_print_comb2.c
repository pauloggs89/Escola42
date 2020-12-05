/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgabriel <pgabriel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 08:55:40 by pgabriel          #+#    #+#             */
/*   Updated: 2020/12/02 12:04:32 by pgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Escreva uma função que mostre todas as diferentes combinações de dois números
entre 0 e 99, em ordem crescente.
• Isso resulta em algo do tipo:
$>./a.out | cat -e
00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>
• Ela deve ser prototipada da seguinte maneira:
void ft_print_comb2(void);*/

#include <unistd.h>

int g_nr1;
int g_nr2;
int g_nr3;
int g_nr4;

void	ft_print_nr(int g_nr1, int g_nr2, int g_nr3, int g_nr4)
{
	if ((10*g_nr1 + g_nr2) < (10*g_nr3 + g_nr4))
	{
		write(1, &g_nr1, 1);
		write(1, &g_nr2, 1);
		write(1, " ", 1);
		write(1, &g_nr3, 1);
		write(1, &g_nr4, 1);
		if (g_nr1 != '9' || g_nr2 != '8')
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb2(void)
{
	g_nr1 = '0';
	g_nr2 = '0';
	g_nr3 = '0';
	g_nr4 = '0';
	while (g_nr1 <= '9')
	{
		while (g_nr2 <= '9')
		{
			while (g_nr3 <= '9')
			{
				while (g_nr4 <= '9')
				{
					ft_print_nr(g_nr1, g_nr2, g_nr3, g_nr4);
					g_nr4++;
				}
				g_nr4 = '0';
				g_nr3++;
			}
			g_nr3 = '0';
			g_nr2++;
		}
		g_nr2 = '0';
		g_nr1++;
	}
}
