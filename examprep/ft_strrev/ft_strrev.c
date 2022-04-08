#include <stdio.h>
char	*ft_strrev(char *str)
{
	int i;
	i =0;
	while(str[i])
		i++;


	int j;
	j = 0;
	char tmp;
	i--;
	while(i > j)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		j++;
		i--;
	}
	return (str);
}
int main()
{
	char string []	= "Whatver";
	printf("%s", ft_strrev(string));
}
