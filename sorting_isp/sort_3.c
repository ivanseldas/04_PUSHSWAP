/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 21:15:20 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/13 16:16:56 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3(int *stack_a)
{
	if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2] \
			&& stack_a[0] < stack_a[2])
		swap_a(stack_a);
	else if (stack_a[0] > stack_a[1] && stack_a[1] > stack_a[2] \
			&& stack_a[0] > stack_a[2])
	{
		swap_a(stack_a);
		reverse_a(stack_a);
	}
	else if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2] \
			&& stack_a[0] > stack_a[2])
		rotate_a(stack_a);
	else if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2] \
			&& stack_a[2] < stack_a[0])
		reverse_a(stack_a);
	else if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2] \
			&& stack_a[2] > stack_a[0])
	{
		swap_a(stack_a);
		rotate_a(stack_a);
	}
}

void	sort_4(int *stack_a, int *stack_b)
{
	int	i;
	int	int_min;

	int_min = 1;
	i = 0;
	while (stack_a[i] != int_min)
		i++;
	if (i == 1)
		rotate_a(stack_a);
	if (i == 2)
	{
		rotate_a(stack_a);
		rotate_a(stack_a);
	}
	if (i == 3)
		reverse_a(stack_a);
	push_b(stack_a, stack_b);
	sort_3(stack_a);
	push_a(stack_a, stack_b);
}
