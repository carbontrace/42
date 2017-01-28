/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 18:57:13 by exam              #+#    #+#             */
/*   Updated: 2017/01/20 19:18:51 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char c)
{
	int repeat;

	repeat = 1;
	if (c <= '@' || c >= '{' || (c >= '[' && c <= '`' ))
		ft_putchar(c);
	else if (c >= 'A' && c <= 'Z')
		repeat += c - 64;
	else
		repeat += c - 96;
	while (--repeat > 0)
		ft_putchar(c);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 2 || argc <= 1)
		ft_putchar('\n');
	else if (argv[1][0] == 0)
		ft_putchar('\n');
	else
	{
		while (argv[1][i] != '\0')
		{
			repeat_alpha(argv[1][i++]);
		}
		ft_putchar('\n');
	}
}
