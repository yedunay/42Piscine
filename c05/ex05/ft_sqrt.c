/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:39:35 by ydunay            #+#    #+#             */
/*   Updated: 2023/07/25 10:39:37 by ydunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		i;

	i = 1;
	while (i * i <= nb && i < 46340)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
