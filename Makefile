
all:
	@gcc -Wall -Werror -Wextra -g -fsanitize=address -D BUFFER_SIZE=1 *.c -o gnl && ./gnl
