/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 21:44:22 by ivanisp           #+#    #+#             */
/*   Updated: 2022/12/19 23:21:02 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "push_swap.h"

void	swap_operator(int *stack, int *size)
{
	int	temp;

	if (*size <= 1)
		exit (0);
	temp = stack[0];
	stack[0] = stack[1];
	stack[1] = temp;
}

void	swap_a(int *stack_a, int *size_a)
{
	swap_operator(stack_a, size_a);
	write (1, "sa\n", 3);
}

void	swap_b(int *stack_b, int *size_b)
{
	swap_operator(stack_b, size_b);
	write (1, "sb\n", 3);
}

void	swap_ab(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	swap_operator(stack_a, size_a);
	swap_operator(stack_b, size_b);
	write (1, "ss\n", 3);
}
