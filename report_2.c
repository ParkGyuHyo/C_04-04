#include <stdio.h>
#include <conio.h>

int main(void) {
	char key;
	int num = 1000;
	int up_num = 100;
	int down_num = 100;
	
	while (1){
		printf("����Ű�� �����ּ���(��:����, ��:����, ��:���Ұ� ����, ��:������ ����, �� �� Ű: ����): ");
		getch();
		key = getch();
		
		switch(key){
			case 72: num += up_num; printf("Result Number : %d\n", num); break;
			case 80: num -= down_num; printf("Result Number : %d\n", num); break;
			case 75:
				system("cls");
				printf("���ҽ�ų ���ڸ� �������ּ���. (����:%d): ", down_num);
				scanf("%d", &down_num);
				break;
			case 77:
				system("cls");
				printf("������ų ���ڸ� �������ּ���. (����:%d): ", up_num);
				scanf("%d", &up_num);
				break;
			default:
				return;
		}
	}
	
	return 0;
}
