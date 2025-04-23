/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:24:23 by ptavares          #+#    #+#             */
/*   Updated: 2025/04/03 14:31:56 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		result = result * nb;
	return (nb * ft_recursive_factorial(nb -1));
}

/*int	main(void)
{
	int	nb;

	nb = 6;
	printf("The factorial of %d is %d", nb, ft_recursive_factorial(nb));
	return (0);
}
*/
