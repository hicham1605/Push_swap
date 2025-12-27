/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiouzddo <hiouzddo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 14:42:43 by hiouzddo          #+#    #+#             */
/*   Updated: 2025/12/26 09:43:42 by hiouzddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*ft_all_line(int fd, char *str);
char	*ft_next_line(char *str);
char	*ft_new_str(char *str);
char	*ft__strjoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);
int		ft_strlen1(const char *s);
char	*ft_strdup(const char *s);
void	*for_free(char *str);

#endif