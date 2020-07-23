#include "./tetris.h"

void ClearBuffer()
{
  while(getchar() != '\n');
}

void PlayTeris()
{
  int type = 0;
  int key = 0;

  //srand((unsigned)time(NULL));

  while (1) {

    for (int i = 0; i < BLOCK_W; i++) {
      for (int j = 0; j < BLOCK_H; j++) {
        printf("%s", tetrisObj[block[type][i][j]]);
      }
      printf("\n");
    }

    fputs("명령을 입력하세요: (1번: 바꾸기, 2번: 종료) ", stdout);
    key = getchar();
    ClearBuffer();

    if (key == '1') {
      type = rand() % 7; 
    } else if (key == '2') {
      exit(0);
    }
  }
}