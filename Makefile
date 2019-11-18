NAME = libft.a

SRCS = ft_bzero.c\
	   ft_isalpha.c\
	   ft_isdigit.c\
	   ft_memset.c\
	   ft_strdup.c\
	   ft_strlcat.c\
	   ft_strlen.c\
	   ft_strnstr.c\
	   ft_substr.c\
	   ft_toupper.c\
	   ft_atoi.c\
	   ft_isalnum.c\
	   ft_isascii.c\
	   ft_isprint.c\
	   ft_strchr.c\
	   ft_strjoin.c\
	   ft_strlcpy.c\
	   ft_strncmp.c\
	   ft_strrchr.c\
	   ft_tolower.c\
	   ft_memcpy.c\
	   ft_calloc.c\
	   ft_memccpy.c\
	   ft_memmove.c\
	   ft_memchr.c\
	   ft_memcmp.c\
	   ft_putchar_fd.c\
	   ft_putstr_fd.c\
	   ft_putendl_fd.c\
	   ft_putnbr_fd.c\
	   ft_strtrim.c\
	   ft_split.c\
	   ft_strmapi.c\
	   ft_itoa.c\

SRCS_BONUS = ft_lstnew.c\
			 ft_lstadd_front.c\
	   		 ft_lstsize.c\
	   		 ft_lstlast.c\
	   		 ft_lstadd_back.c\
	   		 ft_lstdelone.c\
	   		 ft_lstclear.c\
	   		 ft_lstiter.c\

FLAGS = -Wall -Werror -Wextra

CC = gcc

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

$(NAME) :
	@$(CC) $(FLAGS) -c $(SRCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

all : $(NAME)

clean :
	@rm -rf $(OBJS) $(OBJS_BONUS)

fclean : clean
	@rm -rf $(NAME)

bonus : fclean
	@$(CC) $(FLAGS) -c $(SRCS) $(SRCS_BONUS)
	@ar rc $(NAME) $(OBJS) $(OBJS_BONUS)
	@ranlib $(NAME)

re : fclean all

.PHONY : clean fclean
