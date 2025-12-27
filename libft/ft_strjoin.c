/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:36:12 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/10/26 09:13:41 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	int (i), (j), (len_s1), (len_s2);
	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	res = malloc ((len_s1 + len_s2 + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len_s1)
	{
		res [i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len_s2)
	{
		res[j + i] = s2[j];
		j++;
	}
	res[i + j] = '\0';
	return (res);
}
