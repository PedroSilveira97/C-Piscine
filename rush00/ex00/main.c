/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 13:48:22 by ptavares          #+#    #+#             */
/*   Updated: 2025/01/18 13:48:57 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	outside_lines(int y, int conty);
void	inside_lines(int y, int conty);
void	rush(int y, int x);
void	only_positive(int num);
void	ft_putchar(char e);
void	first_line(int y, int conty);
void	last_line(int y, int conty);
void	where_in_x(int x, int contx, int y, int conty);

int	main(void)
{
	rush(5, 5);
	return (0);
}
