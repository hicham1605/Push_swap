/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 14:58:36 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/12/24 18:44:19 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_exit(t_stack **a, t_stack **b, char **nums, int should_free)
{
	free_stacks(a, b);
	if (should_free)
		ft_free_split(nums);
	error_exit();
}

static void	sort_stack(t_stack **a, t_stack **b)
{
	if (stack_size(*a) == 2)
		sort_2(a, b);
	else if (stack_size(*a) == 3)
		sort_3(a, b);
	else if (stack_size(*a) == 4)
        sort_4(a, b);
	else if (stack_size(*a) <= 5)
		sort_5(a, b);
	else
		ft_sort_stacks(a, b);
}

static void	process_stacks(t_stack **a, t_stack **b, int should_free,
		char **nums)
{
	if (ft_is_sorted(*a))
	{
		free_stacks(a, b);
		if (should_free)
			ft_free_split(nums);
		return ;
	}
	sort_stack(a, b);
	free_stacks(a, b);
	if (should_free)
		ft_free_split(nums);
}

static char	**parse_input(int ac, char **av, int *should_free)
{
	char	**nums;

	nums = NULL;
	if (ac == 2)
	{
		nums = ft_split(av[1], ' ');
		*should_free = 1;
		if (!nums || !nums[0])
        {
            if (nums)
                ft_free_split(nums);
            error_exit();
        }
	}
	else
		nums = av + 1;
	return (nums);
}

int	main(int ac, char **av)
{
	char	**nums;
	t_stack	*a;
	t_stack	*b;
	int		should_free;

	nums = NULL;
	a = NULL;
	b = NULL;
	should_free = 0;
	if (ac < 2)
		return (0);
	nums = parse_input(ac, av, &should_free);
	if (!check_digits(nums, &a, &b, should_free))
		free_exit(&a, &b, nums, should_free);
	if (!create_stacks(nums, &a, &b))
		free_exit(&a, &b, nums, should_free);
	process_stacks(&a, &b, should_free, nums);
	return (0);
}
