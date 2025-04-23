#include <stdio.h>
#include <string.h>

int		main(void)
{
	char	dest[13] = "Capivara";
	char	src[] = "Cafe";
	int	size = 13;
	printf("%s\n%d", dest, strlcat(dest, src, size));
}	