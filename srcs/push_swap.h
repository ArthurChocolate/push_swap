/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naqua <naqua@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 12:54:57 by naqua             #+#    #+#             */
/*   Updated: 2022/01/22 12:54:58 by naqua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_steps
{
	int				count_a;
	int				count_b;
	int				dest_a;
	int				dest_b;
}	t_steps;

typedef struct s_data
{
	int				a[10000];
	int				count_element;
}	t_data;

typedef struct s_stack
{
	int				data;
	int				step;
	int				rotate;
	struct s_stack	*next;
}	t_stack;

typedef struct s_stacks
{
	int				count_a;
	int				count_b;
	int				min;
	int				max;
	int				med;
	t_stack			*a;
	t_stack			*b;
}	t_two_stacks;

/*
*	actions
*/

void	ft_ra(t_stack **a, int i);
void	ft_rb(t_stack **b, int i);
void	ft_rr(t_two_stacks *s, int i);
void	ft_sa(t_stack *a, int i);
void	ft_sb(t_stack *b, int i);
void	ft_ss(t_two_stacks *s, int i);
void	ft_rra(t_stack **a, int i);
void	ft_rrb(t_stack **b, int i);
void	ft_rrr(t_two_stacks *s, int i);
void	ft_pa(t_two_stacks *s, int i);
void	ft_pb(t_two_stacks *s, int i);

/*
*	searching
*/

void	ft_finding(t_two_stacks *s, t_stack *b, int *action, int *buff);
int		ft_finding_place(t_two_stacks *s, t_stack *b, t_steps *steps, int min);
int		ft_smaller(t_stack *a, int buff, int src);
int		ft_min(t_stack *a, int min);

/*
*	initialization
*/

void	ft_null(t_two_stacks *stacks, t_data *new);
void	ft_free_stack(t_two_stacks *stacks);
void	ft_init_stack(t_data *new, t_two_stacks *stacks);
t_stack	*ft_create_stack(const int *buff, int count);

/*
*	little sort
*/

int		ft_max(t_stack *s);
void	ft_sort_3_element(t_two_stacks *stacks);
void	ft_sort_5_element(t_two_stacks *stacks);

/*
*	main sort
*/

void	ft_instruction(t_two_stacks *stacks, t_steps *steps);
void	ft_min_steps(t_two_stacks *stacks, t_steps *steps);
void	ft_steps(t_stack *b, int count);
void	ft_start_sort(t_two_stacks *stacks);
void	ft_main_sort(t_two_stacks *stacks);

/*
*	quick sort
*/

void	ft_quick_sort(int *array, int start, int end);
int		ft_partition(int *array, int start, int end);

/*
*	splitter
*/

void	ft_stacking(t_data *new, int *buff, int count);
void	ft_stacking(t_data *new, int *buff, int count);

/*
*	utils
*/

int		ft_only_spaces(const char *str);
int		ft_is_sorted(t_data *new);
void	ft_array_separation(int argc, char **argv, t_data *new);

/*
*	validation
*/

int		ft_validation(int argc, char **argv);
void	ft_number_availability(const char *str);
void	ft_valid_str(const char *str);
void	ft_duplicate_check(t_data *new, t_two_stacks *stacks);
void	ft_search_duplicate(const int *dup, int count);

#endif
