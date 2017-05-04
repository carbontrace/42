/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 21:15:53 by exam              #+#    #+#             */
/*   Updated: 2017/01/20 21:15:56 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}




char ft_rot13(char c)
{
	if ((c >= 'A') && (c<='Z'))
	{
		c = c - 65;
		c = ((c+13) % 26);
		c = c + 65;
		return (c);
	}
	if ((c >= 'a') && (c <= 'z'))
	{
		c = c - 97;
		c = ((c+13) % 26);
		c = c + 97;
		return (c);
	}
	return (c);
}

int main (int argc, char **argv)
{
	int i;
	int k;
	char str[1000000];
	i = 1;
	k = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	if (argc > 1)
	{
		while (argv[i])
		{
			k=0;
			while (argv[i][k])
			{
				str[k]=ft_rot13(argv[i][k]);
				ft_putchar(str[k]);
				k++;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
