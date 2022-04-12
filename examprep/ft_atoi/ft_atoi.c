#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int abs;

	abs = 1;
	i = 0;
	int result;
	result = 0;
	while(str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if(str[i] == '-')
	{
		abs *= -1;
		i++;
	}
	if(str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return ( result * abs );
}
int main()
{
	printf("%i", ft_atoi("   -429498"));}
