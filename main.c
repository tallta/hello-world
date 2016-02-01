/* main.c */
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
  FILE *fp=NULL;
  
  fp=fopen(argv[1],"rb");
  if (fp==NULL) {
    goto RELEASE;
  }
  
  //
  
RELEASE:
  if (fp!=NULL) {
    fclose(fp);
    fp=NULL;
  }
  return (0);
}
