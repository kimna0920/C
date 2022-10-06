#include<stdio.h>
int n, mul=1;
int p(int a){
	if(a<1){
		return 0;
	}
	mul*=a;
	p(a-1);
}
int main(){
	scanf("%d", &n);
	p(n);
	printf("%d", mul);
	return 0;
}

