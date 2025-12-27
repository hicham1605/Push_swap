/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 14:59:00 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/12/27 10:13:41 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}					t_stack;
int					check_digits(char **nums, t_stack **a, t_stack **b,
						int should_free);
void				error_exit(void);
int					count_len_num(char **nums);
void				check_empty(char **nums);
void				ft_free_split(char **split);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);
int					create_stacks(char **nums, t_stack **a, t_stack **b);
void				assign_index(t_stack *a);
int					ft_is_sorted(t_stack *a);
void				ft_last_step(t_stack **a, t_stack **b);
t_stack				*ft_find_max(t_stack *stack);
int					current_index(t_stack *stack, t_stack *max);
void				sort_2(t_stack **a, t_stack **b);
void				sort_3(t_stack **a, t_stack **b);
void				sort_4(t_stack **a, t_stack **b);
void				sort_5(t_stack **a, t_stack **b);
void				ft_sort_stacks(t_stack **a, t_stack **b);
void				algo_sort(t_stack **a, t_stack **b, int *array);
int					*fall_array(t_stack **a);
int					ft_len_stack(t_stack **a);
void				free_stacks(t_stack **a, t_stack **b);
int					stack_size(t_stack *stack);
t_stack				*find_last(t_stack *stack);
#endif
