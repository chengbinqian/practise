#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void menu()
{
	
	printf("****************************************\n");
	printf("choose 1 to play game;  choose 2 to exit\n");
	printf("****************************************\n");
}


void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	//printf("%d\n", ret);

	while (1)
	{
		printf("请将要产生的数字：");
		scanf("%d", &guess);

		if (guess > ret)
		{
			printf("猜大了！");
		}
		else if(guess < ret)
		{
			printf("猜小了！");
}
		else
		{
			printf("恭喜猜对了！");
			break;
		}
		}
		
	}





int main()
{
	int choice = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			game();
			break;
		case 2:
			printf("已退出程序");
			break;
		default:
				break;
		}
	} while (choice);
	return 0;

}