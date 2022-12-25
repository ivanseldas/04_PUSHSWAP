/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 21:15:20 by ivanisp           #+#    #+#             */
/*   Updated: 2022/12/25 20:07:54 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_3(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2] \
			&& stack_a[0] < stack_a[2])
	{
		swap_a(stack_a, size_a);
	}
	if (stack_a[0] > stack_a[1] && stack_a[1] > stack_a[2] \
			&& stack_a[0] > stack_a[2])
	{
		swap_a(stack_a, size_a);
		reverse_a(stack_a, size_a);
	}
	if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2] \
			&& stack_a[0] > stack_a[2])
	{
		rotate_a(stack_a, size_a);
	}
	if (stack_a[0] < stack_a[1] && stack_a[1] > stack_a[2] \
			&& stack_a[2] < stack_a[0])
	{
		reverse_a(stack_a, size_a);
	}
}
