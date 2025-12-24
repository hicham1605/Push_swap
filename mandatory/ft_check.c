/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:15:04 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/12/23 18:07:07 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	ft_atol(const char *str)
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

static int	duplicate(long *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static void	freeexit(t_stack **a, t_stack **b, char **nums, int should_free)
{
	free_stacks(a, b);
	if (should_free)
		ft_free_split(nums);
	error_exit();
}

static void	check_duplicate_overflow(char **nums, t_stack **a, t_stack **b,
		int should_free)
{
	long	*arr;

	int		(i), (count);
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
			freeexit(a, b, nums, should_free);
		}
		i++;
	}
	if (!duplicate(arr, count))
    {
        free(arr);
        freeexit(a, b, nums, should_free);
    }
	free(arr);
}


int	check_digits(char **nums, t_stack **a, t_stack **b, int should_free)
{
	int	i;
	int	j;

	check_empty(nums);
	i = 0;
	while (nums[i])
	{
		j = 0;
		if (nums[i][j] == '+' || nums[i][j] == '-')
			j++;
		if (!nums[i][j])
			return (0);
		while (nums[i][j])
		{
			if (nums[i][j] < '0' || nums[i][j] > '9')
				return (0);
			j++;
		}
		i++;
	}
	check_duplicate_overflow(nums, a, b, should_free);
	return (1);
}
