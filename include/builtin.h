// builtin.h
#define bulitins_count 3
int cd(char* dir);
int handle_builtin(char *input);


typedef int (*builtin_func)(char *args);
typedef struct {
    const char *name;
    builtin_func function;
} builtin_command;
extern int exit_(char *args);
extern builtin_command builtins[];
