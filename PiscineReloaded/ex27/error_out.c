/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_out.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 08:53:29 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/07 10:18:40 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hdr.h"

void	error_out(int err)
{
	if (err == 0)
		ft_putstr("Too many arguments.\n");
	if (err == 1)
		ft_putstr("File name missing.\n");
}
