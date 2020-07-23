#include "./lotto.h"

void PlayLotto()
{
  int numsLotto[MAX_LOTTO_LENGTH] = {0,};
  int cntLottoNUm[MAX_LOTTO_LENGTH] = {0,};
  int currRandNum = 0;

  srand((unsigned)time(NULL));

  for (int i = 0; i < MAX_LOTTO_LENGTH; i++) {
    currRandNum = rand() % MAX_LOTTO_LENGTH;

    while (cntLottoNUm[currRandNum] != 0) {
      currRandNum = rand() % MAX_LOTTO_LENGTH;
    }
    numsLotto[i] = currRandNum;
    cntLottoNUm[currRandNum]++;
  }

  for (int i = 0; i < MAX_LOTTO_LENGTH; i++) {
    printf("num[%d] = %d\n", i, numsLotto[i]);    
  }

}