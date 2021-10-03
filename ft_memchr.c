/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:14:12 by bnaji             #+#    #+#             */
/*   Updated: 2021/10/03 14:09:14 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	if (c == 0)
		return ((char *)s + ft_strlen((char *)s));
	else
	{
		while (*str && n-- > 0)
		{
			if (c == *str)
				return ((char *)str);
			str++;
		}
		return (0);
	}
}
