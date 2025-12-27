/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_reverse_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:01:33 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/12/25 16:47:29 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rra(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*prev;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	prev = NULL;
	while (tmp->next)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	prev->next = NULL;
	tmp->next = *a;
	*a = tmp;
}

void	rrb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*prev;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	prev = NULL;
	while (tmp->next)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	prev->next = NULL;
	tmp->next = *b;
	*b = tmp;
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
}
