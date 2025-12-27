/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:02:31 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/10/26 09:13:32 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*allocate;
	int		i;
	int		len;

	len = ft_strlen(s);
	allocate = malloc ((len + 1) * sizeof(char));
	if (!allocate)
		return (NULL);
	i = 0;
	while (s[i])
	{
		allocate[i] = s[i];
		i++;
	}
	allocate[i] = '\0';
	return (allocate);
}
