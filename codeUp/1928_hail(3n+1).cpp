#include<stdio.h>
int n;
f(int n){
	printf("%d\n", n);
	if(n<=1){
		return 0;
	}
	
	if(n%2==0){
		return f(n/2);
	}
	else{
		return f(n*3+1);
	}
}
int main(){
	scanf("%d", &n);
	f(n);
}
