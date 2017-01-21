<<<<<<< HEAD
<<<<<<< HEAD
﻿#define  _CRT_SECURE_NO_WARNINGS  1  
#include <stdio.h>
#include "game.h"

void Init_board(int arr[ROWS][COLS])
{
	int rows = 0;
	int cols = 0;
	for (rows=0; rows<ROWS; rows++)
	{
		for (cols=0; cols<COLS; cols++)
		{
			arr[rows][cols] = ' ';
		}

	}
}
void print_board(int arr[ROWS][COLS])
{
	int rows = 0;
	int cols = 0;
	for(cols=0;cols<COLS;cols++)    
	{    
		printf(" %c | %c | %c \n",arr[cols][0],arr[cols][1],arr[cols][2]);   
		if(cols != 2)  
			printf("---|---|---");    
		printf("\n");    
	}   
}
int board_full(int arr[ROWS][COLS])
{    
	int rows = 0;    
	int cols = 0;    
	for (rows = 0; rows < ROWS; rows++)    
	{    
		for (cols = 0; cols <COLS; cols++)    
		{    
			if (arr[cols][rows] == ' ')    
			{    
				return 0;
			}    
		}    
	}    
	return 1;    
} 
void Computer_move(int arr[ROWS][COLS])
{
	srand((unsigned)time(NULL)); 
	printf("电脑下子：\n");
	while (board_full(arr) != 1)
	{		
		int rows = 0;
	    int cols = 0;
		rows = rand()%ROWS;
		cols = rand()%COLS;
		if (arr[rows][cols] == ' ')
		{
			arr[rows][cols] = 'X';
			break;
		}
		else    
		{    
			if (board_full(arr) == 0)    
			{    
				continue;    
			}    
			else    
			{    
				break;    
			}    
		}
	}
}
void Player_move(int arr[ROWS][COLS])
{
	int rows = 0;
	int cols = 0;
	while(board_full(arr) != 1)
	{
		printf("人下子，请输入坐标：> ");
		scanf("%d%d",&rows,&cols);
		rows--;
		cols--;
		if (arr[rows][cols] == ' ')
		{
			arr[rows][cols] ='0';
			break;
		}
		else
		{
			printf("输入错误，重新输入！！！");
			continue;
=======
=======
>>>>>>> 5b5ea4c74065a4126e25c90400e2da76177dc27b
#include"ThreeChess.h"
#define _CRT_SECURE_NO_WARNINGS 1

void FunTest()
{
	int select = 0;

	while(1)
	{
		printf("------------------------------------\n");
		printf("------------- 1. play---------------\n");
		printf("------------- 2. exit---------------\n");
		printf("------------------------------------\n");
		printf("请选择:>\n");
		scanf("%d",&select);
		switch(select)
		{
		case 1:
			Game();
			break;
		case 2:
			return;
		default:
			break;
<<<<<<< HEAD
>>>>>>> 5b5ea4c74065a4126e25c90400e2da76177dc27b
=======
>>>>>>> 5b5ea4c74065a4126e25c90400e2da76177dc27b
		}
	}
}

<<<<<<< HEAD
<<<<<<< HEAD
char Check(int arr[ROWS][COLS])
{
	int rows = 0;
	int ret = 0;
	   
	for (rows = 0; rows < ROWS; rows++)    //判断行和列
	{    
		if ((arr[rows][0] == arr[rows][1]) && (arr[rows][2] == arr[rows][1]))    
		{    
			return arr[rows][0];    
		}
		if ((arr[0][rows] == arr[1][rows]) && (arr[2][rows] == arr[1][rows]))    
		{    
			return arr[0][rows];    
		} 
	}   
	if ((arr[0][0] == arr[1][1]) && (arr[1][1] == arr[2][2]))   //判断斜 
	{    
		return arr[0][0];    
	}    
	if ((arr[0][2] == arr[1][1]) && (arr[1][1] == arr[2][0]))   //判断斜  
	{    
		return arr[0][2];    
	} 
	if (board_full(arr) == 1)    
	{    
		return 'q';    
	} 
	
	return ' ';    
}
void winer(int arr[ROWS][COLS])
{
	char ret = 0;
	ret = Check(arr);
	if (ret == 'X')
	{
		printf("电脑赢！！！\n");
	}
	if (ret == '0')
	{
		printf("玩家赢！！！\n");
	}
	if (ret == 'q')
	{
		printf("平局！！！\n");
	}

=======
=======
>>>>>>> 5b5ea4c74065a4126e25c90400e2da76177dc27b
int main()
{
	FunTest();
	return 0;
<<<<<<< HEAD
>>>>>>> 5b5ea4c74065a4126e25c90400e2da76177dc27b
=======
>>>>>>> 5b5ea4c74065a4126e25c90400e2da76177dc27b
}
