/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_all_positive.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:36:51 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/01 19:33:41 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*ft_stack_copy(int *stack, int len)
{
	int	*stack_temp;
	int	i;

	stack_temp = (int *)malloc(sizeof(int) * len);
	if (!stack_temp)
		return (0);
	i = 0;
	while (i < len)
	{
		stack_temp[i] = stack[i];
		i++;
	}
	return (stack_temp);
}

int	*ft_bubble_sort(int *stack, int len)
{
	int	i;
	int	j;
	int	temp;
	int	*stack_temp;

	stack_temp = ft_stack_copy(stack, len);
	j = 0;
	while (j < len - 1)
	{
		i = 0;
		while (i < len - 1)
		{
			if (stack_temp[i] > stack_temp[i + 1])
			{
				temp = stack_temp[i];
				stack_temp[i] = stack_temp[i + 1];
				stack_temp[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
	return (stack_temp);
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
	i = 0;
	while (i < size)
	{
		stack[i] = stack_temp[i];
		i++;
	}
	free(stack_temp);
	free(stack_order);
}

/*int	main(void)
{
	int	stack[] = {-2, 5, -256, 0, 13, 268, 57, -12, 15, -36, 99, 48, 10, -189};
	int	*stack_temp;
	int	len = 14;
	int	i;

	printf("STACK ORIGINAL IS: ");
	i = 0;
	while (i < len)
	{
		printf(" %i,", stack[i]);
		i++;
	}
	stack_temp = ft_all_positive(stack, len);
	printf("\nSTACK CONVERTED IS: ");
	i = 0;
	while (i < len)
	{
		printf(" %i,", stack_temp[i]);
		i++;
	}
	printf("\n");
	free(stack_temp);
	return (0);
}*/
