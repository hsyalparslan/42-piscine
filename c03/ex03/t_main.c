#include <stdio.h>
#include <string.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char st1 [300] = "Hello";
	char st2 [300] = "HelloWorld";
	char st1t [300] = "Hello";
	char st2t [300] = "HelloWorld";
	char *test;
	//test[30] = ft_strcat(st1, st2);
	//char *test2;
	//test2 [15] = ft_strcat(st1, st3);
	//char *test3;
	//test3 = strcat(st1, st2);
	//char *test4;
	//test4 = strcat(st1, st3);
	printf("%s\n", ft_strncat(st1, st2, 5));
	printf("%s\n", strncat(st1t, st2t, 5));
}
