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
	
	printf("1. 사칙연산\n");
	printf("2. 로그연산\n");
	printf("3. 종료\n\n");
	printf("메뉴 번호를 입력해주세요: ");
	menu_no = (int)getche()-48;
	printf("\n\n");
	
	return menu_no;
}

void arithmetic() {
	int c, num1, num2;
	while((c=arithmetic_menu()) != 6) {
		switch(c){
			case 1:
				printf("두 정수를 띄어쓰기로 구분하여 입력해주세요.(ex 5 7): ");
				scanf("%d %d", &num1, &num2);
				printf("결과: %d + %d = %d\n\n", num1, num2, num1+num2);
				break;
		
			case 2:
				printf("두 정수를 띄어쓰기로 구분하여 입력해주세요.(ex 5 7): ");
				scanf("%d %d", &num1, &num2);
				printf("결과: %d - %d = %d\n\n", num1, num2, num1-num2);
				break;
			
			case 3:
				printf("두 정수를 띄어쓰기로 구분하여 입력해주세요.(ex 5 7): ");
				scanf("%d %d", &num1, &num2);
				printf("결과: %d / %d = %f\n\n", num1, num2, (float)num1-num2);
				break;
				
			case 4:
			printf("두 정수를 띄어쓰기로 구분하여 입력해주세요.(ex 5 7): ");
				scanf("%d %d", &num1, &num2);
				printf("결과: %d * %d = %d\n\n", num1, num2, num1*num2);
				break;
				
			case 5:
				printf("두 정수를 띄어쓰기로 구분하여 입력해주세요.(ex 5 7): ");
				scanf("%d %d", &num1, &num2);
				printf("결과: %d %% %d = %d\n\n", num1, num2, num1%num2);
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
				printf("실수를 입력해주세요(ex 1.0): ");
				scanf("%lf", &num);
				printf("결과: log(%lf) = %lf\n\n", num, log(num));
				break;
		
			case 2:
				printf("실수를 입력해주세요(ex 1.0): ");
				scanf("%lf", &num);
				printf("결과: log10(%lf) = %lf\n\n", num, log10(num));
				break;
				
			default: break;
		}
	}
}

int arithmetic_menu() {
	int menu_no;
	
	printf("1. 덧셈 연산\n");
	printf("2. 뺄셈 연산\n");
	printf("3. 나눗셈 연산\n");
	printf("4. 곱셈 연산\n");
	printf("5. 나머지 연산\n");
	printf("6. 메인메뉴로 이동\n\n");
	printf("메뉴 번호를 입력해주세요: ");
	menu_no = (int)getche()-48;
	printf("\n\n");
	
	return menu_no;
}

int log_menu() {
	int menu_no;
	
	printf("1. 자연로그 연산\n");
	printf("2. 상용로그 연산\n");
	printf("3. 메인메뉴로 이동\n\n");
	printf("메뉴 번호를 입력해주세요: ");
	menu_no = (int)getche()-48;
	printf("\n\n");
	
	return menu_no;
}
