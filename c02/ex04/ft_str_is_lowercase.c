int    ft_str_is_lowercase(char *str)
{
    int    i;

    i = 0;
    if (str[i] == '\0')
    {
        return (1);
    }
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            i++;
        else
            return (0);
    }
    return (1);
}
/*#include <stdio.h>
int    main(void)
{
    printf("%d", ft_str_is_lowercase("1551881"));
    printf("\n%d", ft_str_is_lowercase("abc1defghi717547jkl"));
    printf("\n%d", ft_str_is_lowercase("jasbdaskbdba"));
    printf("\n%d\n", ft_str_is_lowercase(""));
}
*/