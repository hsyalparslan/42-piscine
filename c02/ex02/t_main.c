#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char *str;

	str = "A1FwergwwrgwokrfaRG";
	int test;

	test = ft_str_is_alpha(str);
	printf("%i", test);
}
