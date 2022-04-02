#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char *str;
	int test;
	str = "\t";
	printf("%s", str);
	test = ft_str_is_printable(str);
	printf("%i", test);
}
