#ifndef ULS_H
#define ULS_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <malloc/malloc.h>
#include <pwd.h>
#include <grp.h>

typedef struct s_flag {
    int flag;
} t_flag;

typedef enum e_flag {
    a,
    A,
    R,
    G,
    h,
    @,
    e,
    T,
    1,
    C,
    r,
    t,
    u,
    c,
    S
} e_flag;


#endif


//
// Created by Artem Samson on 1/17/20.
//
