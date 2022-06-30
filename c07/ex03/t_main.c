#include <stdio.h>
#include <stdlib.h>
char *ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 4;
	strs = (char **)malloc(4 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 13 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 8 + 1);
	strs[3] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[0] = "These";
	strs[1] = "were";
	strs[2] = "seperate";
	strs[3] = "strings";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}
