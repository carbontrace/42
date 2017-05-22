/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 13:37:41 by cterrill          #+#    #+#             */
/*   Updated: 2017/03/22 13:37:41 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int value)
{
    long        		n = value < 0 ? -(long)value : (long)value;
    static char			buf[32] = "0";
    int							i = 30;
		int							base = 10;

    while (n > 0)
    {
        buf[i--] = "0123456789"[n % base];
        n /= base;
    }
    if (value < 0 && base == 10)
        buf[i--] = '-';
    return (value != 0 ? buf + i + 1 : buf);
}
