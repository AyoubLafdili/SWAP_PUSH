NAME = push_swap
B_NAME = checker

M_HEADER = mandatory/push_swap.h
B_HEADER = bonus/checker.h

M_DIR = mandatory
B_DIR = bonus

COMPILE = cc
FLAGS = -Wall -Wextra -Werror
REMOVE = rm -f

M_SRC = $(M_DIR)/sort_three.c $(M_DIR)/main.c $(M_DIR)/add_to_stack.c \
		$(M_DIR)/duplicate.c $(M_DIR)/sort_rest.c $(M_DIR)/lstclear.c \
		$(M_DIR)/list_size.c $(M_DIR)/set_target.c $(M_DIR)/check_sort.c \
		$(M_DIR)/get_cost.c $(M_DIR)/_is_sorted.c $(M_DIR)/get_max_min.c \
		$(M_DIR)/max_min_check.c $(M_DIR)/mem_free.c $(M_DIR)/parsing.c \
		$(M_DIR)/crt_add_front.c $(M_DIR)/push_b.c $(M_DIR)/push_a.c \
		$(M_DIR)/swap_a.c $(M_DIR)/swap_b.c $(M_DIR)/rev_rotate_a.c \
		$(M_DIR)/rev_rotate_b.c $(M_DIR)/rotate_a.c $(M_DIR)/rotate_b.c \
		$(M_DIR)/rotate_a_b.c $(M_DIR)/atoi_check.c $(M_DIR)/swap_a_b.c \
		$(M_DIR)/rev_rotate_a_b.c
		

B_SRC = $(B_DIR)/checker.c $(B_DIR)/add_to_stack_bonus.c \
		$(B_DIR)/duplicate_bonus.c $(B_DIR)/list_clear_bonus.c \
		$(B_DIR)/max_min_bonus.c $(B_DIR)/parsing_bonus.c \
		$(B_DIR)/_free_bonus.c $(B_DIR)/crt_add_front_bonus.c \
		$(B_DIR)/add_to_list_bonus.c \
		$(B_DIR)/_is_sorted_bonus.c $(B_DIR)/apply_ins_bonus.c \
		$(B_DIR)/rev_rotate_a_bonus.c $(B_DIR)/push_a_bonus.c \
		$(B_DIR)/atoi_check_bonus.c $(B_DIR)/rev_rotate_ab_bonus.c \
		$(B_DIR)/rotate_a_bonus.c $(B_DIR)/push_b_bonus.c \
		$(B_DIR)/rotate_b_bonus.c $(B_DIR)/rotate_ab_bonus.c \
		$(B_DIR)/swap_ab_bonus.c $(B_DIR)/swap_a_bonus.c \
		$(B_DIR)/swap_b_bonus.c $(B_DIR)/rev_rotate_b_bonus.c

M_OBJECT = $(M_SRC:.c=.o)

B_OBJECT = $(B_SRC:.c=.o)

bonus/%.o:bonus/%.c $(B_HEADER)
	$(COMPILE) $(FLAGS) -o $@ -Ibonus -Ilibft -c $<

%.o:%.c $(M_HEADER)
	$(COMPILE) $(FLAGS) -Imandatory -Ilibft -o $@ -c $<

$(NAME):$(M_OBJECT)
	make -C libft
	$(COMPILE) $(FLAGS) -o $(NAME) -Llibft -lft  $(M_OBJECT)

$(B_NAME):$(B_OBJECT)
	make -C libft
	$(COMPILE) $(FLAGS) -o $(B_NAME) -Llibft -lft $(B_OBJECT)

all: $(NAME)

bonus: $(B_NAME)

clean:
	make -C libft clean
	$(REMOVE) $(M_OBJECT) $(B_OBJECT)

fclean: clean
	make -C libft fclean
	$(REMOVE) $(NAME) $(B_NAME)

re: fclean all

.PHONY: clean