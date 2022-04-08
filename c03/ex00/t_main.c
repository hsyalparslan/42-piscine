#include <stdio.h>
#include <string.h>
int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char st1 [] = "ab";
	char st2 [] = "abc";
	char st3 [] = "abc";
	int test = ft_strcmp(st1, st2);
	int test2 = ft_strcmp(st1, st3);
	int test3 = strcmp(st1, st2);
	int test4 = strcmp(st1, st3);
	printf("%i\n%i\n%i\n%i\n", test, test2, test3, test4);
}
