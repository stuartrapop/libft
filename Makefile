NAME = libft.a

SRCS_PATH_1 = ./sources_part1
SRCS_PATH_2 = ./sources_part2

OBJS_PATH = ./objects

SRCS_NAME_1 = ft_isalpha.c \
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
	ft_memset.c \
	ft_memcpy.c \
	ft_memccpy.c \
	ft_bzero.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_atoi.c \
	ft_strdup.c \
	ft_calloc.c

SRCS_NAME_2 = ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c

SRCS = $(addprefix $(SRCS_PATH_1)/,$(SRCS_NAME_1))
SRCS += $(addprefix $(SRCS_PATH_2)/,$(SRCS_NAME_2))

OBJS = ${SRCS:.c=.o}


HEADER_DIR = ./

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
