/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naqua <naqua@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 12:53:35 by naqua             #+#    #+#             */
/*   Updated: 2022/01/22 12:54:12 by naqua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
	ft_ra - rotates stuck A up by one
*/

void	ft_ra(t_stack **a, int i)
{
	t_stack	*first;
	t_stack	*temp;
	t_stack	*last;

	if ((*a) == NULL || (*a)->next == NULL)
		return ;
	temp = *a;
	first = (*a)->next;
	last = *a;
	while (last->next != NULL)
		last = last->next;
	temp->next = NULL;
	last->next = temp;
	*a = first;
	if (i == 1)
		write(1, "ra\n", 3);
}

/*
	ft_rb - rotates stuck B up by one
*/

void	ft_rb(t_stack **b, int i)
{
	t_stack	*first;
	t_stack	*temp;
	t_stack	*last;

	if ((*b) == NULL || (*b)->next == NULL)
		return ;
	temp = *b;
	first = (*b)->next;
	last = *b;
	while (last->next != NULL)
		last = last->next;
	temp->next = NULL;
	last->next = temp;
	*b = first;
	if (i == 1)
		write(1, "rb\n", 3);
}

/*
	ft_rr - rotates both A and B up by one
*/

void	ft_rr(t_two_stacks *s, int i)
{
	if (i == 1)
		write(1, "rr\n", 3);
	ft_ra(&s->a, 0);
	ft_rb(&s->b, 0);
}
