#include <stdio.h>

int *ft_range(int min, int max);

int main(void)
{
	int i;
	int *arr;
	int min;
	int max;

	i = 0;
	min = -5;
	max = 9;
	arr = ft_range(min, max);
	while (i < max -min)
	{
		printf("%d ", arr[i]);
		i++;
	}
}
