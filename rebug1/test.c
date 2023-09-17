#include <stdio.h>
#include <math.h>

int main () {
//   char str[80];
    char str [44];
    byte bvar [16];
    
    for (int i = 0; i < 16; i = i + 1) {
      sprintf(str + i * 2,"%02x",(ulong)bvar[i]);
    }
//   sprintf(str, "Value of Pi = %f", M_PI);
   puts(str);
   
   return(0);
}