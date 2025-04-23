/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:26:47 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/26 19:14:43 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int		uft_get_row(int index, int n);
int		uft_get_col(int index, int n);
void	print_array(int *array, int nlin, int ncol);
int		solve_check_visibility_col(int mat_given[16], int mat_sky[16], int n);
int		solve_check_visibility_row(int mat_given[16], int mat_sky[16], int n);
int		solve_check_visibility(int mat_given[16], int mat_sky[16], int n);

int	solve_is_unique_row(int mat_sky[16], int n, int row, int num)
{
	int	col;

	col = 0;
	while (col < n)
	{
		if (mat_sky[row * n + col] == num)
			return (0);
		col++;
	}
	return (1);
}

int	solve_is_unique_col(int mat_sky[16], int n, int col, int num)
{
	int	row;

	row = 0;
	while (row < n)
	{
		if (mat_sky[row * n + col] == num)
			return (0);
		row++;
	}
	return (1);
}

int	solve_valid(int mat_given[16], int mat_sky[16], int index, int num)
{
	int	row;
	int	col;

	row = uft_get_row(index, 4);
	col = uft_get_col(index, 4);
	if (!(solve_is_unique_row(mat_sky, 4, row, num)))
		return (false);
	if (!(solve_is_unique_col(mat_sky, 4, col, num)))
		return (false);
	if (!(solve_check_visibility(mat_given, mat_sky, 4)))
		return (false);
	return (true);
}

int	solve(int mat_given[16], int mat_sky[16], int index, int n)
{
	int	row;
	int	col;
	int	num;

	row = uft_get_row(index, n);
	col = uft_get_col(index, n);
	if (row == n)
		return (true);
	if (mat_sky[index] != 0)
		return (solve(mat_given, mat_sky, index + 1, n));
	num = 1;
	while (num <= n)
	{
		if (solve_valid(mat_given, mat_sky, index, num))
		{
			mat_sky[index] = num;
			if (solve(mat_given, mat_sky, index + 1, n))
				return (true);
			mat_sky[index] = 0;
		}
		num++;
	}
	return (false);
}
