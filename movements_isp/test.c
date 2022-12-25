/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 21:42:30 by ivanisp           #+#    #+#             */
/*   Updated: 2022/12/25 20:06:05 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
	int	i;

	if (!stack_b)
		exit (0);
	(*size_a)++;
	while (i >= 0)
	{
		stack_a[i + 1] = stack_a[i];
		i--;
	}
	stack_a[0] = stack_b[0];
	i = 0;
	while (i <= *size_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	(*size_b)--;
	if (*size_b == 0)
		stack_b = 0;
	write (1, "pa\n", 3);
}

int	main(void)
{
	int	*stack_a;
	int	*stack_b;
	int	i;
	int	a;
	int	b;

	a = 3;
	b = 2;

	stack_a = (int *)malloc(sizeof(int) * 4);
	stack_b = (int *)malloc(sizeof(int) * 4);
	stack_a[0] = 1;
	stack_a[1] = 2;
	stack_a[2] = 3;
	stack_a[3] = '\0';
	stack_b[0] = 9;
	stack_b[1] = 8;
	stack_b[2] = '\0';
	stack_b[3] = '\0';
	//PUSH
	i = 0;
	push_a(stack_a, stack_b, &a, &b);
	printf("STACK A =");
	while (i < a)
	{
		printf("%i, ", stack_a[i]);
		i++;
	}
	i = 0;
	printf("\nSTACK B =");
	push_a(stack_b, stack_a, &b, &a);
	while (i < b)
	{
		printf("%i, ", stack_b[i]);
		i++;
	}
	return (0);
}
