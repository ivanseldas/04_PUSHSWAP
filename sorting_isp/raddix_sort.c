/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raddix_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 23:08:12 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/15 16:47:08 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_max(int *stack)
{
	int	i;
	int	max;

	i = 0;
	max = stack[0];
	while (stack[i] != 0)
	{
		if (stack[i] > max)
			max = stack[i];
		i++;
	}
	return (max);
}

void	raddix_sort(int *stack_a, int *stack_b)
{
	int	i;
	int	j;
	int	size;

	size = ft_size(stack_a);
	i = 0;
	while (1)
	{
		j = 0;
		while (j < size)
		{

			if (((stack_a[0] >> i) & 1) == 1)
				rotate_a(stack_a);
			else
				push_b(stack_a, stack_b);
			j++;
		}
		while (ft_size(stack_b) != 0)
			push_a(stack_a, stack_b);
		if (already_sorted_check(stack_a) == 1)
			break ;
		i++;
	}
}
