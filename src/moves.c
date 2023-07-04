/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grinella <grinella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:02:59 by grinella          #+#    #+#             */
/*   Updated: 2023/07/04 17:21:59 by grinella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	p_(t_stack **stack_from, t_stack **stack_to, char c)
{
	t_stack	*tmp;

	if (*stack_from == NULL)
		return ;
	tmp = *stack_from;
	get_last_node(*stack_from)->next = (*stack_from)->next;
	*stack_from = tmp->next;
	// printf("PUSH\n");
	get_last_node(*stack_to)->next = tmp;
	tmp->next = *stack_to;
	*stack_to = tmp;
	if (c == 1)
		write (1, "pa\n", 3);
	else if (c == 2)
		write (1, "pb\n", 3);
}

void	s_(t_stack **stack, char c)
{
	t_stack	*tmp;
	int		n;

	tmp = *stack;
	n = tmp->value;
	tmp->value = tmp->next->value;
	tmp->next->value = n;
	if (c == 1)
		write (1, "sa\n", 3);
	else if (c == 2)
		write (1, "sb\n", 3);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	s_(stack_a, 0);
	s_(stack_b, 0);
	write(1, "ss\n", 3);
}
