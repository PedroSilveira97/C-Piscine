/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 23:40:06 by ptavares          #+#    #+#             */
/*   Updated: 2025/01/18 23:40:08 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char e);
void	only_positive(int *num);

void	first_line(int y, int conty)
{
	if (conty == 0)
	{
		ft_putchar('/');
	}
	else if (conty == y - 1)
	{
		ft_putchar(92);
	}
	else
	{
		ft_putchar('*');
	}
}

void	last_line(int y, int conty)
{
	if (conty == 0)
	{
		ft_putchar(92);
	}
	else if (conty == y -1)
	{
		ft_putchar('/');
	}
	else
	{
		ft_putchar('*');
	}
}

void	inside_lines(int y, int conty)
{
	if (conty == 0 || conty == y - 1)
	{
		ft_putchar('*');
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
		first_line(y, conty);
	}
	else if (contx == x -1)
	{
		last_line(y, conty);
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
