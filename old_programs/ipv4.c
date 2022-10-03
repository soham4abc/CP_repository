#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
int validate_number(char *str) {
   while (*str) {
      if(!isdigit(*str)){ 
         return 0;
      }
      str++;
   }
   return 1;
}
int validate_ip(char *ip) {
   int i, num, dots = 0;
   char *ptr;
   if (ip == NULL)
      return 0;
      ptr = strtok(ip, "."); 
      if (ptr == NULL)
         return 0;
   while (ptr) {
      if (!validate_number(ptr)) 
 
         return 0;
         num = atoi(ptr); 
         if (num >= 0 && num <= 255) {
            ptr = strtok(NULL, ".");
            if (ptr != NULL)
               dots++; 
         } else
            return 0;
    }
    if (dots != 3) 
       return 0;
      return 1;
}
int main() {

   char ip[10000];
   scanf("%s",&ip);   
   validate_ip(ip)? printf("Valid\n"): printf("Not valid\n");
   return 0;
   
}