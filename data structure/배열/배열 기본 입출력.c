//5개 문자형 원소를 입력 받아 역순으로 출력해보자.
//순서대로 출력한 다음 수정하여 작성해 보자.
//배열 이름은 주소 상수
#include <stdio.h>
int inputArray(char a[]);
void outputArray(char a[]);
int main(){
char a[5];
   int i, size = 0;
   size = inputArray(a); // 배열 a의 주소
   // printf("배열크기는 %d\n", size);
   outputArray(a);
   // printf("배열 a의 주소 : %p\n", a);
   return 0;
}
int inputArray(char a[]){
   int i;
   for(i=0;i<5;i++){
      scanf("%c", &a[i]);
      getchar();
   }
   return i;
}
void outputArray(char a[]){
   for(int i=4;i>=0;i--){
      printf("%c", a[i]);
   }
}
