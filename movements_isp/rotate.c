/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:26:16 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/15 13:43:38 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_operator(int *stack)
{
	int	i;
	int	temp;
	int	size;

	i = 0;
	size = ft_size(stack);
	temp = stack[0];
	while (i < size - 1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[i] = temp;
}

void	rotate_a(int *stack_a)
{
	rotate_operator(stack_a);
	write (1, "ra\n", 3);
}

void	rotate_b(int *stack_b)
{
	rotate_operator(stack_b);
	write (1, "rb\n", 3);
}

void	rotate_ab(int *stack_a, int *stack_b)
{
	rotate_operator(stack_a);
	rotate_operator(stack_b);
	write (1, "rr\n", 3);
}
