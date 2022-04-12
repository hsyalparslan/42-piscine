#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int i;
	int arr;
	int min;
	int max;
	int *range;
	i = 0;
	min = -5;
	max = 9;
	arr = 4;
	arr = ft_ultimate_range(&range, min, max);
		printf("%d ", arr);
	while (i < arr)
	{
		printf("%d ", range[i]);
		i++;
	}
}
