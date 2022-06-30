#include <unistd.h>

int checker(char *str, char c, int a)
{
	int i;
	
	i = 0;

	while(i < a)
	{
		if (str[i] == c)
			return(1);
		i++;
	}
	return(0);
}

void inter(char *str, char *str1)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str1[j])
		{
			if (str[i] == str1[j])
			{
				if(!checker(str, str[i], i))
				{write(1, &str[i], 1);
					break;}
			}
			j++;
		}
		i++;
	}
}
int	main(int ac, char **av)
{
	if (ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
}
