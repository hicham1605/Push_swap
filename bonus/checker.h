/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 21:41:17 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/12/26 14:53:15 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/libft.h"
# include "../mandatory/push_swap.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		check_digits(char **nums, t_stack **a, t_stack **b, int should_free);
int		check_command(t_stack **stack_a, t_stack **stack_b, char *line);
int		create_stack(char **nums, t_stack **a, t_stack **b);
int		ft_is_sorted(t_stack *a);
void	free_stacks(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

#endif
