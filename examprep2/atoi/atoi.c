#include <unistd.h>
#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int j;
	int abs;
	int result;
	result = 0;
	abs = 1;
	j = 0;
	i = 0;
	while (str[i])
		i++;
	if (str[j] == '-')
	{
		abs *= -1;
		
	}
	j++;
	while (str[j] >= '0' && str[j] <= '9')
	{
		result *= 10;
		result += str[j] - '0';
		j++;
	}
	return(result * abs);
}

int main()
{
	printf("%d", ft_atoi("-13315"));
}
