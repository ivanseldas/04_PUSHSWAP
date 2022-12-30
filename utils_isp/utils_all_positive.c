/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_all_positive.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 17:36:51 by ivanisp           #+#    #+#             */
/*   Updated: 2022/12/30 21:03:21 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int	*ft_all_positive(int *stack, int len)
{
	int	*stack_order;
	int	*stack_return;
	int	i;
	int	j;

	stack_return = (int *)malloc(sizeof(int) * len);
	if (!stack_return)
		return (0);
	stack_order = ft_bubble_sort(stack, len);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (stack_order[i] == stack[j])
				stack_return[j] = i + 1;
			j++;
		}
		i++;
	}
	free(stack_order);
	return (stack_return);
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
