/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sort2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:10:38 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/12/22 15:04:22 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_len_stack(t_stack **a)
{
	t_stack	*tmp;
	int		len;

	tmp = *a;
	len = 0;
	while (tmp)
	{
		len++;
		tmp = tmp->next;
	}
	return (len);
}

void	ft_sort_array(int *array, int len)
{
	int (i), (j), (tmp);
	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	*fall_array(t_stack **a)
{
	t_stack	*tmp;
	int		*array;
	int		i;
	int		len;

	len = ft_len_stack(a);
	array = malloc(sizeof(int) * (len));
	if (!array)
		return (NULL);
	tmp = *a;
	i = 0;
	while (tmp)
	{
		array[i] = tmp->content;
		i++;
		tmp = tmp->next;
	}
	ft_sort_array(array, len);
	return (array);
}
