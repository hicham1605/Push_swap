/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:56:02 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/10/25 15:34:47 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*allocate;
	size_t			total;

	if (size != 0 && nmemb > ((size_t) - 1) / size)
		return (NULL);
	total = nmemb * size;
	allocate = malloc (total);
	if (!allocate)
		return (NULL);
	ft_bzero(allocate, total);
	return ((void *)allocate);
}
