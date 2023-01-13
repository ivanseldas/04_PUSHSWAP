/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   already_sorted_check.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 23:24:16 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/13 16:25:40 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	already_sorted_check(int *stack_a)
{
	int	i;
	int	count;

	count = ft_size(stack_a) - 1;
	i = 0;
	while (i < count)
	{
		if (stack_a[i] > stack_a[i + 1])
			return (0);
		i++;
	}
	return (1);
}
