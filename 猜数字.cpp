#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
void menu(int count)//�˵�
{
	printf("******************************\n");
	printf("*   1��ʼ��Ϸ    0������Ϸ   *\n");
	printf("******************************\n");
	printf("*****���Ѿ�����%-3d����********\n",count);
	printf("��ѡ��:\n");
}
void game(int *count)
{
	int get,num;
	*count+=1;
	num=rand()%100+1;
	while(1)
	{
		//printf("%d",num);
		printf("�²������:\n");
		scanf("%d",&get);
		if(get>num)
		{
			printf("����\n");
		}
		else if(get<num)
		{
			printf("С��\n");
		}
		else 
		{
			printf("��ϲ�㣬�¶���\n");putchar(7);Sleep(3000);system("cls");break;
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
		default:printf("ѡ�����,����������:");scanf("%d",&get);
		}
		
	}while(get);
	return 0;
}