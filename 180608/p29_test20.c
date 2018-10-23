#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// srand(), rand()
#include <time.h> // time()
int main(){
	char act[4][5] = { "가위", "바위", "보" };
	int com, me;
	srand(time(NULL));
	while (1){
		printf("1: 가위\n2: 바위\n3: 보\n4: 종료\n입력 > ");
		scanf("%d", &me);
		com = rand() % 3 + 1;
		if (me != 4){
			switch (me){
				case 1: switch (com){ case 1: printf("비겼습니다!"); break; case 2: printf("졌습니다!"); break; case 3: printf("이겼습니다!"); break; } break;
				case 2: switch (com){ case 1: printf("이겼습니다!"); break; case 2: printf("비겼습니다!"); break; case 3: printf("졌습니다!"); break; } break;
				case 3: switch (com){ case 1: printf("졌습니다!"); break; case 2: printf("이겼습니다!"); break; case 3: printf("비겼습니다!"); break; } break;
				default: printf("입력 오류"); continue;
			}
			printf("\n\n\n");
		}
	}
	return 0;
}
