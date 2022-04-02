#include <stdio.h>
#include <string.h>
char	*ft_strcpy(char *dest, char *src);

int	main(void)
{

	char src[] = "whatever";
	char dest[] = "whateverrr";

	char src2[] = "whatever";
	char dest2[] = "whateverrrrr";

	printf("%s\n", ft_strcpy(dest, src));
	printf("%s", strcpy(dest2, src2));
}
