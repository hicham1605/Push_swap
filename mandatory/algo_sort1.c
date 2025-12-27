/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sort1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 10:13:36 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/12/27 10:17:32 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_index(int nb, int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (arr[i] == nb)
			return (i);
		i++;
	}
	return (i);
}

static int	ft_in_index(t_stack *a, int len, int pos)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a->index <= len + pos)
			return (i);
		a = a->next;
		i++;
	}
	return (i);
}

void	initindex(t_stack **a, int *arr, int size)
{
	t_stack	*tmp;
	int		i;

	tmp = *a;
	i = 0;
	while (i < size)
	{
		tmp->index = ft_index(tmp->content, arr, size);
		tmp = tmp->next;
		i++;
	}
}

int	ft_chunk_size(int size)
{
	if (size <= 10)
		return (5);
	else if (size <= 100)
		return (15);
	else
		return (30);
}

void	algo_sort(t_stack **a, t_stack **b, int *array)
{
	int (chunk_size), (i), (size);
	size = ft_len_stack(a);
	initindex(a, array, size);
	chunk_size = ft_chunk_size(size);
	i = 0;
	while (*a)
	{
		if ((*a)->index <= i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->index <= i + chunk_size)
		{
			pb(a, b);
			i++;
		}
		else if (ft_in_index(*a, i, chunk_size) <= ft_len_stack(a) / 2)
			ra(a);
		else
			rra(a);
	}
}
