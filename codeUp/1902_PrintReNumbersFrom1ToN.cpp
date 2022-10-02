#include<stdio.h>

int m;
int f(int n){
	if(n<1){
		return;
	}
	printf("%d\n", n);
	f(n-1)
}
int main(){
	scanf("%d", &n);
	f(m);
	
	return 0;
}
