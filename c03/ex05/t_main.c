#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{

	char src[] = "Cop";
	char dest[] = "destinationjjjjjjj";
	char src2[] = "Copy ";
    char *dest2 = "destination";
	ft_strlcat(dest, src, 5);
//	int j = strlcat(dest2, src2, 100);
	printf("%s", dest);
//	printf("\n%s %d", dest2, j);
}
