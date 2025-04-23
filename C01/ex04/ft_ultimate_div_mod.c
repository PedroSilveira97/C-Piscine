/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptavares <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 22:05:22 by ptavares          #+#    #+#             */
/*   Updated: 2025/01/19 22:05:32 by ptavares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = (*a) / (*b);
		mod = (*a) % (*b);
		*a = div;
		*b = mod;
	}
}

/*int	main(void)
{
	int i = 10;
	int j = 3;
	int *a = &i;
	int *b = &j;

	ft_ultimate_div_mod(a, b);
	
	printf("\nValue of i is : %d",*a);
	printf("\nValue of j is : %d",*b);
}*/	
