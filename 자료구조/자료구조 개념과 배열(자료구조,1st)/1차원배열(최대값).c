#include <stdio.h>
int main() {
	char input[100], cnt, max=0;
	for(int i=0; i<9; i++){
		scanf("%d", &input[i]);
		if(input[i]>=max){
			max=input[i];
			cnt=i+1;
		}
	}
	printf("%d\n%d", max, cnt);
	
	return 0;
}
