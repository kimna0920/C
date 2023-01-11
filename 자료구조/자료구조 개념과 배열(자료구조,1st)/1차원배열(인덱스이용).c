#include <stdio.h>
int a[100000000001]={0};
int main(){
	int n, m, i, t;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &t);
		a[t]=1;
	}
	scanf("%d", &m);
	for(i=0; i<m; i++){
		scanf("%d", &t);
		printf("%d", a[t]);
	}
	return 0;
}
