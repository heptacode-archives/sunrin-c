#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// srand(), rand()
#include <time.h> // time()
int main(){
	char act[4][5] = { "����", "����", "��" };
	int com, me;
	srand(time(NULL));
	while (1){
		printf("1: ����\n2: ����\n3: ��\n4: ����\n�Է� > ");
		scanf("%d", &me);
		com = rand() % 3 + 1;
		if (me != 4){
			switch (me){
				case 1: switch (com){ case 1: printf("�����ϴ�!"); break; case 2: printf("�����ϴ�!"); break; case 3: printf("�̰���ϴ�!"); break; } break;
				case 2: switch (com){ case 1: printf("�̰���ϴ�!"); break; case 2: printf("�����ϴ�!"); break; case 3: printf("�����ϴ�!"); break; } break;
				case 3: switch (com){ case 1: printf("�����ϴ�!"); break; case 2: printf("�̰���ϴ�!"); break; case 3: printf("�����ϴ�!"); break; } break;
				default: printf("�Է� ����"); continue;
			}
			printf("\n\n\n");
		}
	}
	return 0;
}
