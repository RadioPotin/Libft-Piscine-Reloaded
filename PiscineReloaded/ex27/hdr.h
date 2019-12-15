/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hdr.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 08:44:41 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/07 12:21:27 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HDR_H
# define HDR_H
# define BUFFSIZE 4096
# include <unistd.h>
# include <fcntl.h>

int		main(int argc, char **argv);
int		ft_display_file(char *filename);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	error_out(int err);

#endif
