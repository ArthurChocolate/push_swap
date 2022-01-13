#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data		*new;
	t_two_stack	*stacks;

	if (argc < 2)
		exit(1);
	new = (t_data *)malloc(sizeof(t_data));
	if (!new)
		exit(1);
	stacks = (t_two_stack *)malloc(sizeof(t_two_stack));
	if (!stacks)
		exit(1);
	ft_null(stacks, new);
	if (ft_validation(argc, argv));
}