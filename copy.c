// // #include "push_swap.h"

// // void free_matrix(char **mtx)
// // {
// //     int i;

// //     i = 0;
// //     while (mtx[i])
// //     {
// //         free(mtx[i]);
// //         i++;
// //     }
// //     write(2, "Error", 6);
// //     exit(1);
// // }
// // void free_unused(char **to_free)
// // {
// //     if (*to_free == NULL || *to_free[0] == '\0')
// //     {
// //         write(2, "Error\n", 6);
// //         exit(1);
// //     }
// //     else
// //     {
// //         free(*to_free);
// //         write(2, "Error\n", 6);
// //         exit(1);
// //     }
// // }
// // int search(char *to_search, char **args, int index)
// // {
// //     while(args[index])
// //     {
// //         if (ft_strcmp(args[index], to_search) == 0)
// //         return 1;
// //         else
// //         index++;
// //     }
// //     return 0;

// // }
// // void check_duplicat(char **args)
// // {
// //     int i;
// //     int j;
// //     char **nbs;
    
// //     i = 0;
// //     j = 0;
// //     nbs = ft_split(*args, ' ');
// //     while (nbs[i])
// //     {
// //         if (search(nbs[i], nbs, i + 1) == 1)
// //         {
// //             free(*args);
// //             free_matrix(nbs);
// //         }
// //         else
// //         i++;
// //     }
// // }

// // int check_left(char *prev, char chr)
// // {
// //     if (ft_isdigit(chr) == 1)
// //     {
// //         if ((ft_isdigit(*prev) == 1 || *prev == 32 || *prev == '+' || *prev == '-' || *prev == '\0'))
// //         {
// //             return (0);
// //             *prev = chr;
// //         }
// //         else
// //             return (1);
// //     }
// //     else
// //     {
// //         if (*prev == 32 || *prev == '\0')
// //             return 0;
// //         else
// //         return 1;
// //     }

// // }

// // int check_right(char *chr)
// // {
// //     if (ft_isdigit(chr[0]))
// //     {
// //         if ((ft_isdigit(chr[1]) == 1) || chr[1] == 32 || chr[1] == '\0')
// //             return 0;
// //         else
// //             return 1;
// //     }
// //     else
// //     {
// //         if (ft_isdigit(chr[1]) == 1)
// //         return 0;
// //         else
// //         return 1;
// //     }
// // }

// // void parsing(char *args)
// // {
// //     int i;
// //     char check;

// //     check = '\0';
// //     i = 0;
// //     if (args == NULL)
// //         exit(0);
// //     while(args[i])
// //     {
// //         if ((ft_isdigit(args[i]) == 1) || args[i] == '+' || args[i] == '-')
// //         {
// //             if(check_left(&check, args[i]) == 1 || check_right(&args[i]) == 1)
// //                 free_unused(args);
// //             else
// //                 i++;
// //         }
// //         else if (args[i] == 32)
// //         {
// //             check = args[i];
// //             i++;
// //         }
// //         else
// //         free_unused(args);
// //     }
// // }
// // void check_arg(char *arg)
// // {
// //     int i;
// //     i = 0;
// //     if (arg[0] == '\0')
// //         free_unused(arg);
// //     else
// //     {

// //     while (arg[i] == 32 && arg[i])
// //         i++;
// //     if (arg[i] == '\0')
// //         free_unused(&arg[i]);
// //     }
// // }
// // int main(int argc, char *argv[])
// // {
// //     char *new_args;
// //     int counter;

// //     new_args = NULL;
// //     counter = 1;
// //     while (argv[counter])
// //     {
// //         check_arg(argv[counter]);
// //         new_args = ft_strjoin(new_args, argv[counter]);
// //         new_args = ft_strjoin(new_args, " ");
// //         counter++;
// //     }
// //     parsing(new_args);
// //     check_duplicat(&new_args);
// // }

// // void max_min(char *args, t_stack **head)
// // {
// //     int i;
// //     int temp;
// //     char **nbs;
    
// //     i = 0;
// //     temp = 0;
// //     nbs = ft_split(args, ' ');
// //     while(nbs[i])
// //     {
// //         if (ft_atoi(nbs[i], &temp) == 0)
// //         {
// //             *head = add_to_stack(*head,temp);
// //             if (*head == NULL)
// //             {
// //                 free(args);
// //                 free_matrix(nbs, 1);
// //             }
// //             i++;
// //         }
// //         else
// //         {
// //             free(args);
// //             free_matrix(nbs, 1);
// //         }
// //     }
// //     free(args);
// //     free_matrix(nbs, 0);
// // }
































