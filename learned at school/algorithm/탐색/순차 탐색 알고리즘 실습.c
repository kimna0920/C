#include<stdio.h>
int key, count, n, result;
int arr[100001];
int search(){
	for(int i=0; i<n; i++){
		count++;
		if(arr[i]==key){
			return count;
		}
	}
	return -1;
}
int main(){
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	scanf("%d", &key);
	result=search();
	if(result== -1)printf("실패");
	else printf("%d", result);
}
