/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:00:18 by ivanisp           #+#    #+#             */
/*   Updated: 2022/12/19 22:24:47 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	int	i;

	if (!stack_b)
		exit (0);
	(*size_a)++;
	i = size_a - 1;
	while (i > 0)
	{
		stack_a[i + 1] = stack_a[i];
		i--;
	}
	stack_a[0] = stack_b[0];
	i = 0;
	while (i < size_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	(*size_b)--;
	if (*size_b == 0)
		stack_b = NULL;
	write (1, "pa\n", 3);
}

void	push_b(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	int	i;

	if (!stack_a)
		exit (0);
	(*size_b)++;
	i = size_b - 1;
	while (i > 0)
	{
		stack_b[i + 1] = stack_b[i];
		i--;
	}
	stack_b[0] = stack_a[0];
	i = 0;
	while (i < size_a)
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	(*size_a)--;
	if (*size_a == 0)
		stack_a = NULL;
	write (1, "pa\n", 3);
}