// // int pntv_check(char *num, char range)
// // {
// //     int len;
// //     int i = 0;
// //     len = ft_strlen(num);
// //     if (num)
// //     if (len > 10)
// //         return (1);
// //     else if (len == 10)
// //     {
// //         if (!(num[len - 1] >= '0' && num[len - 1] <= range))
// //             return (1);
// //         else
// //         return (0);
// //     }
// //     else
// //         return (0);
// // }
// // void max_min(char *args)
// // {
// //     int i = 0;
// //     char **nbs;
    
// //     nbs = ft_split(args, ' ');
// //     while (nbs[i])
// //     {
// //         while(nbs[i][j] == '0' || nbs[i][j])
// //         j++
// //         if (nbs[i][j] == '-' && pntv_check(&nbs[i][j + 1], '8') == 1)
// //         {
// //             free(args);
// //             free_matrix(nbs);
// //         }
// //         else if(nbs[i][0] == '+' && pntv_check(&nbs[i][1], '7') == 1)
// //         {
// //             free(args);
// //             free_matrix(nbs);
// //         }
// //         else if (nbs[i][0] != '0' &&ft_isdigit(nbs[i][0]) == 1 && pntv_check(nbs[i], '7') == 1)
// //         {
// //             free (args);
// //             free_matrix(nbs);
// //         }
// //         else
// //             i++;
// //     }
// //    // check_duplicat(args);
// // }
// // int main()
// // {
// //     char *s = "10 20 21474836484444646463464316434431431413441434354434434346425643546444646456464654646221456446546464643643464456464646446456464464564644445646464564645646464645645646464646456565656464564564654646456464646464645645645645645645645645645645645645645646456456465456456456456456456456456456464564564564564564564654654654654654654654654654646465465465465465456456456465465456465465465464654645654654646546546546546546546546546546546546546546546546546546546546546546546546546546631133";
// //     char *str = (char *) malloc(ft_strlen(s) * sizeof(char));
// //     ft_strlcpy(str, s, ft_strlen(s) + 1);
// //     max_min(str);
// // }
















// // void free_matrix(char **mtx, int boll)
// // {
// //     int i;

// //     i = 0;
// //     while (mtx[i])
// //     {
// //         free(mtx[i]);
// //         i++;
// //     }
// //     free(mtx);
// //     if (boll == 1)
// //     {
// //         write(2, "Error\n", 7);
// //         exit(1);    
// //     }
// // }

// // void free_unused(char *to_free)
// // {
// //     if (to_free[0] == '\0')
// //     {
// //         write(2, "Error\n", 6);
// //         exit(1);
// //     }
// //     else
// //     {
// //         free(to_free);
// //         write(2, "Error\n", 6);
// //         exit(1);
// //     }
// // }




// // // temp = *stack_a;
// //     // while (temp && list_size(*stack_a) > 3)
// //     // {
// //     //     printf("node data: %d\n", temp -> data);
// //     //     printf("node target: {%d}\n", temp -> target -> data);
// //     //     temp = temp -> next;
// //     // }
// //     *stack_a = set_target(*stack_a, *stack_b);
// //     data = get_cost(*stack_a, *stack_b);
// //     if (get_pos(*stack_b, (*stack_a) -> target -> data) <= list_size(*stack_b) - get_pos(*stack_b, (*stack_a) -> target -> data))
// //     {
// //         move_b = get_pos(*stack_b, (*stack_a) -> target -> data);
// //         while (move_b--)
// //            ft_rb(stack_b);
// //     }
// //     else
// //     {
// //         move_b = list_size(*stack_b) - get_pos(*stack_b, (*stack_a) -> target -> data);
// //         while (move_b--)
// //             ft_rrb(stack_b);
// //     }


    
// //     if (get_pos(*stack_a, data) <= list_size(*stack_a) - get_pos(*stack_a, data))
// //     {
// //         move_a = get_pos(*stack_a, data);
// //         while (move_a--)
// //             ft_ra(stack_a);
// //         ft_pb(stack_a, stack_b);
// //     }
// //     else 
// //     {
// //         move_a = list_size(*stack_a) - get_pos(*stack_a, data);
// //        // printf("move_a: %d\n", move_a);
// //         while (move_a--)
// //             ft_rra(stack_a);
// //         ft_pb(stack_a, stack_b);
// //     }






















// // void b_to_a(t_stack **head_a, t_stack **head_b)
// // {
// //     t_stack *temp;
// //     int data;
// //     int move_a;
// //     int move_b;
    
