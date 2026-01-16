# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/19 16:05:59 by mleineku          #+#    #+#              #
#    Updated: 2026/01/16 18:17:57 by mleineku         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRCS = manip_pile.c \
	manip_r.c \
	manip_s_p.c \
	manip_rr.c \
	input_tchek.c \
	input_tchek_utils.c \
	fill_a.c \
	manip_index.c \
	count_sort.c \
	count_sort_utils.c \
	choose_sort.c \
	sort.c \
	do_r.c \
	do_rr.c \
	do_s_p.c \
	push_swap.c \
	sort_3_unit.c \
	manip_index2.c \
	push_back_a.c \
	free.c \
	push_swap_main.c

OBJ_DIR = obj
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

LIBFT_DIR = ../libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_INC = -I$(LIBFT_DIR)

# -------------------- RULES -------------------- #

all: $(LIBFT) $(NAME)

# Link executable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)

# Compile .c to .o in obj/
$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(LIBFT_INC) -c $< -o $@

# Compile libft
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

# Clean object files
clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(RM) -rf $(OBJ_DIR)

# Clean objects and executable
fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) -f $(NAME)

# Rebuild
re: fclean all

.PHONY: all clean fclean re