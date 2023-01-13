/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:00:18 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/13 15:20:45 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_operator(int *stack_a, int *stack_b)
{
	int	i;
	int	size_a;
	int	size_b;

	size_a = ft_size(stack_a);
	i = size_a;
//	printf("size = %i\n", i);
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
//	print_array(stack_a);
	stack_a[0] = stack_b[0];
	size_b = ft_size(stack_b);
	i = 0;
	while (i < size_b - 1)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[size_b - 1] = 0;
}

void	push_a(int *stack_a, int *stack_b)
{
	push_operator(stack_a, stack_b);
	write (1, "pa\n", 3);
}

void	push_b(int *stack_a, int *stack_b)
{
	push_operator(stack_b, stack_a);
	write (1, "pb\n", 3);
}