// //     temp = *head_b;
// //     while (temp -> next)
// //     {
// //         set_target_b(*head_a, *head_b);
// //         data = get_cost_b(*head_a, *head_b);
// //         //correct possiiton in a
// //         if (get_pos(*head_a, temp -> target -> data) <= list_size(*head_a) / 2)
// //         {
// //             move_a = get_move(*head_a, temp -> target);
// //             while (move_a--)
// //                 ft_ra(head_a);
// //         }
// //         else
// //         {
// //             move_a = get_move(*head_a, temp -> target);
// //             while (move_a--)
// //                 ft_rra(head_a);
// //         }
// //         //correct possiiton in b
// //         if (get_pos(*head_b, temp -> data) <= list_size(*head_b) / 2)
// //         {
// //             move_b = get_pos(*head_b, temp -> data);
// //             while (move_b--)
// //                 ft_rb(head_b);
// //             ft_pa(head_a, head_b);
// //         }
// //         else
// //         {
// //             move_b = get_pos(*head_b, temp -> data);
// //             while (move_b--)
// //                 ft_rrb(head_b);
// //             ft_pa(head_a, head_b);
// //         }
// //     }
// // }
























// // void b_to_a(t_stack **head_a, t_stack **head_b)
// // {
// //     t_stack *temp;
// //     t_stack *data;
// //     int move_a;
// //     int move_b;
    
// //     temp = *head_b;
// //     while (temp -> next)
// //     {
// //         set_target_b(*head_a, *head_b);
// //         data = get_cost_b(*head_a, *head_b);
// //         //correct possiiton in a
// //         if (get_pos(*head_a, temp -> target -> data) <= list_size(*head_a) / 2)
// //         {
// //             move_a = get_move(*head_a, temp -> target);
// //             while (move_a--)
// //                 ft_ra(head_a);
// //         }
// //         else
// //         {
// //             move_a = get_move(*head_a, temp -> target);
// //             while (move_a--)
// //                 ft_rra(head_a);
// //         }
// //         //correct possiiton in b
// //         if (get_pos(*head_b, temp -> data) <= list_size(*head_b) / 2)
// //         {
// //             move_b = get_pos(*head_b, temp -> data);
// //             while (move_b--)
// //                 ft_rb(head_b);
// //             ft_pa(head_a, head_b);
// //         }
// //         else
// //         {
// //             move_b = get_pos(*head_b, temp -> data);
// //             while (move_b--)
// //                 ft_rrb(head_b);
// //             ft_pa(head_a, head_b);
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
// //         while(*stack_a != best || *stack_b != best -> target)
// //         {
// //             if (*stack_a != best && *stack_b != best -> target)
// //             {
// //                 if (get_pos(*stack_b, best -> target -> data) <= list_size(*stack_b) / 2 
// //                 && get_pos(*stack_a, best -> data) <= list_size(*stack_a) / 2 )
// //                     ft_rr(stack_a, stack_b);
// //                 else if (get_pos(*stack_b, best -> target -> data) > list_size(*stack_b) / 2 
// //                 && get_pos(*stack_a, best -> data) > list_size(*stack_a) / 2 )   
// //                     ft_rrr(stack_a, stack_b);
// //                 else if (get_pos(*stack_b, best -> target -> data) <= list_size(*stack_b) / 2 
// //                 && get_pos(*stack_a, best -> data) > list_size(*stack_a) / 2)
// //                     ft_rb(stack_b);
// //                 else if (get_pos(*stack_b, best -> target -> data) > list_size(*stack_b) / 2
// //                 && get_pos(*stack_a, best -> data) <= list_size(*stack_a) / 2 )
// //                     ft_rrb(stack_b);
// //                 else if (get_pos(*stack_a, best -> data) <= list_size(*stack_a) / 2 
// //                 && get_pos(*stack_b, best -> target -> data) > list_size(*stack_b) / 2)
// //                     ft_ra(stack_a);
// //                 else
// //                     ft_rra(stack_a);
// //             }
// //             else if (*stack_a == best)
// //             {
// //                 if (get_pos(*stack_b, best -> target -> data) <= list_size(*stack_b) / 2)
// //                     ft_rb(stack_b);
// //                 else
// //                     ft_rrb(stack_b);
// //             }
// //             else
// //             {
// //                 if (get_pos(*stack_a, best -> data) <= list_size(*stack_a) / 2)
// //                     ft_ra(stack_a);
// //                 else
// //                     ft_rra(stack_a);
// //             }
// //         }
// //             ft_pb(stack_a, stack_b);
// //     }
// //     srt_three(stack_a);
// //     b_to_a(stack_a, stack_b);
// //     check_sort(stack_a);
// // }







