/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:07:40 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/07 11:43:12 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*ret;

	len = ft_strlen(src);
	i = 0;
	if (!(ret = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i <= len)
	{
		ret[i] = src[i];
		i++;
	}
	ret[len + 1] = '\0';
	return (ret);
}
