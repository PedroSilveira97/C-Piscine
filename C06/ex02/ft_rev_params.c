/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:58:58 by ptavares          #+#    #+#             */
/*   Updated: 2025/02/01 19:59:05 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	len;

	while (argc > 1)
	{
		len = 0;
		while (argv[argc - 1][len])
			len++;
		write(1, argv[argc - 1], len);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
