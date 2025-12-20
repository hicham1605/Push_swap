/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 10:33:34 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/12/20 22:06:21 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
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
    if (ac == 2)
    {
        nums = ft_split(av[1], ' ');
        should_free = 1;
    }
    else
        nums = av + 1;
    check_digits(nums);
    create_stacks(nums, &a, &b);
    if (ft_is_sorted(a))
    {
        free_stacks(&a, &b);
        if (should_free)
            ft_free_split(nums);
        return (0);
    }
    if (stack_size(a) == 2)
    sort_2(&a);
    else if (stack_size(a) == 3)
    sort_3(&a);
    else if(stack_size(a) <= 5)
    sort_5(&a, &b);
    // else
    //     algo_sort(&a, &b);
    // free_stacks(&a, &b);
    if (should_free)
        ft_free_split(nums);
    return (0);
}
