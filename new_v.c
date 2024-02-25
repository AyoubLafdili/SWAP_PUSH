// // #include "push_swap.h"

// // int get_pos(t_stack *stack, int node, t_stack *size)
// // {
// //     int pos;

// //     pos = 0;
// //     while (stack && stack -> data != node)
// //     {
// //         stack = stack -> next;
// //         pos++;
// //     }
// //     if (pos <= list_size(size) / 2)
// //         return (0);
// //     else 
// //         return (1);
// // }

// // void b_to_a(t_stack **head_a, t_stack **head_b)
// // {
// //     t_stack *best;
// //     while (*head_b)
// //     {
// //         set_target_b(*head_a, *head_b);
// //         best = get_cost(*head_b, *head_a);
// //         while(*head_a != best -> target)
// //         {
// //             if (!get_pos(*head_a, best -> target -> data, *head_a))
// //                 ft_ra(head_a);
// //             else
// //                 ft_rra(head_a);
// //         }
// //         while (*head_b != best)
// //         {
// //             if (!get_pos(*head_b, best -> data, *head_b))
// //                 ft_rb(head_b);
// //             else
// //                 ft_rrb(head_b);
// //         }
// //         ft_pa(head_a, head_b);
// //     }
// // }

// // void sub_action(t_stack **stack_a, t_stack **stack_b, t_stack *best)
// // {
// //     if (!get_pos(*stack_b, best -> target -> data, *stack_b) 
// //     && !get_pos(*stack_a, best -> data, *stack_a))
// //         ft_rr(stack_a, stack_b);
// //     else if (get_pos(*stack_b, best -> target -> data, *stack_b) 
// //     && get_pos(*stack_a, best -> data, *stack_a))   
// //         ft_rrr(stack_a, stack_b);
// //     else if (!get_pos(*stack_b, best -> target -> data, *stack_b) 
// //     && get_pos(*stack_a, best -> data, *stack_a) > list_size(*stack_a) / 2)
// //         ft_rb(stack_b);
// //     else if (get_pos(*stack_b, best -> target -> data, *stack_b)
// //     && !get_pos(*stack_a, best -> data, *stack_a))
// //         ft_rrb(stack_b);
// //     else if (!get_pos(*stack_a, best -> data, *stack_a) 
// //     && get_pos(*stack_b, best -> target -> data, *stack_b))
// //         ft_ra(stack_a);
// //     else
// //         ft_rra(stack_a);
// // }

// // void aplly_action(t_stack **stack_a, t_stack **stack_b, t_stack *best)
// // {
    
// //     while(*stack_a != best || *stack_b != best -> target)
// //     {
// //         if (*stack_a != best && *stack_b != best -> target)
// //             sub_action(stack_a, stack_b, best);
// //         if (*stack_a == best)
// //         {
// //             if (!get_pos(*stack_b, best -> target -> data, *stack_b))
// //                 ft_rb(stack_b);
// //             else
// //                 ft_rrb(stack_b);
// //         }
// //         else
// //         {
// //             if (!get_pos(*stack_a, best -> data, *stack_a))
// //                 ft_ra(stack_a);
// //             else
// //             ft_rra(stack_a);
// //         } 
// //     }
// // }

// // void srt_rest(t_stack **stack_a, t_stack **stack_b)
// // {
// //     t_stack *best;
    
// //     ft_pb(stack_a, stack_b);
// //     ft_pb(stack_a, stack_b);
// //     while (list_size(*stack_a) > 3)
// //     {
// //         set_target_a(*stack_a, *stack_b);
// //         best = get_cost(*stack_a, *stack_b);
// //         aplly_action(stack_a, stack_b, best);
// //         ft_pb(stack_a, stack_b);
// //         // ft_pb(stack_a, stack_b);
// //         // ft_rb(stack_b);
// //     }
// //     srt_three(stack_a);
// //     b_to_a(stack_a, stack_b);
// //     check_sort(stack_a);
// // }










// // int get_pos(t_stack *stack, int node)
// // {
// //     int pos;

// //     pos = 0;
// //     while (stack && stack -> data != node)
// //     {
// //         stack = stack -> next;
// //         pos++;
// //     }
// //     return (pos);
// // }

// // int get_move(t_stack *head, int data)
// // {
// //     int move;
// //     int rest;
// //     int pos;

// //     pos = get_pos(head, data);
// //     rest = list_size(head) - pos;
// //     if (pos <= rest)
// //         move = pos;
// //     else
// //         move = rest;
// //     return (move);
// // }

