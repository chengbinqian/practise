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
		printf("�뽫Ҫ���������֣�");
		scanf("%d", &guess);

		if (guess > ret)
		{
			printf("�´��ˣ�");
		}
		else if(guess < ret)
		{
			printf("��С�ˣ�");
}
		else
		{
			printf("��ϲ�¶��ˣ�");
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
		printf("��ѡ��");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			game();
			break;
		case 2:
			printf("���˳�����");
			break;
		default:
				break;
		}
	} while (choice);
	return 0;

}