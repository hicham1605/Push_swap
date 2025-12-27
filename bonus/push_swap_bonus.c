/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 11:53:37 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/12/26 11:47:17 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "get_next_line.h"

static void	free_exit(t_stack **a, t_stack **b, char **nums, int should_free)
{
	free_stacks(a, b);
	if (should_free)
		ft_free_split(nums);
	error_exit();
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

static void	ft_main(t_stack **stack_a, t_stack **stack_b)
{
	char	*line;
	int		res;

	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		res = check_command(stack_a, stack_b, line);
		free(line);
		if (res == -1)
		{
			ft_putstr_fd("Error\n", 2);
			free_stacks(stack_a, stack_b);
			exit(1);
		}
	}
}

static void	check_result(t_stack *stack_a, t_stack *stack_b)
{
	if (ft_is_sorted(stack_a) && stack_b == NULL)
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**nums;
	int		should_free;

	nums = NULL;
	stack_a = NULL;
	stack_b = NULL;
	should_free = 0;
	if (ac < 2)
		return (0);
	nums = parse_input(ac, av, &should_free);
	if (!check_digits(nums, &stack_a, &stack_b, should_free))
		free_exit(&stack_a, &stack_b, nums, should_free);
	if (!create_stack(nums, &stack_a, &stack_b))
		free_exit(&stack_a, &stack_b, nums, should_free);
	ft_main(&stack_a, &stack_b);
	check_result(stack_a, stack_b);
	free_stacks(&stack_a, &stack_b);
	if (should_free)
		ft_free_split(nums);
	return (0);
}
