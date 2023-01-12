/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 22:00:18 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/12 19:17:41 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(int *stack_a, int *stack_b)
{
	ft_add_number(stack_a);
	stack_a[0] = stack_b[0];
	ft_remove_number(stack_b);
}

void	push_a(int *stack_a, int *stack_b)
{
	push(stack_a, stack_b);
	write (1, "pa\n", 3);
}

void	push_b(int *stack_a, int *stack_b)
{
	push(stack_b, stack_a);
	write (1, "pb\n", 3);
}

int	ft_add_number(int *stack)
{
	int	*temp;
	int	size;
	int	i;

	size = ft_size(stack);
	temp = (int *)malloc(sizeof(int) * (size + 1));
	if (!temp)
		return (0);
	i = 0;
	temp[i] = 0;
	while (i < size)
	{
		temp[i + 1] = stack[i];
		i++;
	}
	free(stack);
	stack = temp;
	return (0);
}

int	ft_remove_number(int *stack)
{
	int	*temp;
	int	size;
	int	i;

	size = ft_size(stack);
	if (size == 1)
	{
		temp = 0;
		free (stack);
		stack = temp;
		return (0);
	}
	temp = (int *)malloc(sizeof(int) * (size - 1));
	if (!temp)
		return (0);
	i = 0;
	while (i < size)
	{
		temp[i] = stack[i + 1];
		i++;
	}
	free(stack);
	stack = temp;
	return (0);
}

int	ft_size(int *stack)
{
	int	i;

	if (!stack)
		return (0);
	i = 0;
	while (stack[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	int	*stack_a;
	int	*stack_b;

	stack_a = (int *)malloc(sizeof(int) * 3);
	stack_a[0] = 3;
	stack_a[1] = 1;
	stack_a[2] = 2;
	stack_b = 0;
	push_b(stack_a, stack_b);
	return(0);
}
