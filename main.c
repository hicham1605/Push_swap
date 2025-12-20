/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:34:43 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/12/16 17:26:55 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c);

// int main(int ac, char **av)
// {
//     int i, j;
//     char **words;
//     if (ac == 1 || (ac ==2 && !av[1][0]))
//         return (1);
//     else if (ac == 2)
//         words = ft_split(av[1], ' ');
//     if (!words)
//         return (1);
//     return (0);
// }