// // t_stack *get_cost(t_stack *stack_a, t_stack *stack_b)
// // {
// //     t_stack *head_a;
// //     int min_cost;
// //     int temp;
// //     t_stack *lowest;
    
// //     head_a = stack_a;
// //     lowest = head_a;
// //     min_cost = get_move(stack_a, head_a -> data) + get_move(stack_b, head_a -> target -> data); 
// //     while (head_a)
// //     {
// //         temp = get_move(stack_a, head_a -> data) + get_move(stack_b, head_a -> target -> data);
// //         if (temp < min_cost)
// //         {
// //             min_cost = temp;
// //             lowest = head_a;
// //             head_a = head_a -> next;
// //         }
// //         else
// //         head_a = head_a -> next;
// //     }
// //     return (lowest);
// // }

// // void b_to_a(t_stack **head_a, t_stack **head_b)
// // {
// //     t_stack *best;
// //     while (*head_b)
// //     {
// //         set_target_b(*head_a, *head_b);
// //         best = get_cost(*head_b, *head_a);
// //         while(*head_a != best -> target)
// //         {
// //             if (get_pos(*head_a, best -> target -> data) <= list_size(*head_a) / 2)
// //                 ft_ra(head_a);
// //             else
// //                 ft_rra(head_a);
// //         }
// //         while (*head_b != best)
// //         {
// //             if (get_pos(*head_b, best -> data) <= list_size(*head_b) / 2)
// //                 ft_rb(head_b);
// //             else
// //                 ft_rrb(head_b);
// //         }
// //         ft_pa(head_a, head_b);
// //     }
// // }

// // void sub_action(t_stack **stack_a, t_stack **stack_b, t_stack *best)
// // {
// //     if (get_pos(*stack_b, best -> target -> data) <= list_size(*stack_b) / 2 
// //     && get_pos(*stack_a, best -> data) <= list_size(*stack_a) / 2 )
// //         ft_rr(stack_a, stack_b);
// //     else if (get_pos(*stack_b, best -> target -> data) > list_size(*stack_b) / 2 
// //     && get_pos(*stack_a, best -> data) > list_size(*stack_a) / 2 )   
// //         ft_rrr(stack_a, stack_b);
// //     else if (get_pos(*stack_b, best -> target -> data) <= list_size(*stack_b) / 2 
// //     && get_pos(*stack_a, best -> data) > list_size(*stack_a) / 2)
// //         ft_rb(stack_b);
// //     else if (get_pos(*stack_b, best -> target -> data) > list_size(*stack_b) / 2
// //     && get_pos(*stack_a, best -> data) <= list_size(*stack_a) / 2 )
// //         ft_rrb(stack_b);
// //     else if (get_pos(*stack_a, best -> data) <= list_size(*stack_a) / 2 
// //     && get_pos(*stack_b, best -> target -> data) > list_size(*stack_b) / 2)
// //         ft_ra(stack_a);
// //     else
// //         ft_rra(stack_a);
// // }

// // void aplly_action(t_stack **stack_a, t_stack **stack_b, t_stack *best)
// // {
    
// //     while(*stack_a != best || *stack_b != best -> target)
// //     {
// //         if (*stack_a != best && *stack_b != best -> target)
// //             sub_action(stack_a, stack_b, best);
// //         else if (*stack_a == best)
// //         {
// //             if (get_pos(*stack_b, best -> target -> data) <= list_size(*stack_b) / 2)
// //                 ft_rb(stack_b);
// //             else
// //                 ft_rrb(stack_b);
// //         }
// //         else
// //         {
// //             if (get_pos(*stack_a, best -> data) <= list_size(*stack_a) / 2)
// //                 ft_ra(stack_a);
// //             else
// //             ft_rra(stack_a);
// //         } 
// //     }
// // }

// // void srt_rest(t_stack **stack_a, t_stack **stack_b)
// // {
// //     t_stack *best;
    
// //     ft_pb(stack_a, stack_b);
// //     ft_pb(stack_a, stack_b);
// //     while (list_size(*stack_a) > 3)
// //     {
// //         set_target_a(*stack_a, *stack_b);
// //         best = get_cost(*stack_a, *stack_b);
// //         aplly_action(stack_a, stack_b, best);
// //         ft_pb(stack_a, stack_b);
// //         // ft_pb(stack_a, stack_b);
// //         // // ft_rb(stack_b)
// //     }
// //     srt_three(stack_a);
// //     b_to_a(stack_a, stack_b);
// //     check_sort(stack_a);
// // }
































// #include "push_swap.h"


