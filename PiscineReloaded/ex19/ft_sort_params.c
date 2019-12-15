/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:16:59 by dapinto           #+#    #+#             */
/*   Updated: 2018/11/07 12:21:52 by dapinto          ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (s1[i] == '\0' || s2[i] == '\0')
		return (0);
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	print_all(char **argv, int argc)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
}

void	ft_sort_params(char **argv, int argc)
{
	int		i;
	char	*swp;

	i = 1;
	while (argv[i + 1])
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			swp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = swp;
			i = 1;
		}
		else
			i++;
	}
	print_all(argv, argc);
	return ;
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	if (argc > 1)
		ft_sort_params(argv, argc);
	return (0);
}
