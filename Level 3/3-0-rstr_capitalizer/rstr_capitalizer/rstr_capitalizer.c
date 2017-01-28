/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 20:48:57 by exam              #+#    #+#             */
/*   Updated: 2017/01/20 21:18:02 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int         is_space(char c)
{
    if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
        return (1);
    return (0);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void		rstr_capitalizer(char *str)
{
	if (str[1] == '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		return ;
	}
	if (is_space(str[1]))
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
	}
	else if (str[0] >= 'A' && str[0] <= 'Z')
		str[0] = str[0] + 32;
	rstr_capitalizer(str + 1);
}

int			main(int argc, char **argv)
{
	int counter = 0;
	if (argc == 1)
		ft_putchar('\n');
	while (++counter < argc)
	{
		rstr_capitalizer(argv[counter]);
		ft_putstr(argv[counter]);
		ft_putchar('\n');
	}
}
