#include <unistd.h>
int	main(int ac, char **av)
{
	int i;
	i = 0;
	if (ac == 2)
	{
		while(av[1][i] != ' ' && av[1][i] != '\t' && av[1][i] != '\0')
		{
			i++;
		}
		int j;
		
		j = 0;
		while(j < i)
		{
			write(1, &av[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
