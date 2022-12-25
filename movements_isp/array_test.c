/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 22:59:00 by ivanisp           #+#    #+#             */
/*   Updated: 2022/12/25 20:05:27 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(void)
{
	int	*arr;
	int	i;
	int	size;

	arr = (int *)malloc(sizeof(int) * 4);
	arr[0] = 3;
	arr[1] = -20;
	arr[2] = 1;
	arr[3] = -3;
	size = sizeof(arr) / sizeof(arr[0]);
	printf("Array size is %i\n", size);
	while (arr[i])
	{
		printf("%i, ", arr[i]);
		i++;
	}
	printf("\n");
	printf("Total of integers = %i\n", i);
	return (0);
}
