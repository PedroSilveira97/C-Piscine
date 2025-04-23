/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <ptavares@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:49:56 by ptavares          #+#    #+#             */
/*   Updated: 2025/01/28 19:53:15 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		length;
	if (! *src)
		return (0);
	length = 0;
	while (src[length] != '\0')
	{
		dest[length] = src[length];
		length = length + 1;
	}
	dest[length] = '\0';
	return (dest);
}

/*int		main(void)
{
	char	dest[] = "";
	char	src[] = "Capivara";

	ft_strcpy(dest, src);
	printf("The vector is: %s\n", dest);
}*/
