/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:33:24 by ptavares          #+#    #+#             */
/*   Updated: 2025/04/03 15:50:25 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i <= nb)
	{
		i++;
		if (i * i == nb)
			return (i);
	}
	return (0);
}

int	main(void)
{
	int	nb;
	int	result;

	nb = -36;
	result = ft_sqrt(nb);
	printf("The square root of %d is %d or %d", nb, result, -result);
}
