#include <stdio.h>
int main() {
	int a[100];
	int i;
	for(i=0; i < 100; i++){
		scanf("%d", &a[i]);
		if (a[i] == 0) {
			i--;
			break;
		}
	}
	for(i; i>=0; i--){
		printf("%d ", a[i]);
	}
	
	
	return 0;
}
