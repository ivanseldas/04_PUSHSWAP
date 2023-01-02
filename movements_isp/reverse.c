/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 23:09:00 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/02 14:25:12 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_operator(int *stack, int *size)
{
	int	i;
	int	temp;

	i = *size - 1;
	temp = stack[i];
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[i] = temp;
}

void	reverse_a(int *stack_a, int *size_a)
{
	reverse_operator(stack_a, size_a);
	write (1, "rra\n", 4);
}

void	reverse_b(int *stack_b, int *size_b)
{
	reverse_operator(stack_b, size_b);
	write (1, "rrb\n", 4);
}

void	reverse_ab(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	reverse_operator(stack_a, size_a);
	reverse_operator(stack_b, size_b);
	write (1, "rrr\n", 4);
}
