/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:15:05 by ptavares          #+#    #+#             */
/*   Updated: 2025/04/03 13:28:23 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *b;
	*b = *a;
	*a = aux;
}

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = -42;
	printf("A and B were respectively %d and %d %c", a, b, '\n');
	ft_swap(&a, &b);
	printf("A and B are now respectively %d and %d", a, b);
}
