#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>
#include <string.h>
#include <errno.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "lab.h"

struct shell sh;

// Displays the prompt
char *get_prompt(const char *env) {
  char *prompt = getenv(env);
  return prompt ? prompt : "myshell> ";
}

int change_dir(char **dir){
  const char *target = dir[1];

  if(target == NULL){
    target = getenv("HOME");
    if(!target){
      struct passwd *pw = getpwuid(getuid());
      if(pw){
        target = pw->pw_dir;
      }else{
        fprintf(stderr, "cd: Cannot determine home directory\n");
        return -1;
      }
    }
  }

  if(chdir(target) != 0){
    perror("cd");
    return -1;
  }

  return 0;
}

char **cmd_parse(char const *line){

}

void cmd_free(char ** line){

}

char *trim_white(char *line){

}

bool do_builtin(struct shell *sh, char **argv){

}

void sh_init(struct shell *sh){

}

void sh_destroy(struct shell *sh){
  free(sh->prompt);
}

//Parses Command line args
void parse_args(int argc, char **argv){
  int c;
  while ((c = getopt(argc, argv, "v:")) != -1) {
      switch (c) {
          case 'v':
              printf("Shell Version: %d.%d\n", lab_VERSION_MAJOR, lab_VERSION_MINOR);
              exit(0);
          default:
              fprintf(stderr, "Usage: %s [-v]\n", argv[0]);
              exit(EXIT_FAILURE);
      }
  }
}
