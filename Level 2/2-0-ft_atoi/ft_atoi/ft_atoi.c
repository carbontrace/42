/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 19:31:39 by exam              #+#    #+#             */
/*   Updated: 2017/01/20 20:41:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int			is_number(char c)
{
	if (c >= '0' && c <= '9')
		return(1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int value = 0;
	int lastnum = 0;
	int counter = 0;
	int firstcheck = 0;
	int mult = 1;

	if (str[0] == 0)
		return (0);
	if (str[0] == '-' || str[0] == '+')
	{
		if (str[0] == '-')
			firstcheck += 1;
		counter++;
		firstcheck += 1;
	}
	while (is_space(str[counter]) && !firstcheck)
		counter++;
	if (!is_number(str[counter]))
		return (0);
	lastnum = counter;
	while (is_number(str[lastnum]))
		lastnum++;
	while(--lastnum >= counter)
	{
		if (firstcheck == 2)
			value -= (str[lastnum] - '0') * mult;
		else
			value += (str[lastnum] - '0') * mult;
		mult *= 10;
	}
	return (value);
}
