CXX = clang++

SRCS = main.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = whatever

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all : ${NAME}

${NAME} : ${OBJS}
	${CXX} ${CXXFLAGS} ${SRCS} -o ${NAME}

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all