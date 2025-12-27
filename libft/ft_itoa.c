/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:50:43 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/10/26 09:11:35 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(long nb)
{
	int	count;

	if (nb == 0)
		return (1);
	count = 0;
	if (nb < 0)
	{
		nb *= -1;
		count++;
	}
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*str;

	int (len_nb), (i), (is_negative);
	nbr = n;
	len_nb = len(nbr);
	str = malloc ((len_nb + 1) * sizeof(char));
	if (!str)
		return (NULL);
	is_negative = 0;
	if (nbr < 0)
	{
		is_negative = 1;
		nbr *= -1;
		str[0] = '-';
	}
	i = len_nb - 1;
	while (i >= is_negative)
	{
		str[i] = (nbr % 10) + 48;
		nbr /= 10;
		i--;
	}
	str[len_nb] = '\0';
	return (str);
}
