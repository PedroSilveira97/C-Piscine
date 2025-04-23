/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 22:25:02 by ptavares          #+#    #+#             */
/*   Updated: 2025/01/30 22:25:54 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
	{
		while (power > 1)
		{
			result = result * nb;
			power--;
		}
		return (result);
	}
}

/*int	main(void)
{
	int	power;
	int	nb;
	
	power = 2;
	nb = 4;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}*/
