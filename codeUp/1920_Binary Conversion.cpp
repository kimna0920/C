#include<stdio.h>

int f(int m){
	if(m<1){
		return 0;
	}
	f(m/2);
	printf("%d", m%2);
}

int main(){
	int n;
	scanf("%d", &n);
	if(n==0){
		printf("0");
	}
	else{
		f(n);
	}
	return 0;
}
