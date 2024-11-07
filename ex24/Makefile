# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcauchy- <mcauchy-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 10:54:59 by mcauchy-          #+#    #+#              #
#    Updated: 2024/11/07 16:17:55 by mcauchy-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= 	./srcs/ft_putchar.c ./srcs/ft_putstr ./srcs/ft_strcmp \
			./srcs/ft_strlen ./srcs/ft_swap

NAME	=	libft.a

HEADER	= 	./includes

CC		= 	cc

CFLAGS	= 	-Wall -Wextra -Werror

OBJS	=	$(SRCS:.c=.o)

all		=	$(NAME)

$(NAME)	:	$(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

.c.o	:
			$(CC) $(CFLAGS) -c -I $(HEADER) $< -o $@

clean	=
			/bin/rm -f $(OBJS)

fclean	=	clean
			/bin/rm -f $(NAME)

re		=	fclean all