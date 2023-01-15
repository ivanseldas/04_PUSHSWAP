/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raddix_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 23:08:12 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/15 15:36:23 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_max(int *stack)
{
	int	i;
	int	max;

	i = 0;
	max = stack[0];
	while (stack[i] != 0)
	{
		if (stack[i] > max)
			max = stack[i];
		i++;
	}
	return (max);
}

void	raddix_sort(int *stack_a, int *stack_b)
{
	int	i;
	int	max;
	int	bin;

	max = get_max(stack_a);
	printf("max num is: %i\n", max);
	i = 0;
	bin = max > i;
	while (bin > 0)
	{
		bin = max > i;
		i++;
	}
	free(stack_b);
}
