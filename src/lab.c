#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "lab.h"

struct shell sh;

int main (int argc, char **argv)
{
  int c;

  //Parses Command line args
  while ((c = getopt(argc, argv, "v:")) != -1)
      switch (c){
        case 'v':
          printf("Shell Version: %d.%d\n", lab_VERSION_MAJOR, lab_VERSION_MINOR);
          exit(0);
        default:
          fprintf(stderr, "Usage: %s [-v]\n", argv[0]);
          exit(EXIT_FAILURE);
      }
    return 0;
}
