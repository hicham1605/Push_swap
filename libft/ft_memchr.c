/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:24:32 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/10/26 09:12:49 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*tmp_str;
	size_t				i;

	i = 0;
	tmp_str = (const unsigned char *) str;
	while (i < n)
	{
		if (tmp_str[i] == (unsigned char)c)
		{
			return ((void *)(tmp_str + i));
		}
		i++;
	}
	return (NULL);
}
