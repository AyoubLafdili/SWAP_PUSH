/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:55:29 by alafdili          #+#    #+#             */
/*   Updated: 2024/04/19 12:56:53 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "libft.h"

typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}	t_stack;

typedef struct s_operation
{
	char				*content;
	struct s_operation	*next;
}	t_ops;

t_stack	*crt_add_front(t_stack *head, int data);
t_stack	*add_to_stack(t_stack *head, int data);
t_ops	*add_to_list(t_ops *head, char *data);
int		_is_sorted_b(t_stack *stack_a);
void	max_min(char *args, t_stack **head);
void	parsing(char *args);
void	check_duplicat(t_stack **list);
void	_free(char **mtx, char flag);
void	list_clear(t_stack *lst, t_ops *head_list, int flag);
void	apply_ins(t_ops *head_list, t_stack **a, t_stack **b);
int		atoi_check(const char *str, int *set);

//operations:
void	pa(t_stack **head_a, t_stack **head_b);
void	pb(t_stack **head_a, t_stack **head_b);
void	rrr(t_stack **head_a, t_stack **head_b);
void	rr(t_stack **head_a, t_stack **head_b);
void	ss(t_stack **head_a, t_stack **head_b);
void	rra(t_stack **head_a);
void	rrb(t_stack **head_b);
void	sa(t_stack **head_a);
void	sb(t_stack **head_b);
void	ra(t_stack **head_a);
void	rb(t_stack **head_b);

#endif