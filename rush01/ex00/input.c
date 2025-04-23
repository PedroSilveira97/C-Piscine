/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 18:25:47 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/26 20:28:45 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

int	create_mat_given(int mat_given[16], char *param)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (i < 16)
	{
		mat_given[i] = param[0] - '0';
		param = param + 2;
		i++;
	}
	return (true);
}

int	is_numeric_valid(char *c)
{
	if ((*c >= '1') && (*c <= '4'))
		return (true);
	return (false);
}

int	check_input(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		if (!is_numeric_valid(&*str))
			return (false);
		else
			count++;
		str++;
		if (count != 16)
		{
			if (*str != ' ')
				return (false);
			else
				str++;
		}
	}
	return (true);
}
