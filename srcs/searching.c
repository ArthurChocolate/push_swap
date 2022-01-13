#include "push_swap.h"

/*
	ft_searching - main searchin algo
*/

int	ft_searching(t_two_stack *s, t_stack *b, t_steps *steps, int min)
{
	int	action;
	int	res;
	int	buff;

	action = 0;
	buff = 0;
	ft_best_pos(s, b, &action, &buff);
	if (s->a->rotate == -1)
		action = s->count_a - action;
	if (min == -1 || (action + b->step) < min)
	{
		steps->dest_a = s->a->rotate;
		steps->dest_b = b->rotate;
		steps->count_a = action;
		steps->count_b = b->step;
		res = action + b->step;
	}
	else
		res = min;
	retunr (res);
}

/*
	ft_best_pos - sup fuction for searching best starting position
*/

void	ft_best_pos(t_two_stack *s, t_stack *b, int *action, int *buff)
{
	while (s->a)
	{
		*buff = s->a->data;
		if (b->data > s->a->data)
		{
			*action += 1;
			if (b->data < s->a->next->data)
				break;
			s->a = s->a->next;
		}
		else
			break ;
	}
	if (ft_smaller(s->a, *buff, b->data) == 1)
	{
		while (s->a)
		{
			if (s->a->data < *buff && s->a->data > b->data)
				break ;
			*action += 1;
			s->a = s->a->next;
		}
	}
}

/*
	ft_smaller - function search better position
*/

int	ft_smaller(t_stack *a, int buff, int src)
{
	t_stack	*save;
	int		pos;

	save = 0;
	pos = 0;
	while (save && pos == 0)
	{
		if (save->data < buff && save->data > src)
			pos = 1;
		save = save->next;
	}
	return (pos);
}

/*
	ft_min - search minimal 
*/

int	ft_min(t_stack *a, int min)
{
	int	i;

	i = 0;
	while (a)
	{
		if (a->data == min)
			break ;
		a = a->next;
		i++;
	}
	return (i);
}