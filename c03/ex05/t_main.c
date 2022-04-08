#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{

	char src[] = "test";
	char dest[] = "test";
	char src2[] = "test";
    char dest2 [] = "test";
	unsigned int test = ft_strlcat(dest, src, 9);
//	strlcat(dest2, src2, 27);
	printf("%s, %d", dest, test);
//	printf("\n%s", dest2);
}
