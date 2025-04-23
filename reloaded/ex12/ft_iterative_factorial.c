/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:05:47 by ptavares          #+#    #+#             */
/*   Updated: 2025/04/03 14:22:33 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (nb > 0)
		{
			result = result * nb;
			nb--;
		}
	}
	return (result);
}

/*int	main(void)
{
	int	nb;

	nb = -10;
	printf("The factorial of %d is %d", nb, ft_iterative_factorial(nb));
	return (0);
}*/
