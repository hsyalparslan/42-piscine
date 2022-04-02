#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char *str;

	str = "wergwwrgwokrfaA";
	int test;

	test = ft_str_is_lowercase(str);
	printf("%i", test);
}
