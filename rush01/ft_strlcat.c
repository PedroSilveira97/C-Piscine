#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
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
		return (j+i);
	}
}

int		main(void)
{
	char	dest[] = "1337 42";
	char	src[] = "Born to code";
	int	size = 20;
	printf("%s\n%d", dest, ft_strlcat(dest, src, size));
	return (0);
}