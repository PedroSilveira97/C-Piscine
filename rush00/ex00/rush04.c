/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frnicola <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 22:32:16 by frnicola          #+#    #+#             */
/*   Updated: 2025/01/18 22:32:40 by frnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char e);
void	only_positive(int *num);

void	outside_lines(int y, int conty, char up, char down)
{
	if (conty == 0)
	{
		ft_putchar(up);
	}
	else if (conty == y - 1)
	{
		ft_putchar(down);
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

void	where_in_x(int x, int contx, int y, int conty)
{
	if (contx == 0)
	{
		outside_lines(y, conty, 'A', 'C');
	}
	else if (contx == x - 1)
	{
		outside_lines(y, conty, 'C', 'A');
	}
	else
	{
		inside_lines(y, conty);
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
			where_in_x(x, contx, y, conty);
			conty++;
		}
		ft_putchar('\n');
		conty = 0;
		contx++;
	}
}
