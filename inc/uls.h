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

void do_ls(char[]);
void dostat(char *);
void show_file_info( char *, struct stat*);
void mode_to_letters(int, char[]);
char *uid_to_name(uid_t);
char *gid_to_name(gid_t);
int mx_strcmp(const char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);



#endif


//
// Created by Artem Samson on 1/17/20.
//
