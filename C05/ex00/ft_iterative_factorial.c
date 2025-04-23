/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 21:47:49 by ptavares          #+#    #+#             */
/*   Updated: 2025/01/30 21:55:08 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
	{
		while (nb > 1)
		{
			nb--;
			result = result * nb;
		}
	}
	return (result);
}

/*int	main(void)
{
	int	nb;

	nb = 4;
	printf("%d", ft_iterative_factorial(nb));
}*/
