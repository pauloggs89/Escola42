/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgabriel <pgabriel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:03:43 by pgabriel          #+#    #+#             */
/*   Updated: 2020/12/04 14:32:13 by pgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int x;
	int cont;

	x = 0;
	cont = 0;
	size--;
	while (cont < size)
	{
		x = tab[cont]; //guardando o valor do ponteiro *tab, posição [cont], na variável x. Para trocar o valor de posição na próxima linha.
		tab[cont] = tab[size]; //colocando o valor de *tab, posição [size], em *tab, posição [cont].
		tab[size] = x; //pegando o valor armazenado na variável 'x' e colocando no ponteiro tab, posição [size].
		cont++; //incremento variável cont.
		size--; //decrescendo o valor da variável size.
	}
}
