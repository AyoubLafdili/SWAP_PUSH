NAME = push_swap
HEADER = push_swap.h

SRC = main.c add_to_stack.c duplicate.c ft_atoi.c ft_isdigit.c ft_lstclear.c ft_split.c ft_strjoin.c \
	ft_strlcat.c ft_strlcpy.c ft_strlen.c max_min.c mem_free.c parsing.c crt_add_front.c sort_three.c\
	sort_rest.c list_size.c  set_target_a.c set_target_b.c check_sort.c get_cost.c _is_sorted.c max_min_v.c\
	push_b.c push_a.c swap_a.c swap_b.c swap_a_b.c rotate_a.c rotate_b.c rotate_a_b.c rev_rotate_a.c rev_rotate_b.c rev_rotate_a_b.c

FLAGS = -Wall -Wextra 

COMPILE = cc

REMOVE = rm -rf

OBJECT = $(SRC:.c=.o)

%.o:%.c $(HEADER)
	@$(COMPILE) $(FLAGS) -c $<

all: $(NAME)

$(NAME):$(OBJECT)
	@$(COMPILE) $(FLAGS) -o $(NAME) $(OBJECT)

clean:
	@$(REMOVE) $(OBJECT)

fclean: clean
	@$(REMOVE) $(NAME)

re: fclean all