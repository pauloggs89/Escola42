/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgabriel <pgabriel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 21:22:58 by pgabriel          #+#    #+#             */
/*   Updated: 2020/12/03 16:39:32 by pgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b) //função que recebe como parâmetro os ponteiros 'a' e 'b'.
{
		int temp; //definindo uma variável pra segurar o valor de um dos ponteiros da função.

		temp = *a; //guardando o valor do ponteiro '*a' na variável.
		*a = *b; //passando o valor do ponteiro '*b' para o ponteiro '*a'.
		*b = temp; //passando o valor da variável que estava guardando o valor do ponteiro '*a' para o ponteiro '*b'.
}
