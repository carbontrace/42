/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 18:24:18 by exam              #+#    #+#             */
/*   Updated: 2017/01/20 19:02:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(void)
{
	int a;
	
	a = '9';
	
	while (a >= '0')
	{
		ft_putchar(a);
		a--;
	}
	ft_putchar('\n');
	return (0);
}
