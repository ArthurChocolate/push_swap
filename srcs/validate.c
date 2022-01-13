#include "push_swap.h"

/*
	ft_symbols_check - Function to check 
	the presence of characters other than numbers
*/

void	ft_symbols_check(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return ;
		i++;
	}
	ft_error("Symbol Error\n");
}

/*
	ft_sign_check - Function for checking 
	if the sign is set correctly
*/

void	ft_sign_check(const char *str)
{
	size_t	i;
	int		num;
	int		sign;

	i = 0;
	num = 0;
	sign = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			num++;
		else if (str[i] == ' ' || str[i] == '\t')
		{
			if (sign != 0 && num == 0)
				ft_error("Sign Error\n");
			num = 0;
			sign = 0;
		}
		else if ((str[i] == '+' || str[i] == '-') && (sign == 0 
			&& num == 0) && str[i + 1])
			sign++;
		else
			ft_error("Sign Error\n");
		i++;
	}
}

/*
	ft_duplicates - сhecking an array for duplicates
*/

void	ft_duplicates(const int *dup, int count)
{
	int	i;

	i = 0;
	while (i != count)
	{
		if (dup[i] == dup[i + 1])
			ft_error("Duplicate Error\n");
		i++;
	}
}

/*
	ft_duplicates_stacks - checking stacks for duplicates
*/

void	ft_duplicates_stacks(t_data *new, t_two_stack *stacks)
{
	int	*dup;

	dup = (int *)malloc(sizeof(int) * (new->count_element));
	if (!dup)
		exit(1);
	dup = ft_cpy(dup, new->a, new->count_element);
	ft_quick_sort(dup, 0, new->count_element - 1);
	ft_duplicates(dup, new->count_element - 1);
	stacks->count_a = new->count_element;
	stacks->count_b = 0;
	stacks->min = dup[0];
	stacks->med = dup[new->count_element / 2];
	stacks->max = dup[new->count_element - 1];
	free(dup);
}

/*
*	ft_validation - main validate function
*/

int	ft_validation(int argc, char **argv)
{
	int	i;
	int	ret;

	ret = 0;
	i = 1;
	while (i < argc)
	{
		if (ft_only_spaces(argv[i]))
		{
			ft_symbols_check(argv[i]);
			ft_sign_check(argv[i]);
			ret = 1;
		}
		i++;
	}
	return (ret);
}