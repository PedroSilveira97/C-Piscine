/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 01:50:42 by ptavares          #+#    #+#             */
/*   Updated: 2025/04/03 13:35:53 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i != size / 2)
	{
		aux = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = aux;
		i = i + 1;
	}
}

/*int	main(void)
{
	int	tab[9];
	int	size;

	size = 0;
	while (size < 9)
	{
		tab [size] = size + 1;
		size++;
	}
	ft_rev_int_tab(tab, size);
	size = 0;
	while (size < 9)
	{
		printf("%d", tab[size]);
		size = size + 1;
	}
	return (0);
}*/
