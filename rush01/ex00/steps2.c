/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 19:10:28 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/26 19:36:20 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	solve_check_visibility_col_down(int mat_given[16], int mat_sky[16],
	int n, int col)
{
	int	row;
	int	count;
	int	taller;

	while (col < n)
	{
		row = 0;
		taller = 0;
		count = 0;
		while (row < n)
		{
			if (mat_sky[row * n + col] == 0)
				return (true);
			if ((mat_sky[row * n + col]) > taller)
			{
				taller = mat_sky[row * n + col];
				count++;
			}
			row++;
		}
		if ((mat_given[n * 0 + col]) != count)
			return (false);
		col++;
	}
	return (true);
}

int	solve_check_visibility_col_up(int mat_given[16], int mat_sky[16],
	int n, int col)
{
	int	row;
	int	count;
	int	taller;

	while (col < n)
	{
		row = n - 1;
		taller = 0;
		count = 0;
		while (row >= 0)
		{
			if (mat_sky[row * n + col] == 0)
				return (true);
			if ((mat_sky[row * n + col]) > taller)
			{
				taller = mat_sky[row * n + col];
				count++;
			}
			row--;
		}
		if ((mat_given[n * 1 + col]) != count)
			return (false);
		col++;
	}
	return (true);
}

int	solve_check_visibility_row_left(int mat_given[16], int mat_sky[16],
	int n, int row)
{
	int	col;
	int	count;
	int	taller;

	while (row < n)
	{
		col = 0;
		taller = 0;
		count = 0;
		while (col < n)
		{
			if (mat_sky[row * n + col] == 0)
				return (true);
			if ((mat_sky[row * n + col]) > taller)
			{
				taller = mat_sky[row * n + col];
				count++;
			}
			col++;
		}
		if ((mat_given[n * 2 + row]) != count)
			return (false);
		row++;
	}
	return (true);
}

int	solve_check_visibility_row_right(int mat_given[16], int mat_sky[16],
	int n, int row)
{
	int	col;
	int	count;
	int	taller;

	while (row < n)
	{
		col = n - 1;
		taller = 0;
		count = 0;
		while (col >= 0)
		{
			if (mat_sky[row * n + col] == 0)
				return (true);
			if ((mat_sky[row * n + col]) > taller)
			{
				taller = mat_sky[row * n + col];
				count++;
			}
			col--;
		}
		if ((mat_given[n * 3 + row]) != count)
			return (false);
		row++;
	}
	return (true);
}

int	solve_check_visibility(int mat_given[16], int mat_sky[16], int n)
{
	if (solve_check_visibility_row_left(mat_given, mat_sky, n, 0))
		if (solve_check_visibility_row_right(mat_given, mat_sky, n, 0))
			if (solve_check_visibility_col_up(mat_given, mat_sky, n, 0))
				if (solve_check_visibility_col_down(mat_given, mat_sky, n, 0))
					return (true);
	return (false);
}
