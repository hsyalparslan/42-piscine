#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char str[]  = "AAA";
	int test;

	ft_strlowcase(str);
	printf("%s", str);
}
