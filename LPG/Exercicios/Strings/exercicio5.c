#include <stdlib.h>
#include <stdio.h>

int main () {
  char palavra[15] = "abcd";
  char palavra2[15] = "cd";
  
   for(int i = 0;palavra[i] != '\0'; i++) {
     for(int j = 0;palavra[i] != '\0'; j++) {
        if (palavra2[i] != palavra[j]) {
            j++;
            i = 0;
        }
        else {
            i++;
            j++;
        }
     }
        if (palavra2[i] == '\0')
      printf("true");
   else
      printf("false");
   } 


}
