//
//  main.c
//  crossshell
//
//  Created by evan matthews on 4/6/2025.
//

#include <errno.h>
#include <stdbool.h>
#include "shell.h"

int main(int argc, char** argv){
    shell_loop(true);

    return -ENOTSUP;
    
}
