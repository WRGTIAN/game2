#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("***************************************\n");
	printf("**********  1.play   0.exit  **********\n");
	printf("***************************************\n");
}
int main()
{
	int arr[ROWS][COLS] = {0};
	int input = 1;
	int tmp = 0;
	char ret= 0;

	while (input)
	{   menu();
		printf("请选择：>");
		scanf("%d",&input);
		Init_board(arr);
		switch(input)
		{
		case 1:
			{
			do 
			{
				print_board(arr);
				Computer_move(arr);
				print_board(arr);
				if(Check(arr) != ' ')    
				{    
					ret=Check(arr);    
					break;    
				} 
				Player_move(arr);
				print_board(arr);
				ret=Check(arr);    
					

			}while (ret == ' ');
			winer(arr);
			break;
			}
		case 0:
			break;
		}

	} 
	return 0;
}