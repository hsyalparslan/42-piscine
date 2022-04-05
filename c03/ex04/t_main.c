#include <string.h>
#include <stdio.h>
char	*ft_strstr(char *str, char *to_find);

int	main(void)
{

	char needle [] = "";
	char haystack [] = "78";
 char needle2 [] = "";
    char haystack2 [] = "78";
	printf("%s\n", ft_strstr(haystack, needle)); 
	printf("%s", strstr(haystack2, needle2));

	char *hat;
	
	hat = &needle[0];
	printf("\n%s", --hat);
}
