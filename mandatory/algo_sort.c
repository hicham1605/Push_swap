/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 13:29:16 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/12/23 15:48:57 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	current_index(t_stack *stack, t_stack *max)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (stack == max)
			return (i);
		else
			stack = stack->next;
		i++;
	}
	return (i);
}

t_stack	*ft_find_max(t_stack *stack)
{
	t_stack	*max;
	t_stack	*cur;

	if (!stack)
	{
		return (NULL);
	}
	max = stack;
	cur = stack->next;
	while (cur != NULL)
	{
		if (cur->content > max->content)
			max = cur;
		cur = cur->next;
	}
	return (max);
}

void	ft_last_step(t_stack **a, t_stack **b)
{
	t_stack	*max;

	max = ft_find_max(*b);
	while (*b)
	{
		if ((*b)->content == max->content)
		{
			pa(a, b);
			if (*b)
				max = ft_find_max(*b);
		}
		else if (current_index(*b, max) <= ft_len_stack(b) / 2)
			rb(b);
		else
			rrb(b);
	}
}

void	ft_sort_stacks(t_stack **a, t_stack **b)
{
	int	*array;

	array = fall_array(a);
	algo_sort(a, b, array);
	ft_last_step(a, b);
	free(array);
}
