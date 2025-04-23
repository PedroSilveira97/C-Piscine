/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:41:50 by ptavares          #+#    #+#             */
/*   Updated: 2025/01/29 13:41:58 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	k = 0;
	i = 0;
	j = 0;
	while (src[k] != '\0')
		k++;
	while (dest[i] != '\0')
		i++;
	if (size < i)
		return (i);
	else
	{
		while (j + i < size)
		{
			dest[j + i] = src[j];
			j++;
		}
		dest [j + i] = '\0';
		return (i + k);
	}
}

/*int		main(void)
{
	unsigned int	size = 20;
	char	dest[] = "Capivara";
	char	src[] = "Cafe";
	
	printf("%s\n%d", dest, ft_strlcat(dest, src, size));
	return (0);
}*/
