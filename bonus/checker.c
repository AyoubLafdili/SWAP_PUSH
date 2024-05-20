/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 21:06:41 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/19 13:07:25 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	input_check(char *input)
{
	if (!ft_strncmp(input, "pa\n", 3) || !ft_strncmp(input, "pb\n", 3)
		|| !ft_strncmp(input, "sa\n", 3) || !ft_strncmp(input, "sb\n", 3)
		|| !ft_strncmp(input, "ss\n", 3) || !ft_strncmp(input, "ra\n", 3)
		|| !ft_strncmp(input, "rb\n", 3) || !ft_strncmp(input, "rr\n", 3)
		|| !ft_strncmp(input, "rra\n", 4) || !ft_strncmp(input, "rrb\n", 4)
		|| !ft_strncmp(input, "rrr\n", 4))
		return (0);
	else
		return (1);
}

void	avoid_norm(t_stack *stack_a, t_stack *stack_b, t_ops *head)
{
	if (_is_sorted_b(stack_a) == 1 && stack_b == NULL)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	list_clear(NULL, head, 1);
}

void	get_instraction(t_stack **stack_a, t_stack **stack_b)
{
	t_ops	*lst_head;
	char	*usr_in;

	lst_head = NULL;
	while (1)
	{
		usr_in = get_next_line(0);
		if (!usr_in)
			break ;
		if (input_check(usr_in) == 1)
		{
			list_clear(NULL, lst_head, 1);
			list_clear(*stack_a, lst_head, 0);
			_free(&usr_in, 'p');
		}
		lst_head = add_to_list(lst_head, usr_in);
		if (!lst_head)
		{
			list_clear(*stack_a, NULL, 0);
			_free(&usr_in, 'p');
		}
	}
	apply_ins(lst_head, stack_a, stack_b);
	avoid_norm(*stack_a, *stack_b, lst_head);
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
	get_instraction(&stack_a, &stack_b);
	list_clear(stack_a, NULL, 0);
	list_clear(stack_b, NULL, 0);
}
