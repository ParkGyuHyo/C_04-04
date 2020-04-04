#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
	int i, num;
	int dice[6] = {0,};
	
	srand(time(NULL));
	
	for(i=0; i<1000; i++) {
		num = rand() % 6 + 1;
		
		dice[num-1]++;
	}
	
	for(i=0; i<6; i++) {
		printf("%dÀÌ ³ª¿Â È½¼ö(È®·ü) : %d(%0.2lf%%)\n", i+1, dice[i], (double)dice[i]/1000*100);
	} 
	
	return 0;
}
