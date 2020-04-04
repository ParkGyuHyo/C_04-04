#include <stdio.h>
#include <conio.h>
#include <math.h>

int menu_display();
void arithmetic();
void logm();
int arithmetic_menu();
int log_menu();

int main(void) {
	int c;
	
	while((c=menu_display()) != 3) {
		switch(c){
			case 1: arithmetic();
				break;
			
			case 2: logm();
				break;
				
			default: break;
		}
	}
	
	return 0;	
}

int menu_display() {
	int menu_no;
	
	printf("1. ��Ģ����\n");
	printf("2. �α׿���\n");
	printf("3. ����\n\n");
	printf("�޴� ��ȣ�� �Է����ּ���: ");
	menu_no = (int)getche()-48;
	printf("\n\n");
	
	return menu_no;
}

void arithmetic() {
	int c, num1, num2;
	while((c=arithmetic_menu()) != 6) {
		switch(c){
			case 1:
				printf("�� ������ ����� �����Ͽ� �Է����ּ���.(ex 5 7): ");
				scanf("%d %d", &num1, &num2);
				printf("���: %d + %d = %d\n\n", num1, num2, num1+num2);
				break;
		
			case 2:
				printf("�� ������ ����� �����Ͽ� �Է����ּ���.(ex 5 7): ");
				scanf("%d %d", &num1, &num2);
				printf("���: %d - %d = %d\n\n", num1, num2, num1-num2);
				break;
			
			case 3:
				printf("�� ������ ����� �����Ͽ� �Է����ּ���.(ex 5 7): ");
				scanf("%d %d", &num1, &num2);
				printf("���: %d / %d = %f\n\n", num1, num2, (float)num1-num2);
				break;
				
			case 4:
			printf("�� ������ ����� �����Ͽ� �Է����ּ���.(ex 5 7): ");
				scanf("%d %d", &num1, &num2);
				printf("���: %d * %d = %d\n\n", num1, num2, num1*num2);
				break;
				
			case 5:
				printf("�� ������ ����� �����Ͽ� �Է����ּ���.(ex 5 7): ");
				scanf("%d %d", &num1, &num2);
				printf("���: %d %% %d = %d\n\n", num1, num2, num1%num2);
				break;
			
			default: break;
		}
	}
}

void logm() {
	int c;
	double num;
	while((c=log_menu()) != 3) {
		switch(c){
			case 1:
				printf("�Ǽ��� �Է����ּ���(ex 1.0): ");
				scanf("%lf", &num);
				printf("���: log(%lf) = %lf\n\n", num, log(num));
				break;
		
			case 2:
				printf("�Ǽ��� �Է����ּ���(ex 1.0): ");
				scanf("%lf", &num);
				printf("���: log10(%lf) = %lf\n\n", num, log10(num));
				break;
				
			default: break;
		}
	}
}

int arithmetic_menu() {
	int menu_no;
	
	printf("1. ���� ����\n");
	printf("2. ���� ����\n");
	printf("3. ������ ����\n");
	printf("4. ���� ����\n");
	printf("5. ������ ����\n");
	printf("6. ���θ޴��� �̵�\n\n");
	printf("�޴� ��ȣ�� �Է����ּ���: ");
	menu_no = (int)getche()-48;
	printf("\n\n");
	
	return menu_no;
}

int log_menu() {
	int menu_no;
	
	printf("1. �ڿ��α� ����\n");
	printf("2. ���α� ����\n");
	printf("3. ���θ޴��� �̵�\n\n");
	printf("�޴� ��ȣ�� �Է����ּ���: ");
	menu_no = (int)getche()-48;
	printf("\n\n");
	
	return menu_no;
}
