/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:34:26 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/26 19:15:29 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	uft_get_row(int index, int n)
{
	return (index / n);
}

int	uft_get_col(int index, int n)
{
	int	row;

	row = uft_get_row(index, n);
	return (index - row * n);
}
