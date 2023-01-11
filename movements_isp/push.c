/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:00:18 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/12 00:50:10 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(int *stack_a, int *stack_b)
{
	int	i;

	i = ft_size(stack_a);
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = stack_b[0];
	stack_a = ft_realloc_stack(stack_a, 1);
	i = 0;
	while (i < ft_size(stack_b))
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b = ft_realloc_stack(stack_b, -1);
	write (1, "pa\n", 3);
}

void	push_b(int *stack_a, int *stack_b)
{
	push_a(stack_b, stack_a);
	write (1, "pb\n", 3);
}

int	*ft_realloc_stack(int *stack, int a)
{
	int	*temp;
	int	size;
	int	i;

	size = ft_size(stack);
	temp = (int *)malloc(sizeof(int) * (size + a));
	if (!temp)
		return (0);
	i = 0;
	while (i < size + a)
	{
		temp[i] = stack[i];
		i++;
	}
	free(stack);
	return (temp);
}
