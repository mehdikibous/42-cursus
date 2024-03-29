/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:33:43 by mkibous           #+#    #+#             */
/*   Updated: 2023/11/04 16:11:07 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*new_src;
	char	*new_dest;

	new_src = (char *)src;
	new_dest = (char *)dest;
	if (n == 0)
		return (dest);
	if (dest == NULL && src == NULL)
		return (NULL);
	if (new_dest > new_src)
	{
		while (n > 0)
		{
			n--;
			new_dest[n] = new_src[n];
		}
	}
	i = 0;
	while (i < n)
	{
		new_dest[i] = new_src[i];
		i++;
	}
	return (dest);
}
