/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splitter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naqua <naqua@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 12:55:20 by naqua             #+#    #+#             */
/*   Updated: 2022/01/22 12:55:22 by naqua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_array_separation(int argc, char **argv, t_data *new)
{
	int		p;
	int		i;
	int		*buff;
	char	**mass;
	int		count_element;

	i = 1;
	while (i < argc)
	{
		p = -1;
		count_element = ft_countword(argv[i]);
		mass = ft_split(argv[i], count_element);
		buff = (int *)malloc(sizeof(int) * (count_element));
		if (!buff)
			exit(1);
		while (count_element > ++p)
		{
			buff[p] = ft_atoi(mass[p]);
			free(mass[p]);
		}
		free(mass);
		ft_stacking(new, buff, count_element);
		i++;
	}
}

void	ft_stacking(t_data *new, int *buff, int count)
{
	int	i;

	i = -1;
	while (count > ++i)
		new->a[new->count_element + i] = buff[i];
	new->count_element += count;
	free(buff);
}
