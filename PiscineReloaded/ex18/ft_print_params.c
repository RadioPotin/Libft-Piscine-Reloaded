/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 10:43:02 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/06 11:09:31 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	if (!*str)
		return ;
	ft_putchar(*str);
	ft_putstr(str + 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		return (0);
	else
		while (argv[i])
		{
			ft_putstr(argv[i++]);
			ft_putchar('\n');
		}
	return (0);
}
