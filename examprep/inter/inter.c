#include <unistd.h>

int	main(int ac, char **av)
{
		int i;
		i = 0;
		int j;
		j = 0;
		char temp [] = "";

		int check;

		check = 0;

		int k;
		k = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			while (temp[k] != '\0')
			{
				if (temp[k] == av[1][i])
					break;
				k++;
			}
			if (temp[k+1] == '\0')
			{	temp[j] = av[1][i];
				j++;
			}
			k = 0;
			i++;
		}
		i = 0;
		while (av[2][i] != '\0')
		{
		    while (temp[k] != '\0')
            {if (temp[k] == av[2][i])
                    break;
                k++;}

            if (temp[k+1] == '\0')
            {   temp[j] = av[2][i];
                j++;
			}
            k = 0;
			i++;
		}
	}
	int l;
	l = 0;
	while (temp[l])
	{
		write(1, &temp[l], 1);
		l++;
	}
	write(1, "\n", 1);
}
