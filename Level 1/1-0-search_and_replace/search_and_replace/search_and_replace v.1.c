/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 20:50:24 by exam              #+#    #+#             */
/*   Updated: 2017/01/20 21:22:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	char a;
	char b;
	int i;

	if(argc == 4 && (argv[2][1] == '\0' && argv[3][1] == '\0')) 
	{

	a = argv[2][0];
	b = argv[3][0];
	
	i = 0;
	while(argv[1][i])
	{
		if(argv[1][i] == a)
			argv[1][i] = b;
		ft_putchar(argv[1][i]);
		i++;
	}
	}
	ft_putchar('\n');
	return (0);
}
