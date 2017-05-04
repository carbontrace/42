/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterrill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 09:28:52 by cterrill          #+#    #+#             */
/*   Updated: 2017/04/22 22:32:08 by cterrill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*link;

	if (!(link = malloc(sizeof(t_list))))
		return (NULL);
	content_size = (content == NULL) ? 0 : content_size;
	link->content_size = content_size;
	if (!(link->content = malloc(content_size)))
				return (NULL);
	(link->content = (void*)content) ?
		ft_memcpy(link->content, (void*)content, content_size) : NULL;
	link->next = NULL;
	return (link);
}
