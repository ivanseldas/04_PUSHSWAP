/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   already_sorted_check.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 23:24:16 by ivanisp           #+#    #+#             */
/*   Updated: 2022/12/25 20:07:36 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	already_sorted_check(int *stack_a, int argc)
{
	int	i;

	i = argc - 2;
	while (i < 0)
	{
		if (stack_a[i] < stack_a[i - 1])
			return (0);
		i--;
	}
	return (1);
}
