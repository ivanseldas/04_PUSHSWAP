/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:26:16 by ivanisp           #+#    #+#             */
/*   Updated: 2022/12/19 23:22:12 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_operator(int *stack, int *size)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack[0];
	while (i < *size - 1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[i] = temp;
}

void	rotate_a(int *stack_a, int *size_a)
{
	rotate_operator(stack_a, size_a);
	write (1, "ra\n", 3);
}

void	rotate_b(int *stack_b, int *size_b)
{
	rotate_operator(stack_b, size_b);
	write (1, "rb\n", 3);
}

void	rotate_ab(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	rotate_operator(stack_a, size_a);
	rotate_operator(stack_b, size_b);
	write (1, "rr\n", 3);
}
