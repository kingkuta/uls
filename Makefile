NAME = uls
INC = inc/uls.h
OBJH = obj/uls.h
SRCS = src/mx_main.c
SRC = mx_main.o
OBJC = obj/mx_main.c
OBJ = obj/mx_main.o

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean
install:
	@ make install -sC libmx/
	@ mkdir obj
	@ cp $(SRCS) $(INC) ./obj
	@ clang $(CFLAGS) -c $(OBJC)
	@ cp $(SRC) ./obj
	@ clang $(CFLAGS) $(OBJ) libmx/libmx.a -o $(NAME)
uninstall: clean
	@ make uninstall -sC libmx/
	@ rm -f $(NAME)
clean:
	@ make clean -sC libmx/
	@ rm -rf ./obj
	@ rm -rf $(SRC)
reinstall: uninstall install
