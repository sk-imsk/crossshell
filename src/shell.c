#include "include.h"

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
        int result = handle_builtin(shell->input);
        if (result == -1){

        } else if (result != 0){
            printf("command %s failied\n", shell->input);
        }
    }
    
    

    return 0;
uninteractive:
        return -ENOTSUP;
}