#include<stdio.h>

int m;
int f(int n){
	if(n<1){
		return 0;
	}
	printf("%d\n", n);
	f(n-1);
}
int main(){
	scanf("%d", &m);
	f(m);
	
	return 0;
}
