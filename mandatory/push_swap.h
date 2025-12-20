/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 10:26:48 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/12/20 11:13:29 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_stack
{
    int				content;
    int				index;
    struct s_stack	*next;
}	t_stack;

void		check_digits(char **nums);
void		error_exit(void);
int			count_len_num(char **nums);
void		check_empty(char **nums);
void		ft_free_split(char **split);
void		pa(t_stack **a, t_stack **b);
void		pb(t_stack **a, t_stack **b);
void		sa(t_stack **a);
void		sb(t_stack **b);
void		ss(t_stack **a, t_stack **b);
void		ra(t_stack **a);
void		rb(t_stack **b);
void		rr(t_stack **a, t_stack **b);
void		rra(t_stack **a);
void		rrb(t_stack **b);
void		rrr(t_stack **a, t_stack **b);
void		create_stacks(char **nums, t_stack **a, t_stack **b);
int			ft_is_sorted(t_stack *a);
void		sort_2(t_stack **a);
void		sort_3(t_stack **a);
void		sort_5(t_stack **a, t_stack **b);
// void		algo_sort(t_stack **a, t_stack **b);
void		free_stacks(t_stack **a, t_stack **b);
int			stack_size(t_stack *stack);
t_stack		*find_last(t_stack *stack);
#endif