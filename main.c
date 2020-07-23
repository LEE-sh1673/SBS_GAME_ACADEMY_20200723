#include <stdio.h>
#include <stdlib.h>

#define WIDTH 10
#define HEIGHT 10

#define OBJ_SIZE 3

typedef enum Obj {
  empty = 0,
  block,
  diamond,
} Obj;

char* objects[OBJ_SIZE] = {"□", "■", "♥"};
int map[WIDTH][HEIGHT] = {
  {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {0, 1, 2, 1, 1, 1, 1, 1, 1, 1},
  {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
  {0, 1, 1, 1, 1, 1, 1, 1, 1, 1},
};

int main(void) 
{
  for (int i = 0; i <WIDTH; i++) {
    for (int j = 0; j <HEIGHT; j++) {
      printf("%5s", objects[map[i][j]]);
    }
    printf("\n");
  }
  return 0;
}