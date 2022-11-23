#include <stdio.h>
int main(){
	int a[19][19]={0,},n,x,y;
	for(int i=0; i<19; i++){
		for(int j=0; j<19; j++){
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &x,&y);
		for(int j=0; j<19; j++){
			if(a[j][x-1]==1){
				a[j][x-1]=0;
			}
			else{
				a[j][x-1]=1;
			}
		}
		for(int k=0; k<19; k++){
			if(a[y-1][k]==1){
				a[y-1][k] = 0;
			}
			else{
				a[y-1][k] = 1;
			}
		}
		
	}
	for(int i=0; i<19; i++){
		for(int j=0; j<19; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
}
