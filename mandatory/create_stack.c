/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:26:03 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/12/23 17:27:40 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	ft_atol(const char *str)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	i = 0;
	sign = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	ft_is_sorted(t_stack *a)
{
	while (a && a->next)
	{
		if (a->content > a->next->content)
			return (0);
		a = a->next;
	}
	return (1);
}

static t_stack	*new_node(int content)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		error_exit();
	node->content = content;
	node->index = 0;
	node->next = NULL;
	return (node);
}

static void	add_to_stack(t_stack **stack, t_stack *new)
{
	t_stack	*last;

	if (!*stack)
		*stack = new;
	else
	{
		last = find_last(*stack);
		last->next = new;
	}
}

int	create_stacks(char **nums, t_stack **a, t_stack **b)
{
	int		i;
	long	value;

	*b = NULL;
	i = 0;
	while (nums[i])
	{
		value = ft_atol(nums[i]);
		if (value < INT_MIN || value > INT_MAX)
			return (0);
		add_to_stack(a, new_node((int)value));
		i++;
	}
	return (1);
}
