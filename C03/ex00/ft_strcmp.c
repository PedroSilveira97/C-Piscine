/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 21:21:11 by ptavares          #+#    #+#             */
/*   Updated: 2025/04/07 14:52:41 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*int	main(void)
{
	char	s1[] = "simbora";
	char	s2[] = "sim";
	int	result;

	result = ft_strcmp(s1, s2);
	printf("Os chars sao:\n%s\n%s\n%d\n", s1, s2, result);
}
*/

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
