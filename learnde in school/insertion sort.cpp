#include <stdio.h>
int main(){
	int i,j,n=4, temp, key;
	int list[4] = {4,5,1,2};
	
	for(i=1; i<n; i++){
		key=list[i];
		for(j=i-1; j>=0 && list[j]>key; i--){
			list[j+1]=list[j];
			for(i=0; i<n; i++){
				printf("%d ", list[i]);
			}
		}
		list[j+1]=key;
	}
}
