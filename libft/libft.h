/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naqua <naqua@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 12:50:40 by naqua             #+#    #+#             */
/*   Updated: 2022/01/22 12:50:54 by naqua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define MAXINT 2147483647
# define MININT -2147483648

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int		ft_atoi(const char *str);
int		*ft_intcpy(int *dst, const int *src, int count);
void	ft_error(void);
char	**ft_split(char const *s, int word);
void	ft_rewriting(char const *s, char **mass);
int		ft_wordmalloc(char const *s, char **mass);
int		ft_countword(char const *s);
size_t	ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);

#endif
