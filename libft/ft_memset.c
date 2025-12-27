/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:28:13 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/10/26 09:13:10 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*tmp_s;

	tmp_s = (unsigned char *) s;
	if (tmp_s == NULL)
		return (NULL);
	while (n > 0)
	{
		*(tmp_s++) = (unsigned char) c;
		n--;
	}
	return (s);
}
