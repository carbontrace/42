/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 20:00:49 by exam              #+#    #+#             */
/*   Updated: 2017/01/20 21:16:33 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

int		ft_printhex(int dec)
{
		if (dec == 15)
			ft_putchar('f');
		else if (dec == 14)
			ft_putchar('e');
		else if (dec == 13)
			ft_putchar('d');
		else if (dec == 12)
			ft_putchar('c');
		else if (dec == 11)
			ft_putchar('b');
		else if (dec == 10)
			ft_putchar('a');
		else if (dec >= 16)
		{	
			ft_printhex(dec / 16);
			ft_printhex(dec % 16);
		}
		else
			ft_putchar(dec + '0');
		return (0);
}
int		ft_int(char *str)
{
	int i;
	int stack;

	i = 0;
	stack = 0;
	while (str[i] != '\0')
	{
		stack = (stack * 10) + (str[i] - '0');
		i++;
	}
	return (stack);
}
int		main(int argc, char **argv)
{
	int dec;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	dec = ft_int(argv[1]);
	ft_printhex(dec);
	ft_putchar('\n');
	return (0);	
}
