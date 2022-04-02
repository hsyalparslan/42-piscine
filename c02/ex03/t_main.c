#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char *str;

	str = "";
	int test;

	test = ft_str_is_numeric(str);
	printf("%i", test);
}
