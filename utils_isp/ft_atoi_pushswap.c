/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_pushswap.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 09:17:30 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/14 22:58:41 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi_pushswap(const char *str)
{
	int					sign;
	unsigned long int	number;
	int					i;

	number = 0;
	sign = 1;
	i = 0;
	while (str[i] && (str[i] == '\f' || str[i] == '\t' || str[i] == ' ' || \
				str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += str[i++] - '0';
	}
	if (number > 2147483647 && sign == 1)
		error_and_exit();
	if (number > 2147483648 && sign == -1)
		error_and_exit();
	return (number * sign);
}

/*void	ft_test(const char *str)
{
	printf("%d = ", atoi(str));
	printf("%d ------>>   ", ft_atoi(str));
	if (atoi(str) == ft_atoi(str))
		printf("Success!\n");
	else
		printf("... nope\n");
}

int	main(void)
{
	printf("\n");
	ft_test("-1234a568");
	ft_test("");
	ft_test("    	12354");
	ft_test("    +    34");
	ft_test(" -31654a");
}*/
