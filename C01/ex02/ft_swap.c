/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 21:47:10 by ptavares          #+#    #+#             */
/*   Updated: 2025/01/19 21:47:15 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	c;

	if (a && b)
	{
		c = *a;
		*a = *b;
		*b = c;
	}
}

/*int	main(void)
{
	int	i;
	int	j;
	int	*a;
	int	*b;

	i = 7;
	j = 3;
	a = &i;
	b = &j;
	ft_swap(a, b);
	printf("i was 7, and now it is %d\n", *a);
	printf("j was 3, and now it is %d", *b);
}*/
