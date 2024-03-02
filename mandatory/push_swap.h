/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:58:02 by alafdili          #+#    #+#             */
/*   Updated: 2024/03/02 09:58:35 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../utils/utils.h"

typedef struct s_stack
{
	int				data;
	struct s_stack	*target;
	struct s_stack	*next;
}	t_stack;

t_stack	*add_to_stack(t_stack *top, int data);
t_stack	*ft_lstnew(int content);
t_stack	*crt_add_front(t_stack *head, int data);
t_stack	*get_cost(t_stack *stack_a, t_stack *stack_b);
int		_is_sorted(t_stack *stack_a);
int		list_size(t_stack *lst);
void	ft_lstclear(t_stack **lst);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
void	parsing(char *args);
void	check_duplicat(t_stack **list);
void	max_min(char *args, t_stack **head);
void	_free(char **mtx, char flag);
void	set_target_b(t_stack *head_a, t_stack *head_b);
void	get_max_min(t_stack *head_a, int *min_num, int *max_num);
void	check_sort(t_stack **stack_a);

void	ft_pb(t_stack **head_a, t_stack **head_b);
void	ft_pa(t_stack **head_a, t_stack **head_b);
void	ft_ss(t_stack **head_a, t_stack **head_b);
void	ft_rr(t_stack **head_a, t_stack **head_b);
void	ft_rrr(t_stack **head_a, t_stack **head_b);
void	ft_sa(t_stack **head_a);
void	ft_sb(t_stack **head_b);
void	ft_ra(t_stack **head_a);
void	ft_rb(t_stack **head_b);
void	ft_rra(t_stack **head_a);
void	ft_rrb(t_stack **head_b);

void	srt_three(t_stack **head_a);
void	srt_rest(t_stack **stack_a, t_stack **stack_b);
#endif