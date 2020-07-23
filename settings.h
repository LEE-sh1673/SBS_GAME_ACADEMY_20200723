#ifndef __settings_H__
#define __settings_H__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Pre-defined map width and height
#define WIDTH 10
#define HEIGHT 10

// Pre-defined tetris block settings
#define BLOCK_SIZE 7
#define BLOCK_W 4
#define BLOCK_H 4


// Pre defined enumerators (for map)
typedef enum Obj {
  empty = 0,
  obstacle,
  diamond,
} Obj;

// number of objects drawn in map
#define MAP_OBJ_SIZE 3

// components (numbers) in teris block 
#define TETRIS_OBJ_SIZE 2

static char* objects[MAP_OBJ_SIZE] = {"□", "■", "♥"};
static char* tetrisObj[TETRIS_OBJ_SIZE] = {" ", "■"};

// Pre-defined map
static int map[WIDTH][HEIGHT] = {
  {1, 0, 1, 1, 1, 1, 1, 1, 1, 1},
  {1, 0, 1, 1, 1, 1, 1, 1, 1, 1},
  {1, 0, 0, 1, 1, 1, 1, 1, 1, 1},
  {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
  {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
  {1, 0, 0, 2, 0, 0, 0, 0, 0, 1},
  {1, 1, 1, 1, 1, 1, 0, 0, 0, 1},
  {1, 1, 1, 1, 1, 1, 0, 0, 0, 1},
  {1, 1, 1, 1, 1, 1, 0, 0, 0, 1},
  {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
};

// Tetris blocks
static int block[BLOCK_SIZE][BLOCK_W][BLOCK_H] = {
  {
    {0, 0, 0, 0},
    {0, 1, 1, 0},
    {0, 1, 1, 0},
    {0, 0, 0, 0},
  },
  {
    {1, 0, 0, 0},
    {1, 0, 0, 0},
    {1, 0, 0, 0},
    {1, 0, 0, 0},
  },
  {
    {0, 0, 0, 0},
    {1, 1, 0, 0},
    {0, 1, 1, 0},
    {0, 0, 0, 0},
  },
  {
    {0, 0, 0, 0},
    {0, 1, 1, 0},
    {1, 1, 0, 0},
    {0, 0, 0, 0},
  },
  {
    {0, 0, 0, 0},
    {1, 0, 0, 0},
    {1, 1, 1, 0},
    {0, 0, 0, 0},
  },
  {
    {0, 0, 0, 0},
    {0, 0, 1, 0},
    {1, 1, 1, 0},
    {0, 0, 0, 0},
  },
  {
    {0, 0, 0, 0},
    {0, 1, 0, 0},
    {1, 1, 1, 0},
    {0, 0, 0, 0},
  },
};

// Clear the input buffer
extern void ClearBuffer();

// Play the teris game
extern void PlayTeris();

#endif