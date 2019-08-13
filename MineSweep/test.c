#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu(){
	printf("###########################\n");
	printf("###########################\n");
	printf("##########0.结束游戏#######\n");
	printf("##########1.开始游戏#######\n");
	printf("###########################\n");
	printf("###########################\n");
}                  //展开的话 用递归  
void game(){
	char mine[ROWS][COLS] = { 0 };
	char mineInfo[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(mineInfo, ROWS, COLS, '*');
	ShowBoard(mineInfo, ROW, COL);
	SetMine(mine, ROW, COL);
	FindMine(mine, mineInfo, ROW, COL);
}
int main(){
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请输入你的选择-》");
		scanf("%d", &input);
		switch (input){
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请输入你的数字\n");
			break;
		}
	} while (input);
	return 0;
}