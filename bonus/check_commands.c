/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_commands.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 21:40:49 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/12/27 14:16:55 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/push_swap.h"
#include "checker.h"

int	check_command(t_stack **stack_a, t_stack **stack_b, char *line)
{
	if (ft_strncmp(line, "sa\n", 3) == 0)
		sa(stack_a);
	else if (ft_strncmp(line, "sb\n", 3) == 0)
		sb(stack_b);
	else if (ft_strncmp(line, "ss\n", 3) == 0)
		ss(stack_a, stack_b);
	else if (ft_strncmp(line, "pa\n", 3) == 0)
		pa(stack_a, stack_b);
	else if (ft_strncmp(line, "pb\n", 3) == 0)
		pb(stack_a, stack_b);
	else if (ft_strncmp(line, "ra\n", 3) == 0)
		ra(stack_a);
	else if (ft_strncmp(line, "rb\n", 3) == 0)
		rb(stack_b);
	else if (ft_strncmp(line, "rr\n", 3) == 0)
		rr(stack_a, stack_b);
	else if (ft_strncmp(line, "rra\n", 4) == 0)
		rra(stack_a);
	else if (ft_strncmp(line, "rrb\n", 4) == 0)
		rrb(stack_b);
	else if (ft_strncmp(line, "rrr\n", 4) == 0)
		rrr(stack_a, stack_b);
	else
		return (-1);
	return (0);
}
