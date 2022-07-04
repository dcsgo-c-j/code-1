#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
void menu(int count)//菜单
{
	printf("******************************\n");
	printf("*   1开始游戏    0结束游戏   *\n");
	printf("******************************\n");
	printf("*****你已经玩了%-3d局了********\n",count);
	printf("请选择:\n");
}
void game(int *count)
{
	int get,num;
	*count+=1;
	num=rand()%100+1;
	while(1)
	{
		//printf("%d",num);
		printf("猜猜这个数:\n");
		scanf("%d",&get);
		if(get>num)
		{
			printf("大了\n");
		}
		else if(get<num)
		{
			printf("小了\n");
		}
		else 
		{
			printf("恭喜你，猜对了\n");putchar(7);Sleep(3000);system("cls");break;
		}
		
	}
}
int main()
{
	int get,count=0;
	system("title DCSGO");
	srand((unsigned int)time(NULL));
	do
	{
		menu(count);
		scanf("%d",&get);
		switch(get)
		{
		case 0:break;
		case 1:game(&count);break;
		default:printf("选择错误,请重新输入:");scanf("%d",&get);
		}
		
	}while(get);
	return 0;
}