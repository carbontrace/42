/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 18:31:52 by exam              #+#    #+#             */
/*   Updated: 2017/01/20 18:54:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putz(void)
{
	ft_putchar('z');
	ft_putchar('\n');
}

int main (int argc, char **argv)
{
	int i;
	int k;
	
	i = 0;
	k = 0;
	if (argc == 1)
	{
		ft_putz();
		return (0);
	}
	else if (argc > 1)
		while (argv[i])
		{
			while (argv[i][k])
			{	
				if (argv[i][k] == 'z')
					{
						ft_putz();
						return (0);
					}
				else 
				{k++;}
			}
			i++;
		}
	ft_putz();
	return (0);
}
