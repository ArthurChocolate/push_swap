#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

/*structure for actions*/

typedef struct		s_steps
{
	int				count_a;
	int				count_b;
	int				dest_a;
	int				dest_b;
}	t_steps;

/*structure with stacks data*/

typedef struct s_data
{
	int				a[10000];
	int				count_element;
}	t_data;

/*main structure for one stack*/

typedef struct s_stack
{
	int				data;
	int				step;
	int				rotate;
	struct s_stack	*next;
}	t_stack;

/*complex structure for two stacks*/

typedef struct s_two_stacks
{
	int				count_a;
	int				count_b;
	int				min;
	int				max;
	int				med;
	t_stack			*a;
	t_stack			*b;
	struct s_stack	*next;
}	t_two_stack;

/*
*	quick sort
*/

int		ft_arr_fragmentation(int *array, int start, int end);
void	ft_quick_sort(int *array, int start, int end);

/*
*	validation
*/

void	ft_sign_check(const char *str);
void	ft_symbols_check(const char *str);
void	ft_duplicates(const int *dup, int count);
void	ft_duplicates_stacks(t_data *new, t_two_stack *stacks);
int		ft_validation(int argc, char **argv);
int		ft_only_spaces(const char *str);
int		ft_sorted(t_data *new);

/*
*	inicialization
*/

void	ft_init(t_data *new, t_two_stack *stacks);
void	ft_free_stack(t_two_stack *stacks);
void	ft_null(t_two_stack *stacks, t_data *new);
t_stack	*ft_stack_creation(const int *buff, int count);

/*
*	searching
*/

int		ft_min(t_stack *a, int min);
int		ft_smaller(t_stack *a, int buff, int src);
int		ft_searching(t_two_stack *s, t_stack *b, t_steps *steps, int min);
void	ft_best_pos(t_two_stack *s, t_stack *b, int *action, int *buff);

/*
*	rotates
*/

void	ft_ra(t_stack **a, int i);
void	ft_rb(t_stack **b, int i);
void	ft_rr(t_two_stack *s, int i);
void	ft_rra(t_stack **a, int i);
void	ft_rrb(t_stack **b, int i);
void	ft_rrr(t_two_stack *s, int i);

#endif