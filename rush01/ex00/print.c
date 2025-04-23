/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:09:14 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/26 19:02:05 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	uft_rev_str(char *tab, int size)
{
	char	temp;
	int		i;
	int		lim;

	i = 0;
	lim = size / 2 - 1;
	while (i <= lim)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, &*str++, 1);
}

void	ft_putnbr(int nb)
{
	int		is_negative;
	char	nb_str[11];
	int		i;

	if (nb < 0)
	{
		is_negative = 1;
		nb = nb * -1;
	}
	else
		is_negative = 0;
	i = 0;
	while (nb > 0)
	{
		nb_str[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	if (i == 0)
		nb_str[i++] = '0';
	if (is_negative)
		nb_str[i++] = '-';
	nb_str[i] = '\0';
	uft_rev_str(nb_str, ft_strlen(nb_str));
	ft_putstr(nb_str);
}

void	print_array(int *array, int nlin, int ncol)
{
	int	i;
	int	j;

	i = 0;
	while (i < nlin)
	{
		j = 0;
		while (j < ncol)
		{
			ft_putnbr(array[i * ncol + j]);
			j++;
			if (!(j == ncol))
				ft_putstr(" ");
		}
		ft_putstr("\n");
		i++;
	}
}
