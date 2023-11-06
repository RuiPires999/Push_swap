/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms_utils4.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:29:43 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/06 17:57:09 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

list	*ft_max_node(list *stack)
{
	list	*max_node;
	long	max_num;

	max_num = -21474836478;
	while (stack)
	{
		if (stack->nb > max_num)
		{
			max_num = stack->nb;
			max_node = stack;
		}
		stack = stack->next;
	}
	return (max_node);
}

list	*ft_min_node(list *stack)
{
	list	*min_node;
	long	min_num;

	min_num = 21474836478;
	while (stack)
	{
		if (stack->nb < min_num)
		{
			min_num = stack->nb;
			min_node = stack;
		}
		stack = stack->next;
	}
	return (min_node);
}

void	ft_min_to_top(list **stack_a)
{
	while ((*stack_a)->nb != ft_min_node(*stack_a)->nb)
	{
		if ((ft_min_node(*stack_a))->above_median)
			ft_rotate_a(stack_a, false);
		else
			ft_reverse_rotate_a(stack_a, false);
	}
}

list	*ft_get_cheapest_node(list *stack_a)
{
	if (!stack_a)
		return (NULL);
	while (stack_a)
	{
		if (stack_a->cheapest)
			return (stack_a);
		stack_a = stack_a->next;
	}
	return (NULL);
}