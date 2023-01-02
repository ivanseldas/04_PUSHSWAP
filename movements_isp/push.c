/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:00:18 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/02 17:39:32 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	int	i;

	(*size_a)++;
	i = *size_a - 1;
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = stack_b[0];
	i = 0;
	while (i < *size_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	(*size_b)--;
	stack_b[*size_b] = 0;
	write (1, "pa\n", 3);
}

void	push_b(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	int	i;

	(*size_b)++;
	i = *size_b - 1;
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = stack_a[0];
	i = 0;
	while (i < *size_a)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	(*size_a)--;
	stack_a[*size_a] = 0;
	write (1, "pa\n", 3);
}
