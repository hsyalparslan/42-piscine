#include <stdio.h>
#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{

	char src[] = "Copy this.";
	char dest[] = "destination string.";
	char src2[] = "Copy this.";
    char dest2[] = "destination string.";
	unsigned int n;
	n = 2;
	printf("%s", ft_strncpy(dest, src, 12));
	printf("\n%s", strncpy(dest2, src2, 12));
}
