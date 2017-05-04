/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 19:44:35 by exam              #+#    #+#             */
/*   Updated: 2017/01/20 19:44:37 by exam             ###   ########.fr       */
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

int ft_snr(char *str, char a ,char b)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
			str[i] = b;
		i++;
	}
	ft_putstr(str);
	return (0);
}
int		main(int argc, char **argv)
{
	if (argc != 4 || argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		ft_putchar('\n');
		return (0);
	}
	char a;
	char b;
	a = argv[2][0];
	b = argv[3][0];
	ft_snr(argv[1], a, b);
	ft_putchar('\n');
	return (0);	
}
