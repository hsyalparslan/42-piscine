#include <stdio.h>
#include <stdlib.h>
int 	*ft_range(int min, int max)
{
	int n;
	int *result;
	n = max >= min ? max - min : min - max;
	if (!(result = (int *) malloc (sizeof(int) * n)))
		return (NULL);
	while (max != min)
	{
		*result++ = max > min ? min++ : min--;
	}
	*result = min;
	return (result - n);
}
int main()
{
	int *array;
	int i;
	i = 0;
	array = ft_range(-3, 5);
	while (i < 9)
	{printf("%d", array[i]);
	i++;}
}
