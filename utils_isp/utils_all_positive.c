/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_all_positive.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:36:51 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/15 16:05:50 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*ft_stack_copy(int *stack)
{
	int	*stack_temp;
	int	i;
	int	size;

	size = ft_size(stack);
	stack_temp = (int *)malloc(sizeof(int) * size + 1);
	if (!stack_temp)
		return (0);
	i = 0;
	while (i < size)
	{
		stack_temp[i] = stack[i];
		i++;
	}
	stack_temp[i] = 0;
	return (stack_temp);
}

int	*ft_bubble_sort(int *stack, int len)
{
	int	i;
	int	j;
	int	*stack_temp;

	stack_temp = ft_stack_copy(stack);
	j = 0;
	while (j < len - 1)
	{
		i = 0;
		while (i < len - 1)
		{
			if (stack_temp[i] > stack_temp[i + 1])
				ft_swap_temp(stack_temp, i);
			i++;
		}
		j++;
	}
	return (stack_temp);
}

void	ft_swap_temp(int *stack_temp, int i)
{
	int	temp;

	temp = stack_temp[i];
	stack_temp[i] = stack_temp[i + 1];
	stack_temp[i + 1] = temp;
}

void	ft_equal_and_free(int *stack, int *stack_temp, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		stack[i] = stack_temp[i];
		i++;
	}
	free(stack_temp);
}

void	ft_all_positive(int *stack, int size)
{
	int	*stack_order;
	int	*stack_temp;
	int	i;
	int	j;

	stack_temp = (int *)malloc(sizeof(int) * size);
	if (!stack_temp)
		exit (0);
	stack_order = ft_bubble_sort(stack, size);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (stack_order[i] == stack[j])
				stack_temp[j] = i + 1;
			j++;
		}
		i++;
	}
	ft_equal_and_free(stack, stack_temp, size);
	free(stack_order);
}

/*int	main(void)
{
	int	stack[] = {-2, 5, -256, 0};
	int	len = 4;
	int	i;

	printf("STACK ORIGINAL IS: ");
	i = 0;
	while (i < len)
	{
		printf(" %i,", stack[i]);
		i++;
	}
	ft_all_positive(stack, len);
	printf("\nSTACK CONVERTED IS: ");
	i = 0;
	while (i < len)
	{
		printf(" %i,", stack[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
