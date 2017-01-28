/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myaff_z.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovikov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 14:23:08 by anovikov          #+#    #+#             */
/*   Updated: 2017/01/26 15:50:00 by anovikov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int c;
	int i;
	int k;

	k = 0;
	c = 1;
	i = 0;
	while (c < argc)
	{
		while (argv[c][i])
		{
			if(argv[c][i] == 'z')
			{
				write (1, &argv[c][i], 1);
				write (1, "\n", 1);
				k = 1;
				return (0);
			}
			i++;
		}
		i = 0;
		c++;
	}
	if (k == 0)
		write(1, "z", 1);
	write (1, "\n", 1);
	return (0);
}
