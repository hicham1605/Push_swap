/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_sort2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 11:10:38 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/12/22 11:55:35 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_len_stack(t_stack **a)
{
    t_stack	*tmp;
    int		len;

    tmp = *a;
    len = 0;
    while (tmp)
    {
        len++;
        tmp = tmp->next;
    }
    return (len);
}
void ft_sort_array(int *array, int len)
{
    int (i), (j), (tmp);

    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}
int    *fall_array(t_stack **a)
{
	t_stack	*tmp;
	int		*array;
	int		i;
	int 	len;

	len = ft_len_stack(a); // create this function to get the length of the stack
	array = malloc(sizeof(int) * (len));
	if (!array)
		return (NULL);
	tmp = *a;
	i = 0;
	while (tmp)
	{
		array[i] = tmp->content;
		i++;
		tmp = tmp->next;
	}
    ft_sort_array(array, len);
	return(array);
}