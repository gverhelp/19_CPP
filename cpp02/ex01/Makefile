CC = clang++

SRCS = main.cpp \
		Fixed.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = fixed

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all : ${NAME}

${NAME} : ${OBJS}
	${CC} ${CPPFLAGS} ${SRCS} -o ${NAME}

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all