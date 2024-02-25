/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alafdili <alafdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:28:43 by alafdili          #+#    #+#             */
/*   Updated: 2024/02/25 18:59:11 by alafdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void which_sort(t_stack **stack_a, t_stack **stack_b)
{
    int size;

    if (!stack_a)
        return ;
    if (_is_sorted(*stack_a) == 1)
    {
        ft_lstclear(stack_a);
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

void check_arg(char *arg)
{
    int i;
    i = 0;
    if (arg[0] == '\0')
        _free(&arg, '0');
    else
    {
        while (arg[i] == 32 && arg[i])
            i++;
        if (arg[i] == '\0')
            _free(&arg, '0');
    }
}
void fun() {system("leaks push_swap");}
int main(int argc, char *argv[])
{
    t_stack *stack_a;
    t_stack *stack_b;
    char *new_args;
    atexit(fun);
    // t_stack  *temp_a;
    // t_stack  *temp_b;
    
    stack_a = NULL;
    stack_b = NULL;
    new_args = NULL;
    argc = 1;
    while (argv[argc])
    {
        check_arg(argv[argc]);
        new_args = ft_strjoin(new_args, argv[argc]);
        new_args = ft_strjoin(new_args, "  ");
        argc++;
    }
    parsing(new_args);
    max_min(new_args, &stack_a);    
    check_duplicat(&stack_a);
    // which_sort(&stack_a, &stack_b);
    // char *ptr = malloc(1220);
    // fscanf(stdin, "c");
    // system("leaks push_swap");
    return (0);
    
    //ft_lstclear(&stack_a);
    //printf("args: %s\n", new_args);
        
    // temp_a = stack_a;
    // temp_b = stack_b;
    // printf("stack A:\n");
    // while (temp_a)
    // {
    //     printf("[%d]\n", temp_a -> data);
    //     temp_a = temp_a -> next;
    // }
    // printf("stack B:\n");
    // while (temp_b)
    // {
    //     printf("[%d]\n", temp_b -> data);
    //     temp_b = temp_b -> next;
    // }
    // ft_lstclear(&stack_a);
    // ft_lstclear(&stack_b); 
    // while (1)
    // {
    //     sleep(2);
    //     fun();
    // }
}

