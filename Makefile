# E89 Pedagogical & Technical Lab
# project:     ../../
# created on:  Sat May  6 20:00:44 2023
# 1st author:  user
# description: Makefile

NAME	= easy_header

SRCS  =	src/main.c				\
		src/strstr.c			\
		src/strstrbin.c			\
		src/strlen.c			\
		src/strdup.c			\
		src/strndup.c			\
		src/strdupcat.c			\
		src/strrchr.c			\
		src/strcat.c			\
		src/strcpy.c			\
		src/strcmp.c			\
		src/path.c				\
		src/print_header.c		\
		src/copy_file.c			\
		src/header_to_write.c	\
		src/search_file.c		\

OBJS      =	$(SRCS:.c=.o)

CFLAGS	 +=	-W -Wall -Wextra -Werror -Iinclude/

LDFLAGS	 +=

RM	  =	rm -vf

CC	 :=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)

save:
	git status
	git add src/*.c include/*.h Makefile
	git commit -m "$(NAME) save"
	git push

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
