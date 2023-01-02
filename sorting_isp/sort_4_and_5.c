/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4_and_5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 21:36:30 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/02 22:35:54 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_and_rotate_a(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	push_a(stack_a, stack_b, size_a, size_b);
	rotate_a(stack_a, size_a);
}

void	first_number(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	if (stack_b[0] < stack_a[0])
		push_a(stack_a, stack_b, size_a, size_b);
	else if (stack_b[0] > stack_a[0] && stack_b[0] < stack_a[1])
	{
		rotate_a(stack_a, size_a);
		push_a(stack_a, stack_b, size_a, size_b);
		reverse_a(stack_a, size_a);
	}
	else if (stack_b[0] > stack_a[1] && stack_b[0] < stack_a[2])
	{
		reverse_a(stack_a, size_a);
		push_a(stack_a, stack_b, size_a, size_b);
		reverse_a(stack_a, size_a);
		reverse_a(stack_a, size_a);
	}
	else if (stack_b[0] > stack_a[2])
		push_and_rotate_a(stack_a, stack_b, size_a, size_b);
}

void	second_number(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	if (stack_b[0] < stack_a[0])
		push_a(stack_a, stack_b, size_a, size_b);
	else if (stack_b[0] > stack_a[0] && stack_b[0] < stack_a[1])
	{
		rotate_a(stack_a, size_a);
		push_a(stack_a, stack_b, size_a, size_b);
		reverse_a(stack_a, size_a);
	}
	else if (stack_b[0] > stack_a[1] && stack_b[0] < stack_a[2])
	{
		rotate_a(stack_a, size_a);
		push_a(stack_a, stack_b, size_a, size_b);
		swap_a(stack_a, size_a);
		reverse_a(stack_a, size_a);
	}
	else if (stack_b[0] > stack_a[2] && stack_b[0] < stack_a[3])
	{
		reverse_a(stack_a, size_a);
		push_a(stack_a, stack_b, size_a, size_b);
		rotate_a(stack_a, size_a);
		rotate_a(stack_a, size_a);
	}
	else if (stack_b[0] > stack_a[3])
		push_and_rotate_a(stack_a, stack_b, size_a, size_b);
}

void	sort_4(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	push_b(stack_a, stack_b, size_a, size_b);
	sort_3(stack_a, size_a);
	first_number(stack_a, stack_b, size_a, size_b);
}

void	sort_5(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	push_b(stack_a, stack_b, size_a, size_b);
	push_b(stack_a, stack_b, size_a, size_b);
	sort_3(stack_a, size_a);
	while (*size_b != 0)
	{
		if (size_b[0] == 2)
			first_number(stack_a, stack_b, size_a, size_b);
		else if (size_b[0] == 1)
			second_number(stack_a, stack_b, size_a, size_b);
	}
}
