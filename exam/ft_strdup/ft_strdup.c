#include <stdlib.h>
char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	while (src[len])
		len++;
	if(!(str = (char*)malloc(sizeof(*str) * (len + 1))))
        return NULL;
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
