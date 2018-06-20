#include <stdio.h>
int main( ) {
   int digCount = 0, allCount = 0;
   char c;
   while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9')
       digCount++;
    allCount++;
   }
   printf("%d digits, %d chars, %.2f\%\n", digCount, allCount, ((float)(digCount)/allCount)*100.0);
   return 0;
} 
