#include "include.h"
int cd(char* dir){
    printf("sorry cd isent supported\n");
}
int exit_(char *args){ 
    exit(3);
}
builtin_command builtins[] = {
        {"cd", cd},
        {"exit", exit_},
    };

int handle_builtin(char *input){
    char *cmd = strtok(input, "");
    char *args = strtok(NULL,"");

    for (int i = 0; i < bulitins_count; i++){
        if (strcmp(cmd, builtins[i].name ) == 0){
            return builtins[i].function(args);

        }

    }
    return -1;

}