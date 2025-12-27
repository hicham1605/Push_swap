/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:50:09 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/10/26 09:13:22 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str, char charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == charset)
			i++;
		if (str[i] && str[i] != charset)
		{
			count++;
			while (str[i] && str[i] != charset)
				i++;
		}
	}
	return (count);
}

char	*get_word(const char *str, char charset, int *index)
{
	int		start;
	int		len;
	int		j;
	char	*word;

	while (str[*index] && str[*index] == charset)
		(*index)++;
	start = *index;
	len = 0;
	j = 0;
	while (str[*index] && str[*index] != charset)
	{
		(*index)++;
		len++;
	}
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (j < len)
	{
		word[j] = str[start + j];
		j++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		words;
	char	**tab;

	i = 0;
	j = 0;
	words = count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	while (j < words)
	{
		tab[j] = get_word(s, c, &i);
		if (!tab[j])
		{
			while (j > 0)
				free(tab[--j]);
			free(tab);
			return (NULL);
		}
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
