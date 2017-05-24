/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 11:08:29 by cterrill          #+#    #+#             */
/*   Updated: 2017/05/22 08:38:51 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	register int result = 0;
	register unsigned int digit;
	int sign;

	/*
	 * Skip any leading whitespaces
	 */

	while (*str == '\t' || *str == '\n' || *str == '\v' ||
				*str == '\f' || *str == ' ' || *str == '\r')
		str++;

	/*
	 * Check for a sign
	 */

	sign = (*str == '-' ? 1 : 0);
	str = (*str == '-' || *str == '+') ? str + 1 : str;

	while (*str)
	{
		digit = *str - '0';
		if (digit > 9)
		{
			break;
		}
		result = (result * 10) + digit;
		str++;
	}

	if (sign)
		return -result;
	return result;
}
