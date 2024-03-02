NAME = push_swap
M_HEADER = mandatory/push_swap.h
EX_FILE = checker
M_DIR = mandatory
B_DIR = bonus
B_O_DIR = bonus/operation_bonus
B_HEADER = bonus/checker_bonus.h
O_DIR = mandatory/operation
U_DIR = utils
U_HEADER = utils/utils.h
FLAGS = -Wall -Wextra 
COMPILE = cc
REMOVE = rm -rf

U_SRC = $(U_DIR)/ft_atoi.c $(U_DIR)/ft_isdigit.c $(U_DIR)/ft_split.c $(U_DIR)/ft_strjoin.c \
		$(U_DIR)/ft_strlcat.c $(U_DIR)/ft_strlcpy.c $(U_DIR)/ft_strlen.c $(U_DIR)/ft_substr.c \

M_SRC = $(M_DIR)/main.c $(M_DIR)/add_to_stack.c $(M_DIR)/duplicate.c $(M_DIR)/sort_rest.c \
		$(M_DIR)/list_size.c $(M_DIR)/ft_lstclear.c $(M_DIR)/set_target_b.c \
		$(M_DIR)/check_sort.c $(M_DIR)/get_cost.c $(M_DIR)/_is_sorted.c $(M_DIR)/max_min_v.c $(M_DIR)/max_min.c \
		$(M_DIR)/mem_free.c $(M_DIR)/parsing.c $(M_DIR)/crt_add_front.c $(M_DIR)/sort_three.c $(O_DIR)/push_b.c \
		$(O_DIR)/push_a.c $(O_DIR)/swap_a.c $(O_DIR)/swap_b.c $(O_DIR)/swap_a_b.c \
		$(O_DIR)/rev_rotate_a.c $(O_DIR)/rev_rotate_b.c $(O_DIR)/rev_rotate_a_b.c \
		$(O_DIR)/rotate_a.c $(O_DIR)/rotate_b.c $(O_DIR)/rotate_a_b.c



B_SRC = $(B_DIR)/checker_bonus.c $(B_DIR)/add_to_stack_bonus.c \
		$(B_DIR)/duplicate_bonus.c $(B_DIR)/list_clear_bonus.c \
		$(B_DIR)/max_min_bonus.c $(B_DIR)/parsing_bonus.c \
		$(B_DIR)/_free_bonus.c $(B_DIR)/crt_add_front_bonus.c \
		$(B_O_DIR)/rev_rotate_a_bonus.c $(B_O_DIR)/rev_rotate_b_bonus.c \
		$(B_O_DIR)/rev_rotate_ab_bonus.c $(B_O_DIR)/rotate_a_bonus.c \
		$(B_O_DIR)/push_b_bonus.c $(B_O_DIR)/rotate_b_bonus.c \
		$(B_O_DIR)/rotate_ab_bonus.c $(B_O_DIR)/swap_ab_bonus.c \
		$(B_O_DIR)/swap_a_bonus.c $(B_O_DIR)/swap_b_bonus.c \
		$(B_O_DIR)/push_a_bonus.c $(B_DIR)/get_next_line.c \
		$(B_DIR)/ft_strncmp.c $(B_DIR)/add_to_list_bonus.c \
		$(B_DIR)/_is_sorted_bonus.c $(B_DIR)/apply_ins_bonus.c 


M_OBJECT = $(M_SRC:.c=.o)
B_OBJECT = $(B_SRC:.c=.o)
U_OBJECT = $(U_SRC:.c=.o)

$(B_DIR)/%.o:$(B_DIR)/%.c $(B_DIR)/$(B_HEADER) $(U_HEADER)
	@$(COMPILE) $(FLAGS) -o $@ -c $< 

%.o:%.c $(M_HEADER) $(U_HEADER)
	@$(COMPILE) $(FLAGS) -o $@ -c $<


$(U_DIR)/%.o:$(U_DIR)/%.c
	@$(COMPILE) $(FLAGS) -o $@ -c $<

$(NAME):$(M_OBJECT) $(U_OBJECT)
	@$(COMPILE) $(FLAGS) -o $(NAME) $(M_OBJECT) $(U_OBJECT)

$(EX_FILE):$(B_OBJECT) $(U_OBJECT)
	@$(COMPILE) $(FLAGS) -o ./$(EX_FILE) $(B_OBJECT) $(U_OBJECT)


all: $(NAME)

bonus: $(EX_FILE)

clean:
	@$(REMOVE) $(M_OBJECT) $(B_OBJECT) $(U_OBJECT)

fclean: clean
	@$(REMOVE) $(NAME) $(EX_FILE)

re: fclean all