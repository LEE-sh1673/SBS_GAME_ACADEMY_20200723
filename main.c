#include "./settings.h"
#define ARRSIZE(array) ((int)(sizeof(array)/sizeof(array[0])))

int main(void) 
{
  //PlayTeris();

  int num[7] = {0,};
  int len = ARRSIZE(num);

  srand((unsigned)time(NULL));

  for (int i = 0; i < len; i++) {
    num[i] = rand() % len;
    printf("num[%d] = %2d\n", i, num[i]);
  }

  return 0;
}