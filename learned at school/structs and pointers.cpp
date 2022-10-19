#include<stdio.h>
#include<string.h>
#define NUM 3
//전역에 구조체 정의
typedef struct{
	char name[20];
	int age;
}PERSON;

void inputData( PERSON *p );
void outputData( PERSON *p );
int main(){
	PERSON p[3];
		//구조체 포인터 배열 선언
	int i;
	for(i=0; i<3; i++){
		inputData(p+i);
	}
		//구조체포인터 배열로 입력함수 호출
	for(i=0; i<3; i++){
		outputData(&p[i]);
	}	
		//outputData(p);//구조체포인터 배열로 출력함수 호출
		return 0;
}
void inputData( PERSON *p ){
	  //구조체포인터 변수에 입력
			scanf("%s",p->name);
			scanf("%d",&p->age);
}
void outputData( PERSON *p ){
		//구조체포인터 변수에 출력
		printf("%s, %d\n",p->name,p->age);

}
