/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgabriel <pgabriel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 00:15:56 by pgabriel          #+#    #+#             */
/*   Updated: 2020/11/27 00:27:25 by pgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Escreva uma função que mostre ’N’ ou ’P’ segundo o sinal do inteiro passado como
parâmetro. Se n for negativo, indique ’N’. Se n for positivo ou nulo, indique ’P’.
*/

#include <unistd.h>

void 	ft_is_negative(int n)
{
		if (n >= 0)
		{
			write(1,"P",1);
		} 
		else {
			write(1,"N",1);
		}
}