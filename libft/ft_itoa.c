/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 13:37:41 by cterrill          #+#    #+#             */
/*   Updated: 2017/03/22 13:37:41 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_itoa(int n)
{
	char	*digits;
	char	*result;
	int		nlen;
	int		i;

	digits = ft_strdup("0123456789");
	nlen = ft_nlen(n);
	if ((long)n == INT_MIN || n == 0)
		return (n ? ft_strdup("-2147483648") : ft_strdup("0"));
	result = n < 0 ? ft_strnew(nlen + 1) : ft_strnew(nlen);
	if (!result)
		return (NULL);
	result[nlen] = n < 0 ? '-' : 0;
	n = n < 0 ? -n : n;
	i = result[0] == '-' ? 1 : 0;
	while (n)
	{
		result[i] = digits[n % 10];
		n /= 10;
		i++;
	}
	result = ft_strrev(result);
	return (result);
}
