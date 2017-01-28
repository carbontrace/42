/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 20:00:49 by exam              #+#    #+#             */
/*   Updated: 2017/01/20 20:36:21 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}

int		ft_mirr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i]>='A' && str[i] <= 'M')
			ft_putchar('M' - str[i] + 'N');
		else if (str[i] >= 'N' && str[i] <= 'Z')
			ft_putchar('M' - str[i] + 'N');
		else if (str[i] >= 'a' && str[i] <= 'm')
			ft_putchar('m' - str[i] + 'n');
		else if (str[i] >= 'n' && str[i] <= 'z')
			ft_putchar('m' - str[i] + 'n');
		else
			ft_putchar(str[i]);
		i++;
	}
	return (0);
}
int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_mirr(argv[1]);
	ft_putchar('\n');
	return (0);	
}
