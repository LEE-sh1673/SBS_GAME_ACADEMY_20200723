#ifndef __tetris_H__
#define __tetris_H__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Pre-defined map width and height
#define MAP_W 10
#define MAP_H 10

// Pre-defined tetris block settings
#define BLOCK_SIZE 7
#define BLOCK_W 4
#define BLOCK_H 4

// number of objects in map and teris block
#define MAP_OBJ_SIZE 3
#define TETRIS_OBJ_SIZE 2

/* global variables */

// Pre-define Tetris block and Map objects.
extern char* tetrisObj[TETRIS_OBJ_SIZE];
extern char* mapObj[MAP_OBJ_SIZE];

// Pre-defined map
extern int map[MAP_W][MAP_H];

// Tetris blocks
extern int block[BLOCK_SIZE][BLOCK_W][BLOCK_H];

/* Functions */

// Clear the input buffer
extern void ClearBuffer();
// Play the teris game
extern void PlayTeris();

#endif