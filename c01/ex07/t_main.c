#include <unistd.h>
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int size;
	int tab[] = {19, 10, 5, 8, 7, 9, 8, 8};
	size = 7;
	ft_rev_int_tab(tab, size);
	printf("%d\n", tab[0]);
	printf("%d\n", tab[1]);
	printf("%d\n", tab[2]);
	printf("%d\n", tab[3]);
	printf("%d\n", tab[4]);
    printf("%d\n", tab[5]);
    printf("%d\n", tab[6]);
	printf("%d\n", tab[7]);
}
