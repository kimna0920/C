#include<stdio.h>
void f(int a){
	if(a==1);
	else{
		if(a%2==0){
			f(a/2);
		}
		else{
			f(a*3+1);
		}
	}
	
	printf("%d\n", a);
}
int main(){
	int n;
	scanf("%d", &n);
	f(n);
	return 0;
}
