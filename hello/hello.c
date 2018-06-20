#include <stdio.h>
int main() {
  int iVar;
  iVar = 10;
  char cVar = '!';
  float fVar = 1.02e2, fVar2;
  iVar = (int)fVar;
  fVar2 = iVar * 2;
  printf("Hey, world%c V%.1f\n", cVar,fVar2 / iVar);
  return 0;
}
//this is a comment
//comment #2
//change #3
