/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 11:08:29 by cterrill          #+#    #+#             */
/*   Updated: 2017/05/08 21:32:04 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	unsigned long long 	res;
	int 				neg;
	int 				i;
	
	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == ' ' || str[i] == '\r')
		str++;
	res = 0;
	neg = (str[i] == '-' ? -1 : 1);
	str = (str[i] == '-' || str[i] == '+') ? str + 1 : str;
	while (str[i] == '0')
		str++;
	while (str[i] != '\0' && ft_isdigit(str[i]) != TRUE)
		res = res * 10 + str[i++] - '0';
	return (res * neg);
}
