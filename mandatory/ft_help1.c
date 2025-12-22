/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 15:27:58 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/12/22 15:30:17 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	count_len_num(char **nums)
{
	int	i;

	i = 0;
	while (nums[i])
		i++;
	return (i);
}

void	check_empty(char **nums)
{
	if (!nums || !nums[0])
		error_exit();
}
