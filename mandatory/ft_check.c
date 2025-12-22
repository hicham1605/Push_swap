/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:15:04 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/12/22 13:03:38 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long ft_atol(const char *str)
{
    long	result;
    int		sign;
    int		i;

    result = 0;
    i = 0;
    sign = 1;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result * sign);
}

static void duplicate(long *arr, int size)
{
    int i;
    int j;

    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (arr[i] == arr[j])
                error_exit();
            j++;
        }
        i++;
    }
}

static void check_duplicate_overflow(char **nums, t_stack **a, t_stack **b, int should_free)
{
    int		i;
    int		count;
    long	*arr;

    count = count_len_num(nums);
    arr = malloc(sizeof(long) * count);
    if (!arr)
        error_exit();
    i = 0;
    while (nums[i])
    {
        arr[i] = ft_atol(nums[i]);
        if (arr[i] < INT_MIN || arr[i] > INT_MAX)
        {
            free(arr);
            free_stacks(a, b);
            if (should_free)
                ft_free_split(nums);
            error_exit();
        }
        i++;
    }
    duplicate(arr, count);
    free(arr);
}

void check_digits(char **nums, t_stack **a, t_stack **b, int should_free)
{
    int i;
    int j;

    check_empty(nums);
    i = 0;
    while (nums[i])
    {
        j = 0;
        if (nums[i][j] == '+' || nums[i][j] == '-')
            j++;
        if (!nums[i][j])
        {
            free_stacks(a, b);
            if (should_free)
                ft_free_split(nums);
            error_exit();
        }
        while (nums[i][j])
        {
            if (nums[i][j] < '0' || nums[i][j] > '9')
            {
                free_stacks(a, b);
                if (should_free)
                    ft_free_split(nums);
                error_exit();
            }
            j++;
        }
        i++;
    }
    check_duplicate_overflow(nums, a, b, should_free);
}