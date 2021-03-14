#include <stdio.h>
int main() {
   int c = 5;     // cup C contains a liquid 5
   int *p = &c;   // cup C is placed on top of saucer called *p
   printf("%d \n", *p);  // If I access the saucer I will get the cup as well as liquid (5)

   c = 20;   // changing the liquid in a cup (from milk to juice)
   printf("%d \n", *p);  //If I access the saucer I will get the cup contains juice

   return 0;
}
