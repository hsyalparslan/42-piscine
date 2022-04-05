#include <stdio.h>
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	unsigned int n;
	n = 8;
	char st1 [] = "Hello";
	char st2 [] = "HelloWorld";
	char st3 [] = "\t";
	int test = ft_strncmp(st1, st2, n);
	int test2 = ft_strncmp(st1, st3, n);
	int test3 = strncmp(st1, st2, n);
	int test4 = strncmp(st1, st3, n);
	printf("%i\n%i\n%i\n%i\n", test, test2, test3, test4);
}
