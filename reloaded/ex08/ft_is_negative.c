/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 21:27:04 by ptavares          #+#    #+#             */
/*   Updated: 2025/04/03 13:04:25 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int a)
{
	char	n;
	char	p;

	n = 'N';
	p = 'P';
	if (a < 0)
		ft_putchar(n);
	else
		ft_putchar(p);
}

int	main(void)
{
	int	n;

	n = 0;
	ft_is_negative(n);
	return (0);
}
