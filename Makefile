NAME = libft.a

SRCS_PATH = ./sources

OBJS_PATH = ./objects

SRCS_NAME = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_memset.c

SRCS = $(addprefix $(SRCS_PATH)/,$(SRCS_NAME))

OBJS = ${SRCS:.c=.o}


HEADER_DIR = ./includes/

FLAG = -Wall -Wextra -Werror -I$(HEADER_DIR)

CC = GCC $(FLAG)

%.o:%.c
	$(CC) -o $@ -c $<
#OBJS    := $(patsubst $(SRCS_PATH)/%.c,$(OBJS_PATH)/%.o,$(SRCS_NAME))

#$(OBJS_PATH)/%.o: $(SRCS_PATH)/%.c 
#	$(CC) $(CFLAGS) -c $< -o $@

${NAME} : ${OBJS}
	ar rcs $(NAME) $(OBJS)

all : ${NAME}

clean :
	rm -f ${OBJS}
fclean : clean
	rm -f ${NAME}
re : fclean all

.PHONY : all clean fclean re
