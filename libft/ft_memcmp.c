/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:38:54 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/10/20 17:21:32 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*tmp_s1;
	const unsigned char	*tmp_s2;
	size_t				i;

	tmp_s1 = (const unsigned char *) s1;
	tmp_s2 = (const unsigned char *) s2;
	if (!s1 && !s2)
		return (0);
	i = 0;
	while (i < n)
	{
		if ((tmp_s1[i] != tmp_s2[i]))
			return (tmp_s1[i] - tmp_s2[i]);
		i++;
	}
	return (0);
}
