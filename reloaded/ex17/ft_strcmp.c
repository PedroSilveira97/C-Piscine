/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:12:47 by ptavares          #+#    #+#             */
/*   Updated: 2025/04/08 14:11:21 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int	main(int argc, char **argv)
{
	int	result;

	result = ft_strcmp(argv[1], argv[2]);
	if (argc != 3)
	{
		printf("There are more strings than the function allow.");
	}
	else
		printf("The difference between the values of %s and %s is: %c %d", argv[1], argv[2], '\n', result);
	return (0);
}
