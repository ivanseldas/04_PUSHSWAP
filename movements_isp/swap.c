/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 21:44:22 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/15 13:43:50 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_operator(int *stack)
{
	int	temp;
	int	size;

	size = ft_size(stack);
	if (size <= 1)
		exit (0);
	temp = stack[0];
	stack[0] = stack[1];
	stack[1] = temp;
}

void	swap_a(int *stack_a)
{
	swap_operator(stack_a);
	write (1, "sa\n", 3);
}

void	swap_b(int *stack_b)
{
	swap_operator(stack_b);
	write (1, "sb\n", 3);
}

void	swap_ab(int *stack_a, int *stack_b)
{
	swap_operator(stack_a);
	swap_operator(stack_b);
	write (1, "ss\n", 3);
}
