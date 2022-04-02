#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char str[]  = "aaa";
	int test;

	ft_strupcase(str);
	printf("%s", str);
}
