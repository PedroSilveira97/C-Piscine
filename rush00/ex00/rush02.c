/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 22:25:58 by ptavares          #+#    #+#             */
/*   Updated: 2025/01/18 22:26:03 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char e);
void	only_positive(int *num);

void	first_line(int y, int conty)
{
	if (conty == 0 || conty == y - 1)
	{
		ft_putchar('A');
	}
	else
	{
		ft_putchar('B');
	}
}

void	last_line(int y, int conty)
{
	if (conty == 0 || conty == y - 1)
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
