/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 22:40:58 by ptavares          #+#    #+#             */
/*   Updated: 2025/01/29 23:07:16 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	nb_is_null_or_neg(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0 && nb > -2147483647)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	char	str[50];
	int		i;
	int		digit;

	nb = nb_is_null_or_neg(nb);
	i = 0;
	str[0] = '\0';
	while (nb > 0)
	{
		digit = nb % 10;
		str[i] = digit + '0';
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		write (1, &str[i], 1);
		i--;
	}
}

/*int	main(void)
{
	int	nb;

	nb = 	-42;
	ft_putnbr(nb);
}*/
