#include <stdio.h>
#include <string.h>
char	*ft_strcpy(char *dest, char *src);

int	main(void)
{

	char src[] = "whatever";
	char dest[0];// = "whateverrr";

	char src2[] = "whatever";
	char dest2[] = "whateverrrrr";
	printf("before : %s\n", src);
	printf("%s\n", ft_strcpy(dest, src));
	printf("after : %s\n", src);
	//printf("%s", strcpy(dest2, src2));
}
