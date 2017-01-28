/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 19:54:01 by exam              #+#    #+#             */
/*   Updated: 2017/01/20 20:33:04 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write( 1, &c, 1);
}

void 	alpha(char **str)
{
	int i;
	int j;
	int low;
	int up;
	j = 1;
	i = 0;
	while(str[j][i] != '\0')
	{
		if(str[j][i] >= 'a' && str[j][i] <= 'z')
		{
			low = str[j][i] - 96;
			while(low > 0)
			{
				ft_putchar(str[j][i]);
				low--;
			}
			i++;
		}
		else if(str[j][i] >= 'A' && str[j][i] <= 'Z')
		{
			up = str[j][i] - 64;
			while(up > 0)
			{
				ft_putchar(str[j][i]);
				up--;
			}
			i++;
		}
		else
		{	
			ft_putchar(str[j][i]);
			i++;
		}
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		alpha(argv);
	ft_putchar('\n');
	return(0);
}
