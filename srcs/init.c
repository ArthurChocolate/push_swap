/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naqua <naqua@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 12:54:37 by naqua             #+#    #+#             */
/*   Updated: 2022/01/22 12:54:37 by naqua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
	ft_create_stack - form the stack by copying numbers from buffs to lists
*/

t_stack	*ft_create_stack(const int *buff, int count)
{
	int		i;
	t_stack	*new;
	t_stack	*first;

	i = 0;
	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		exit(1);
	first = new;
	while (i < count)
	{
		if (i < count - 1)
		{
			new->next = (t_stack *)malloc(sizeof(t_stack));
			if (!new->next)
				exit(1);
		}
		new->data = buff[i];
		if (i == (count - 1))
			new->next = NULL;
		else
			new = new->next;
		i++;
	}
	return (first);
}

/*
	ft_init_stack - initialize stacks
*/

void	ft_init_stack(t_data *new, t_two_stacks *stacks)
{
	stacks->a = ft_create_stack(new->a, new->count_element);
	stacks->b = NULL;
}

/*
	ft_free_stack - clear the memory allocated to the stack
*/

void	ft_free_stack(t_two_stacks *stacks)
{
	int		i;
	t_stack	*buff;

	i = 0;
	while (i < stacks->count_a)
	{
		buff = stacks->a;
		stacks->a = stacks->a->next;
		free(buff);
		i++;
	}
	i = 0;
	while (i < stacks->count_b)
	{
		buff = stacks->b;
		stacks->b = stacks->b->next;
		free(buff);
		i++;
	}
}

/*
	ft_null - null the structure data
*/

void	ft_null(t_two_stacks *stacks, t_data *new)
{
	new->count_element = 0;
	stacks->count_a = 0;
	stacks->count_b = 0;
	stacks->min = 0;
	stacks->max = 0;
	stacks->med = 0;
	stacks->a = NULL;
	stacks->b = NULL;
}
