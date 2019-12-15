/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:59:32 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/06 14:16:58 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		size;
	int		*table;
	int		i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	if (!(table = malloc(sizeof(int) * size)))
		return (NULL);
	while (min < max)
	{
		table[i] = min++;
		i++;
	}
	return (table);
}
