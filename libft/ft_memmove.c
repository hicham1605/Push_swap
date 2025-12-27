/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:11:53 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/10/23 15:20:19 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dest;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (n == 0 || dest == src)
		return (dest);
	if (ptr_dest > ptr_src)
	{
		while (n > 0)
		{
			*(ptr_dest + n - 1) = *(ptr_src + n - 1);
			n--;
		}
		return (dest);
	}
	ft_memcpy(dest, src, n);
	return (dest);
}
