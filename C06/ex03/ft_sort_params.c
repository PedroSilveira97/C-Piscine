/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:07:55 by ptavares          #+#    #+#             */
/*   Updated: 2025/02/07 08:12:53 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	sort(int argc, char **argv)
{
	int		i;
	char	*aux;
	int		dif;
	int		sorted;

	sorted = 0;
	while (!sorted)
	{
		sorted = 1;
		i = 0;
		while (i < argc - 1)
		{
			dif = ft_strcmp(argv[i], argv[i + 1]);
			if (dif > 0)
			{
				aux = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = aux;
				sorted = 0;
			}
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	len;

	sort(argc, argv);
	i = 0;
	while (i < argc - 1)
	{
		len = 0;
		while (argv[i + 1][len])
			len++;
		write(1, argv[i + 1], len);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}