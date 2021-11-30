#include <stdio.h>
#include <string.h>
#include "memlib.h"
#include "mm.h"

int main(){
   char *str;
   int *val;

   printf("Word Size: %ld\n",sizeof(size_t));
   mem_init();
   str = mm_malloc(20);
   val = mm_malloc(sizeof(int));
   strcpy(str,"This is a test");
   *val=255;
   printf("%s %d\n",str, *val);
   mm_free(str);
   mm_free(val);

   return 0;
}
