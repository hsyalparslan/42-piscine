#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char *str;

	str = "AAAA";
	int test;

	test = ft_str_is_uppercase(str);
	printf("%i", test);
}
