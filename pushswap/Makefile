# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mleineku <mleineku@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/19 16:05:59 by mleineku          #+#    #+#              #
#    Updated: 2025/06/08 15:41:36 by mleineku         ###   ########.fr        #
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

OBJS = $(SRCS:.c=.o)

LIBFT_DIR = ../libft
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_INC = -I$(LIBFT_DIR)

all: $(LIBFT) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)

# Compile les .o à partir de tes .c
%.o: %.c
	$(CC) $(CFLAGS) $(LIBFT_INC) -c $< -o $@

# Compile la libft (en appelant son propre Makefile)
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re: fclean all