NAME = uls
INC = inc/uls.h
OBJH = obj/uls.h
SRCS = src/main.c src/mx_flag_L.c
SRC = main.o mx_flag_L.o
OBJC = obj/main.c obj/mx_flag_L.c
OBJ = obj/main.o obj/mx_flag_L.o

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
