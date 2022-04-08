#include <stdio.h>

int	ft_atoi(char *str);

int main(void)
{
	int atoi;
	char str [] = "    ++++---4191932";
	atoi = ft_atoi(str);

	printf("%i", atoi);
}
