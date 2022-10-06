#include<stdio.h>
int n, m;
int f(int n, int m){
	if(n>m){
		return 0;
	}
	if(n%2==1){
		printf("%d ",n);
	}
	f(n+1, m);
	
}
int main(){
	scanf("%d %d", &n, &m);
	f(n, m);
}

