#include <stdio.h>
#include <getopt.h>
int main ( int argc, char **argv) {
 int option_index = 0;
 char *pid = NULL;
 while (( option_index = getopt(argc, argv, "p:sUSvc")) != -1){
   switch (option_index) {
     case 'p':
      pid = optarg;
       printf("p\n");
       printf("pid %s\n",pid);
       break;
     case 's':
       printf("s\n");
       break;
 case 'U':
       printf("U\n");
       break;
 case 'S':
       printf("S\n");
       break;
 case 'v':
       printf("v\n");
       break;
 case 'c':
       printf("c\n");
       break;
     default:
      printf("default\n");
      return 1;
     } 
   } 
 return 0;
} 
