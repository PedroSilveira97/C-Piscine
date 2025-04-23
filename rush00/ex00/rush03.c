/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 14:26:11 by ptavares          #+#    #+#             */
/*   Updated: 2025/01/18 14:26:15 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char e);
void	only_positive(int *num);

void	outside_lines(int y, int conty)
{
	if (conty == 0)
	{
		ft_putchar('A');
	}
	else if (conty == y - 1)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	inside_lines(int y, int conty)
{
	if (conty == 0 || conty == y - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int y, int x)
{
	int	contx;
	int	conty;

	contx = 0;
	conty = 0;
	only_positive(&y);
	only_positive(&x);
	while (contx != x)
	{
		while (conty != y)
		{
			if (contx == 0 || contx == x - 1)
			{
				outside_lines(y, conty);
			}
			else
			{
				inside_lines(y, conty);
			}
			conty++;
		}
		ft_putchar('\n');
		conty = 0;
		contx++;
	}
}
