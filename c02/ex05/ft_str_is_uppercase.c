/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:50:50 by ydunay            #+#    #+#             */
/*   Updated: 2023/07/15 12:50:53 by ydunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_str_is_uppercase("1551881"));
	printf("\n%d", ft_str_is_uppercase("abc1defghi717547jkl"));
	printf("\n%d", ft_str_is_uppercase("jasbdaskbdba"));
	printf("\n%d\n", ft_str_is_uppercase(""));
}
*/