/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 09:38:07 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/07 12:20:16 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hdr.h"

void	clearbuff(char *buffer)
{
	int i;

	i = 0;
	if (buffer[BUFFSIZE])
		buffer[BUFFSIZE + 1] = '\0';
}

int		ft_display_file(char *filename)
{
	char	buffer[BUFFSIZE];
	int		file;

	file = open(filename, O_RDONLY);
	while (read(file, buffer, BUFFSIZE) > 0)
	{
		ft_putstr(buffer);
		clearbuff(buffer);
	}
	close(file);
	return (0);
}
