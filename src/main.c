/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:46:41 by grinella          #+#    #+#             */
/*   Updated: 2023/07/04 17:33:36 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = malloc(sizeof(t_stack));
	stack_a = NULL;
	print_stack(&stack_a);
	check(ac, av);
	trans_av(av, &stack_a);
	stack_b = malloc(sizeof(t_stack));
	stack_b = NULL;
	// tre_numeri(&stack_a);
	five_h(&stack_a, &stack_b);
	check_order(&stack_a);
	print_number(&stack_a);
	free_total_a(&stack_a);
	free_total_b(&stack_b);
	return (0);
}

/*
** printa il numero di mosse fatte dal main
*/

void	print_number(t_stack **stack)
{
	t_stack	*first_node;

	first_node = *stack;
	if (!*stack)
		return ;
	while ((*stack)->next != first_node)
	{
		printf("%d ", (*stack)->value);
		*stack = (*stack)->next;
	}
	printf("%d", (*stack)->value);
}
