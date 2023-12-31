/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:24:24 by ydunay            #+#    #+#             */
/*   Updated: 2023/07/31 15:24:26 by ydunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	cnt;
	int	temp;
	int	*array;

	temp = max;
	cnt = 0;
	if (min >= max)
		return (NULL);
	while (min < temp--)
		cnt++;
	array = (int *)malloc((cnt) * sizeof(int));
	if (!array)
		return (NULL);
	i = 0;
	while (min < max)
		array[i++] = min++;
	return (array);
}
