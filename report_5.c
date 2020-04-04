#include<stdio.h>
#include<math.h>
#include<stdarg.h>
#include<string.h>
#include<stdlib.h>

double mean(int cnt, ...);
int median(int cnt, ...);
int* ascending_sort(int cnt, int arr[]);
char* concatnate_str(int cnt, ...);

int main(void) {
	int i;
	int send_arr[9] = {5, 7, 6, 9, 1, 3, 2, 8, 4};
	int *return_arr;
	char *return_str;
	
	printf("1. 인수들(5, 7, 6, 9, 1, 3, 2, 8, 4)의 평균 : %lf\n\n", mean(9, 5, 7, 6, 9, 1, 3, 2, 8, 4));
	printf("2. 인수들(5, 7, 6, 9, 1, 3, 2, 8, 4)의 중위수 : %d\n\n", median(9, 5, 7, 6, 9, 1, 3, 2, 8, 4));
	printf("3. 인수들 오름차순 정렬\n");
	printf("정렬 전 : 5 7 6 9 1 3 2 8 4\n");
	printf("정렬 후 : ");
	return_arr = ascending_sort(9, send_arr);
	for(i=0; i<9; i++) {
		printf("%d ", return_arr[i]);
	}
	printf("\n\n");

	return_str = concatnate_str(3, "Park", "Gyu", "Hyo");
	printf("4. 인수로 사용된 여러 개의 문자열(\"Park\", \"Gyu\", \"Hyo\")을 하나로 합치면 ? : %s\n", return_str);
	
	return 0;
}

double mean(int cnt, ...) {
	int i;
	int sum=0;
	
	va_list ap;
	
	va_start(ap, cnt);
	for(i=0; i<cnt; i++){
		sum += va_arg(ap, int);
	}
	va_end(ap);
	
	return sum/cnt;
}

int median(int cnt, ...) {
	int i;
	int num_arr[100];
	int result_no;
	int *return_arr;
	
	va_list ap;
	
	va_start(ap, cnt);
	for (i=0; i<cnt; i++) {
		num_arr[i] = va_arg(ap, int);
	}
	va_end(ap);
	
	return_arr = ascending_sort(9, num_arr);
	
	if (cnt % 2 == 1) {
		result_no = num_arr[cnt / 2];
	} else {
		result_no = (num_arr[cnt / 2] + num_arr[cnt / 2 - 1]) / 2;
	}
	
	return result_no;
}

int* ascending_sort(int cnt, int arr[]) {
	int i, j;
	
	for(i=0; i<cnt-1; i++) {
		for(j=i+1; j<cnt; j++) {
			if (arr[i] > arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	
	return arr;
}

char* concatnate_str(int cnt, ...) {
	int i;
	char *str = malloc(sizeof(char) * 20);
	
	va_list ap;
	
	va_start(ap, cnt);
	
	for(i=0; i<cnt; i++) {
		strcat(str, va_arg(ap, char*));
	}
	
	va_end(ap);
	
	return str;
}
