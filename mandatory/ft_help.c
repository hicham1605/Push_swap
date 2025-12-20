/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:16:39 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/12/19 15:57:22 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void error_exit(void)
{
    write(2, "Error\n", 6);
    exit(1);
}

int count_len_num(char **nums)
{
    int i;

    i = 0;
    while (nums[i])
        i++;
    return (i);
}

void check_empty(char **nums)
{
    if (!nums || !nums[0])
        error_exit();
}

void ft_free_split(char **split)
{
    int i;

    i = 0;
    while (split[i])
    {
        free(split[i]);
        i++;
    }
    free(split);
}

void free_stacks(t_stack **a, t_stack **b)
{
    t_stack *tmp;

    while (*a)
    {
        tmp = (*a)->next;
        free(*a);
        *a = tmp;
    }
    while (*b)
    {
        tmp = (*b)->next;
        free(*b);
        *b = tmp;
    }
}

int stack_size(t_stack *stack)
{
    int size;

    size = 0;
    while (stack)
    {
        size++;
        stack = stack->next;
    }
    return (size);
}

t_stack *find_last(t_stack *stack)
{
    while (stack && stack->next)
        stack = stack->next;
    return (stack);
}