#include <unistd.h>
#include <stdio.h>
int	ft_strlen(char *str);

int	main(void)
{
	char *str;
	str = "teaaaaaaaaaaaaaaaaaaaast";
	int length;
	length = ft_strlen(str);
	printf("%d\n", length);
}
