/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josemigu <josemigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:57:31 by josemigu          #+#    #+#             */
/*   Updated: 2025/01/26 19:45:17 by josemigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		solve(int *pmat_given, int *pmat_sky, int index, int n);
void	ft_putstr(char *str);
void	print_array(int *array, int nlin, int ncol);
void	fill_given_data(int *pmat_given, int *pmat_sky);
int		create_mat_given(int pmat_given[], char *param);
int		check_input(char *str);

int	main(int argc, char	*argv[])
{
	int			*mat_given;
	int			*mat_sky;
	char		*param;

	param = argv[1];
	if (argc != 2 || !check_input(param))
	{
		ft_putstr("Error\n");
		return (0);
	}
	mat_given = (int *) malloc(16 * sizeof (int));
	mat_sky = (int *) malloc(16 * sizeof (int));
	create_mat_given(mat_given, param);
	if (solve(mat_given, mat_sky, 0, 16))
		print_array(mat_sky, 4, 4);
	else
		ft_putstr("Error\n");
	free(mat_given);
	free(mat_sky);
}
