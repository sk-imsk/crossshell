#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdbool.h>
#include <stdlib.h>
#include "shell.h"

int shell_loop(bool is_intactive){
    if (is_intactive == false){
        goto uninteractive;
    }
    struct shell_c * shell = malloc(sizeof(struct shell_c));
    strcpy(shell->prompt, "crosshell>");
    while (!shell->done){
        printf("%s", shell->prompt);
        scanf("%99s", shell->input);
        // execute program

    }
    
    

    return 0;
uninteractive:
        return -ENOTSUP;
}