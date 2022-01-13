#include "push_swap.h"

/*
	ft_quick_sort - start quick sort algo
*/

void	ft_quick_sort(int *array, int start, int end)
{
	int	i;

	if (start < end)
	{
		i = ft_arr_fragmentation(array, start, end);
		ft_quick_sort(array, start, i - 1);
		ft_quick_sort(array, i + 1, end);
	}
}

/*
	ft_arr_fragmentation - Array partitioning and basic 
	sorting process takes place in this function
*/

int	ft_arr_fragmentation(int *array, int start, int end)
{
	int	i;
	int	j;
	int	pivot;
	int	temp;

	pivot = array[end];
	i = start - 1;
	j = start;
	while (j < end)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
		j++;
	}
	temp = array[i + 1];
	array[i + 1] = array[end];
	array[end] = temp;
	return (i + 1);
}