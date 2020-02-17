//#include "uls.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct s_flag {
    int flag_l;
    int flag_a;
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
} t_flag;



void mx_validFlag(int argc, char **argv, t_flag *Neflag) {
	if (argv[1][0] == '-' && argv[1][1] != '-') {
		for (int i = 1; argv[1][i]; i++){
			i {
				// for (int j = i + 1; argv[1][j]; j++) {
				// 	if ()
				// 		Neflag->flag_l = 1;
				// }
			}
		}
	}
}

int main(int argc, char **argv) {
	if (argc > 1) {
		t_flag *Neflag = (t_flag *)malloc((t_flag));
		mx_memset(Neflag, 0, sizeof(t_flag)); //  зануляю структуру no trash

	}
    // if (argc == 2 && argv[1][0] == '-' && argv[1][1] != '-') {
    //     t_flag *Neflag;
    //     Neflag = (t_flag) malloc(sizeof(t_flag));
    //     Neflag->flag = 0 ;


    // }

    return 0;
}

/* TODO
     1) Проверить -- через strcmp
     2) Проверить входящие флаги, занести данные в структуру
     3) Допилить структуру флагов
     4) Достать через ф-ию lstat  данные про каждый каталог,что лежит в руте


 /* TODO
 *      Working with flags:
 *          1) initialize the structure;
 *          2) save flags in the structure and understand with and what flag we need to use;
 *      Working with Output:
 *          1) default output without any parameters, with one OR many folder(s)
 *          2) output in long format (like as -l does)
 *          3) output depending on flags.
