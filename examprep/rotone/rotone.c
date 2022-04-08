#include <unistd.h>
void	rot13(char *str)
{
	int	i;
	i = 0;
	while( str[i] != '\0')
	{
		if( (str[i] >= 'A' && str[i] <= 'Y') || (str[i] >= 'a' && str[i] <= 'y') )
			str[i] += 1;
		else if( (str[i] == 'Z') || (str[i] == 'z') )
			str[i] -= 25;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		rot13(av[1]);
	write(1, "\n", 1);
}
