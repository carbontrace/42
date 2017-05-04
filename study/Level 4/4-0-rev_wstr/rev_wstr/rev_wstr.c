/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 21:22:36 by exam              #+#    #+#             */
/*   Updated: 2017/01/20 21:55:18 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void		part_str_rev(int start, int end, char *str)
{
	char c = 0;
	int i = 0;
	if (start == end)
		return ;
	while (start + i <= end - i)
	{
		c = str[start + i];
		str[start + i] = str[end - i];
		str[end - i] = c;
		i++;
	}
}

int			main(int argc, char **argv)
{
	int len = 0;
	int counter = 0;
	char *str;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][len] != '\0')
		len++;
	str = (char*)malloc(sizeof(*str) * len);
	str[len] = '\0';
	while (--len >= 0)
		str[counter++] = argv[1][len];
	len = -1;
	counter = 0;
	while (str[++len] != '\0')
	{
		if (str[len + 1] == ' ' || str[len + 1] == '\0')
		{
			part_str_rev(counter,len,str);
			counter = len + 2;
		}
	}
	ft_putstr(str);
	ft_putchar('\n');
	return (0);
}
