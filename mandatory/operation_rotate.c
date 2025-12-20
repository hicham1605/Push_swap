/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:59:33 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/12/19 15:58:58 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_stack **a)
{
    t_stack *tmp;
    t_stack *last;

    if (!*a || !(*a)->next)
        return ;
    tmp = *a;
    *a = (*a)->next;
    last = find_last(*a);
    tmp->next = NULL;
    last->next = tmp;
    write(1, "ra\n", 3);
}

void rb(t_stack **b)
{
    t_stack *tmp;
    t_stack *last;

    if (!*b || !(*b)->next)
        return ;
    tmp = *b;
    *b = (*b)->next;
    last = find_last(*b);
    tmp->next = NULL;
    last->next = tmp;
    write(1, "rb\n", 3);
}

void rr(t_stack **a, t_stack **b)
{
    ra(a);
    rb(b);
    write(1, "rr\n", 3);
}