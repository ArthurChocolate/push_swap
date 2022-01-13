#include "push_swap.h"

/*
	ft_rra - rotates stuck A down by one
*/

void	ft_rra(t_stack **a, int i)
{
	t_stack	*first;
	t_stack	*temp;
	t_stack	*last;

	if ((*a) == NULL || (*a)->next == NULL)
		return ;
	first = *a;
	last = *a;
	while (last->next->next)
		last = last->next;
	temp = last->next;
	last->next = NULL;
	temp->next = first;
	*a = temp;
	if (i == 1)
		write(1, "rra\n", 4);
}

/*
	ft_rrb - rotates suck B down by one
*/

void	ft_rrb(t_stack **b, int i)
{
	t_stack	*first;
	t_stack	*temp;
	t_stack	*last;

	if ((*b) == NULL || (*b)->next == NULL)
		return ;
	first = *b;
	last = *b;
	while (last->next->next)
		last = last->next;
	temp = last->next;
	last->next = NULL;
	temp->next = first;
	*b = temp;
	if (i == 1)
		write(1, "rrb\n", 4);
}

/*
	ft_rrr - ft_rra and ft_rrb in the same time
*/

void	ft_rrr(t_two_stack *s, int i)
{
	if (i == 1)
		wrtie(1, "rrr\n", 3);
	ft_rra(&s->a, 0);
	ft_rrb(&s->b, 0);
}