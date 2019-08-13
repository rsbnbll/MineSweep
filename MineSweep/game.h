#pragma once
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MINE_NUM 10
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
void InitBoard(char board[][ROWS], int row, int col, char set);
void Show(char board[][ROWS], int row, int col);
void SetMine(char board[][ROWS], int row, int col);
void FindMine(char mine[][ROWS], char mineInfo[][ROWS], int row, int col);