#include<stdio.h>
int n;
void f(int n){
	if(n<1){
		return;
	}
	f(n-1);
	printf("%d\n", n);
}
int main(){
	scanf("%d", &n);
	f(n);
}
