/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivanisp <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 19:57:33 by ivanisp           #+#    #+#             */
/*   Updated: 2023/01/15 15:23:10 by ivanisp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<unistd.h>
# include<stdlib.h>
# include<string.h>
# include<stdio.h>
# include<errno.h>
# include<stdio.h>

// To remove
void	print_array(int *stack);

// Stack numbers
int		stack_size(int argc, char **argv);
int		ft_size(int *stack);
int		ft_atoi_pushswap(const char *str);
void	stack_and_check(int *stack_a, int argc, char **argv);
void	free_stacks(int *stack_a, int *stack_b);
void	fill_0_stack(int *stack_a, int size);

// Errors
void	error_and_exit(void);
void	check_duplicates(int *stack_a, int argc);
void	doublecheck_numbers(int argc, char **argv);
void	check_duplicates(int *stack_a, int size);
void	ft_all_positive(int *stack_a, int size);
void	ft_swap_temp(int *stack_temp, int i);

// Movements
void	push_operator(int *stack_a, int *stack_b);
void	push_a(int *stack_a, int *stack_b);
void	push_b(int *stack_a, int *stack_b);
void	ft_add_number(int *stack);
void	ft_remove_number(int *stack);
void	ft_equal_stack(int *stack, int *temp, int size);
void	reverse_operator(int *stack);
void	reverse_a(int *stack_a);
void	reverse_b(int *stack_b);
void	reverse_ab(int *stack_a, int *stack_b);
void	rotate_operator(int *stack);
void	rotate_a(int *stack_a);
void	rotate_b(int *stack_b);
void	rotate_ab(int *stack_a, int *stack_b);
void	swap_operator(int *stack);
void	swap_a(int *stack_a);
void	swap_b(int *stack_b);
void	swap_ab(int *stack_a, int *stack_b);

// Sorting functions
int		already_sorted_check(int *stack_a);
void	sort_3(int *stack_a);
void	sort_4(int *stack_a, int *stack_b);
void	sort_5(int *stack_a, int *stack_b);
void	raddix_sort(int *stack_a, int *stack_b);
int		get_min(int *stack);
int		get_max(int *stack);

#endif
