#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int
main (int argc, char **argv)
{

  while ((c = getopt (argc, argv, "v:")) != -1)
    switch (c)
      {

      case 'v':

      fprintf(lab_VERSION_MAJOR)
        break;
      
      default:
        abort ();
      }


}
