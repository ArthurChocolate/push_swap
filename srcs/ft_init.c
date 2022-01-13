#include "push_swap.h"

/*
	ft_stack_creation - stack forming function,
	by rewriting the numbers from the array buff
*/

t_stack	*ft_stack_creation(const int *buff, int count)
{
	int		i;
	t_stack	*new_list;
	t_stack	*first_element;

	i = 0;
	new_list = (t_stack *)malloc(sizeof(t_stack));
	if (!new_list)
		exit(1);
	first_element = new_list;
	while (i < count)
	{
		if (i < count)
		{
			new_list->next = (t_stack *)malloc(sizeof(t_stack));
			if (!new_list->next)
				exit(1);
		}
		new_list->data = buff[i];
		if (i == (count - 1))
			new_list->next = NULL;
		else
			new_list = new_list->next;
		i++;
	}
	return (first_element);
}

/*
	ft_init - Initializes stack A by writing numbers on it 
	and initializes an empty stack B
*/

void	ft_init(t_data *new, t_two_stack *stacks)
{
	stacks->a = ft_stack_creation(new->a, new->count_element);
	stacks->b = NULL;
}

/*
	ft_free_stack - frees the allocated memory for the stack
*/

void	ft_free_stack(t_two_stack *stacks)
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
	while (i < stacks->count_b)
	{
		buff = stacks->b;
		stacks->b = stacks->b->next;
		free(buff);
		i++;
	}
}

/*
	ft_zeroing - zeroes structure data
*/

void	ft_null(t_two_stack *stacks, t_data *new)
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