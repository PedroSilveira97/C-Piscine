/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:10:44 by ptavares          #+#    #+#             */
/*   Updated: 2025/01/24 13:10:46 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char	*dest, char	*src)
{
	int	count;
	int	len;

	len = 0;
	while (dest[len])
	{
		len++;
	}
	count = 0;
	while (src[count])
	{
		dest[len + count] = src[count];
		count++;
	}
	dest[len + count] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[] = "Cafe";
	char	src[] = "Capivara";
    ft_strcat(dest, src);
    printf("%s\n", dest);
    return (0);
}*/
