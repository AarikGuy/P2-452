#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "lab.h"

int main (int argc, char **argv)
{
  int c;

  while ((c = getopt(argc, argv, "v:")) != -1)
      switch (c){
        case 'v':
          printf("Shell Version: %d.%d\n", lab_VERSION_MAJOR, lab_VERSION_MINOR);
          exit(0);
        default:
          abort ();
      }
    return 0;
}
