/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiolive <ruiolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:41:03 by ruiolive          #+#    #+#             */
/*   Updated: 2023/11/09 09:31:49 by ruiolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_stack_len(t_list *stack)
{
	int	i;

	i = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

int	ft_check_numbers_arg(char **numbers)
{
	int	i;
	int	x;
	
	i = 0;
	while (numbers[i])
	{
		if (ft_atoi(numbers[i]) < -2147483648 
			|| ft_atoi(numbers[i]) > 2147483647)
			return (0);
		x = i + 1;
		while (numbers[x])
		{
			if (ft_atoi(numbers[x]) == ft_atoi(numbers[i])
				|| ft_atoi(numbers[x]) < -2147483648 
				|| ft_atoi(numbers[x]) > 2147483647)
				return (0);
			x++;
		}
		i++;
	}
	return (1);
}

int	ft_check_numbers_str(char **numbers)
{
	int	i;
	int	x;
	
	i = 0;
	while (numbers[i])
	{
		if (ft_atoi(numbers[i]) < -2147483648 
			|| ft_atoi(numbers[i]) > 2147483647)
			return (0);
		x = i + 1;
		while (numbers[x])
		{
			if (ft_atoi(numbers[x]) == ft_atoi(numbers[i])
				|| ft_atoi(numbers[x]) < -2147483648 
				|| ft_atoi(numbers[x]) > 2147483647)
				return (0);
			x++;
		}
		i++;
	}
	return (1);
}

t_list	*ft_find_last_node(t_list *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}
