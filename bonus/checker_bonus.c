/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:49:19 by alafdili          #+#    #+#             */
/*   Updated: 2024/03/02 11:41:02 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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

int	input_check(char *input)
{
	if (!ft_strcmp(input, "pa\n", 3) || !ft_strcmp(input, "pb\n", 3)
		|| !ft_strcmp(input, "sa\n", 3) || !ft_strcmp(input, "sb\n", 3)
		|| !ft_strcmp(input, "ss\n", 3) || !ft_strcmp(input, "ra\n", 3)
		|| !ft_strcmp(input, "rb\n", 3) || !ft_strcmp(input, "rr\n", 3)
		|| !ft_strcmp(input, "rra\n", 4) || !ft_strcmp(input, "rrb\n", 4)
		|| !ft_strcmp(input, "rrr\n", 4))
		return (0);
	else
		return (1);
}

void	get_instraction(t_stack **stack_a, t_stack **stack_b)
{
	t_list	*lst_head;
	char	*usr_in;

	lst_head = NULL;
	usr_in = NULL;
	while (1)
	{
		usr_in = get_next_line(0);
		if (!usr_in)
			break ;
		if (input_check(usr_in) == 1)
		{
			if (lst_head != NULL)
				list_clear(NULL, lst_head, 1);
			list_clear(*stack_a, NULL, 0);
			_free(&usr_in, 'p');
		}
		lst_head = add_to_list(lst_head, usr_in);
	}
	apply_ins(lst_head, stack_a, stack_b);
	if (_is_sorted_b(*stack_a) == 1 && *stack_b == NULL)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	list_clear(NULL, lst_head, 1);
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
		new_args = ft_strjoin(new_args, "  ");
		argc++;
	}
	parsing(new_args);
	max_min(new_args, &stack_a);
	check_duplicat(&stack_a);
	get_instraction(&stack_a, &stack_b);
	list_clear(stack_a, NULL, 0);
	list_clear(stack_b, NULL, 0);
}
