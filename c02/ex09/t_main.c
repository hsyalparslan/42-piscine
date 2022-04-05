#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str[]  = "   zZ    salut,    comment tu vas ? 42mots quarante-‘deux; cinquARGWKRO+ET+UN";

	ft_strcapitalize(str);
	printf("%s", str);
}
