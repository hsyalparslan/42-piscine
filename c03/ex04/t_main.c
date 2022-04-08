#include <string.h>
#include <stdio.h>
char	*ft_strstr(char *str, char *to_find);

int	main(void)
{

	char needle [] = "nedle";
	char haystack [] = "HaysntackhaystacknedleHaystack";
 char needle2 [] = "nedle";
    char haystack2 [] = "HanystackhaystacknedleHaystack";
	printf("%s\n", ft_strstr(haystack, needle)); 
	printf("%s", strstr(haystack2, needle2));

	char *hat;
	
	hat = &needle[0];
	printf("\n%s", --hat);
}