// // // void srt_rest(t_stack **stack_a, t_stack **stack_b)
// // // {
// // //     t_stack *best;
    
// // //     ft_pb(stack_a, stack_b);
// // //     ft_pb(stack_a, stack_b);
// // //     while (list_size(*stack_a) > 3)
// // //     {
// // //         set_target_a(*stack_a, *stack_b);
// // //         best = get_cost(*stack_a, *stack_b);
// // //         while(*stack_a != best || *stack_b != best -> target)
// // //         {
// // //             if ((*stack_a != best && *stack_b != best -> target)
// // //             && get_pos(*stack_b, best -> target -> data) <= list_size(*stack_b) / 2 
// // //             && get_pos(*stack_a, best -> data) <= list_size(*stack_a) / 2 )
// // //                 ft_rr(stack_a, stack_b);
// // //             else if ((*stack_a != best && *stack_b != best -> target)
// // //             && get_pos(*stack_b, best -> target -> data) >  list_size(*stack_b) / 2 
// // //             && get_pos(*stack_a, best -> data) <= list_size(*stack_a) / 2 )
// // //                 ft_rrr(stack_a, stack_b);
// // //             if (*stack_a == best && get_pos(*stack_b, best -> target -> data) <= list_size(*stack_b) / 2)
// // //                 ft_rb(stack_b);
// // //             else if (*stack_a == best && get_pos(*stack_b, best -> target -> data) > list_size(*stack_b) / 2)
// // //                 ft_rrb(stack_b);
// // //             else if (*stack_b == best -> target && get_pos(*stack_a, best -> data) <= list_size(*stack_a) / 2)
// // //                 ft_ra(stack_a);
// // //             else
// // //             ft_rra(stack_a);
// // //         }
// // //         ft_pb(stack_a, stack_b);
// // //     }
// // //     srt_three(stack_a);
// // //     b_to_a(stack_a, stack_b);
// // //     check_sort(stack_a);
// // // }// if (!get_pos(*stack_b, best -> target -> data) 
// //     // && !get_pos(*stack_a, best -> data))
// //     //     ft_rr(stack_a, stack_b);
// //     // else if (get_pos(*stack_b, best -> target -> data) 
// //     // && get_pos(*stack_a, best -> data))   
// //     //     ft_rrr(stack_a, stack_b);
// //     // else if (!get_pos(*stack_b, best -> target -> data) 
// //     // && get_pos(*stack_a, best -> data) > list_size(*stack_a) / 2)
// //     // {
// //     //     ft_rb(stack_b);
// //     //     ft_rra(stack_a);
// //     // }
// //     // else
// //     // {
// //     //     ft_rrb(stack_b);
// //     //     ft_ra(stack_a);
// //     // }
// //     // else if (!get_pos(*stack_a, best -> data) 
// //     // && get_pos(*stack_b, best -> target -> data))
// //     //     ft_ra(stack_a);
// //     // else
// //     //     ft_rra(stack_a);















// // int check_left(char *prev, char chr)
// // {
// //     // if (ft_isdigit(chr) == 1)
// //     // {
// //     //     if (ft_isdigit(*prev) == 1 || *prev == 32 || *prev == '+' || *prev == '-' || *prev == '\0')
// //     //     {
// //     //         // *prev = chr;
// //     //         return (0);
// //     //     }
// //     //     else
// //     //         return (1);
// //     // }
// //     // else
// //     // {
// //     //     if (*prev == 32 || *prev == '\0')
// //     //         return 0;
// //     //     else
// //     //     return 1;
// //     // }
// //     return (0);

// // }


// int check_right(char *chr)
// {
//     if (ft_isdigit(chr[0]))
//     {
//         if ((ft_isdigit(chr[1]) == 1) || chr[1] == 32 || chr[1] == '\0')
//             return 0;
//         else
//             return 1;
//     }
//     else
//     {
//         if (ft_isdigit(chr[1]) == 1)
//             return 0;
//         else
//             return 1;
//     }
// }


// void parsing(char *args)
// {
//     int i;
//     char check;

//     check = '\0';
//     i = 0;
//     if (args == NULL)
//         exit(0);
//     // printf("track before -> %c\n", check);
//     while(args[i])
//     {
//         if ((ft_isdigit(args[i]) == 1) || args[i] == '+' || args[i] == '-')
//         {
//             if(check_right(&args[i]) == 1)
//                 _free(&args, 'p');
//             else
//                 i++;
//         }
//         else if (args[i] == 32)
//         {
//             // check = args[i];
//             i++;
//         }
//         else
//         _free(&args, 'p');
        
        
//     }
//         // printf("\t\ttrack after -> %ctest\n", check);
// }