// static int min(t_stack *head_a)
// {
//     int min_node;
//     min_node = head_a -> data;
//     while (head_a != NULL)
//     {
//         if (head_a -> data < min_node)
//             min_node = head_a -> data;
//         head_a = head_a -> next;
//     }
//     return (min_node);
// }

// static int max(t_stack *head_a)
// {
//     int max_node;
//     max_node = head_a -> data;
//     while (head_a != NULL)
//     {
//         if (head_a -> data > max_node)
//             max_node = head_a -> data;
//         head_a = head_a -> next;
//     }
//     return (max_node);
// }

// int get_pos(t_stack *stack, int node)
// {
//     int pos;

//     pos = 0;
//     while (stack && stack -> data != node)
//     {
//         stack = stack -> next;
//         pos++;
//     }
//     if (pos <= list_size(stack) / 2)
//         return (0);
//     else 
//         return (1);
// }

// void sub_action(t_stack **stack_a, t_stack **stack_b, t_stack *best)
// {
//     if (!get_pos(*stack_b, best -> target -> data) 
//     && !get_pos(*stack_a, best -> data))
//         ft_rr(stack_a, stack_b);
//     else if (get_pos(*stack_b, best -> target -> data) 
//     && get_pos(*stack_a, best -> data))
//         ft_rrr(stack_a, stack_b);
//     else if (!get_pos(*stack_b, best -> target -> data) 
//     && get_pos(*stack_a, best -> data))
//     {
//         ft_rra(stack_a);
//         ft_rb(stack_b);
//     }
//     else
//     {
//         ft_ra(stack_a);
//         ft_rrb(stack_b);
//     }
// }

// void aplly_action(t_stack **stack_a, t_stack **stack_b, t_stack *best)
// {
    
//     while(*stack_a != best || *stack_b != best -> target)
//     {
//         if (*stack_a != best && *stack_b != best -> target)
//             sub_action(stack_a, stack_b, best);
//         else if (*stack_a == best)
//         {
//             if (!get_pos(*stack_b, best -> target -> data))
//                 ft_rb(stack_b);
//             else
//                 ft_rrb(stack_b);
//         }
//         else
//         {
//             if (!get_pos(*stack_a, best -> data))
//                 ft_ra(stack_a);
//             else
//             ft_rra(stack_a);
//         } 
//     }
// }
// void b_to_a(t_stack **head_a, t_stack **head_b)
// {
//     t_stack *best;
//     while (*head_b)
//     {
//         set_target_b(*head_a, *head_b);
//         best = get_cost(*head_b, *head_a);
//         while(*head_a != best -> target || *head_b != best)
//         {
//             if (*head_a != best -> target && *head_b != best)
//             {
//                 if (!get_pos(*head_a, best -> target -> data)
//                 && !get_pos(*head_b, best -> data))
//                     ft_rr(head_a, head_b);
//                 else if (get_pos(*head_a, best -> target -> data)
//                 && get_pos(*head_b, best -> data))
//                     ft_rrr(head_a, head_b);
//                 else if (!get_pos(*head_a, best -> target -> data)
//                 && get_pos(*head_b, best -> data))
//                 {
//                     ft_rrb(head_b);
//                     ft_ra(head_a);
//                 }
//                 else if(get_pos(*head_a, best -> target -> data)
//                 && !get_pos(*head_b, best -> data))
//                 {
//                     ft_rb(head_b);
//                     ft_rra(head_a);
//                 }
//             }
//             else if (*head_a == best -> target)
//             {
//                 if (!get_pos(*head_b, best -> data))
//                     ft_rb(head_b);
//                 else
//                     ft_rrb(head_b);
//             }
//             else 
//             {
//                 if (!get_pos(*head_a, best -> target -> data))
//                     ft_ra(head_a);
//                 else
//                     ft_rra(head_a);
//             }
//         }
//         ft_pa(head_a, head_b);
//     }
// }
// void srt_rest(t_stack **stack_a, t_stack **stack_b)
// {
//     // t_stack *best;
//     int mid;
    
//     // ft_pb(stack_a, stack_b);
//     // ft_pb(stack_a, stack_b);
//     while (list_size(*stack_a) > 3)
//     {
//         mid = min(*stack_a) + max(*stack_a) / 2;
//         ft_pb(stack_a, stack_b);
//         if ((*stack_b) -> data < mid)
//             ft_rb(stack_b);
//     }
//     srt_three(stack_a);
//     b_to_a(stack_a, stack_b);
//     check_sort(stack_a);
// }