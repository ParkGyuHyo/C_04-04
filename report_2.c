#include <stdio.h>
#include <conio.h>

int main(void) {
	char key;
	int num = 1000;
	int up_num = 100;
	int down_num = 100;
	
	while (1){
		printf("방향키를 눌러주세요(↑:증가, ↓:감소, ←:감소값 조절, →:증가값 조절, 그 외 키: 종료): ");
		getch();
		key = getch();
		
		switch(key){
			case 72: num += up_num; printf("Result Number : %d\n", num); break;
			case 80: num -= down_num; printf("Result Number : %d\n", num); break;
			case 75:
				system("cls");
				printf("감소시킬 숫자를 조절해주세요. (현재:%d): ", down_num);
				scanf("%d", &down_num);
				break;
			case 77:
				system("cls");
				printf("증가시킬 숫자를 조절해주세요. (현재:%d): ", up_num);
				scanf("%d", &up_num);
				break;
			default:
				return;
		}
	}
	
	return 0;
}
