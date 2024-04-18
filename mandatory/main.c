/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:28:43 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/18 23:36:19 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	which_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	if (_is_sorted(*stack_a) == 1)
	{
		list_clear(stack_a);
		return ;
	}
	size = list_size(*stack_a);
	if (size == 2)
		ft_sa(stack_a);
	else if (size == 3)
		srt_three(stack_a);
	else
		srt_rest(stack_a, stack_b);
}

void	check_arg(char *arg, char *new_args)
{
	int	i;

	i = 0;
	while (arg[i] == 32 && arg[i])
		i++;
	if (arg[i] == '\0')
	{
		if (new_args)
			free(new_args);
		_free(&arg, '0');
	}
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	*new_args;

	stack_a = NULL;
	stack_b = NULL;
	new_args = NULL;
	argc = 1;
	while (argv[argc])
	{
		check_arg(argv[argc], new_args);
		new_args = ft_strjoin(new_args, argv[argc]);
		if (!new_args)
			return (1);
		new_args = ft_strjoin(new_args, " ");
		if (!new_args)
			return (1);
		argc++;
	}
	parsing(new_args);
	max_min(new_args, &stack_a);
	check_duplicat(&stack_a);
	which_sort(&stack_a, &stack_b);
	list_clear(&stack_a);
	return (0);
}
