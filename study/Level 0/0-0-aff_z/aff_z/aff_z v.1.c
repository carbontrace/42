/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 18:24:48 by exam              #+#    #+#             */
/*   Updated: 2017/01/20 19:00:33 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int j;
	int k;

	k = 0;
	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			if(argv[i][j] == 'z')
			{
				write (1, &argv[i][j], 1);
				write (1, "\n", 1);
				k = 1;
				return (0);
			}
			j++;
		}
		j = 0;
		i++;
	}
	if (k == 0)
		write (1, "z", 1);
	write (1, "\n", 1);
	return (0);
}

