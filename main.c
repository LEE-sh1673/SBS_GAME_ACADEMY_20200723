#include "./games/tetris/tetris.h"
#include "./games/lotto/lotto.h"

int main(void) 
{
  //PlayTeris();

  for (int i  = 0; i < 10; i++)
  {
    PlayLotto();
    printf("\n");
  }

  return 0;
}