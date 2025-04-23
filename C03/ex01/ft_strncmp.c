/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 22:16:19 by ptavares          #+#    #+#             */
/*   Updated: 2025/01/23 22:16:23 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while ((*s1 && *s2) && (*s1 == *s2) && i < n - 1)
	{
		i++;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*int	main(void)
{
	char	s1[] = "aaaaaaa";
	char	s2[] = "aaaaaab";
	int	n = 3;
	int result;
	result = ft_strncmp(s1, s2, n);
	printf("%s\n%s\n%d", s1, s2, result);
}*/
