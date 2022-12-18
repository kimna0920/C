#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct Node{//1. 연결리스트 구조체 정의
	element data;
	struct Node* next;
}Node;

Node* insertFirst(Node* head, element data){
	Node* newnode = (Node*)malloc(sizeof(Node));//2. 첫위치 삽입 코드 작성
	newnode->data = data;
	newnode->next = head;
	head = newnode;
	return head;
}
Node* insert(Node* head, Node* pre, element data){
	Node* newnode = (Node*)malloc(sizeof(Node));//3. 중간위치(pre 다음 위치 )삽입
	newnode->data = data;
	newnode->next = pre->next;
	pre->next = newnode;
	return head;
}
Node* deleteFirst(Node* head){
	//4. 첫위치 삭제 코드 작성
	Node* removed = head;
	head = head->next;
	free(removed);
	removed = NULL;
	return head;
}
Node* delete(Node* head, Node* pre){
	//5.프리가 가리키는 다음 노드를 삭제
	Node* removed = pre->next;
	pre->next = removed->next;
	free(removed);
	removed = NULL;
	return head;
}
void printList(Node* head){
	//6.head가 널이 아니면 노드데이터 출력
	Node* p = head;
	while(p!=NULL){
		printf("%d->",p->data);
		p= p->next;
	}
	printf("NULL\n");
		
}
int main(){
	Node* head = NULL;
	Node* temp = NULL;
	printf("[첫 위치 삽입]\n");
	for(int i = 0;i<5;i++){
		head = insertFirst(head,i);//7. 첫위치에 i 삽입
		printList(head);
		if (i==2) temp = head; //데이터가 2인 노드 주소 저장

	}
	printf("[중간위치 삽입]\n");
	head = insert(head, temp, 100);//8. temp 다음 위치에 100 저장
	printList(head);
	printf("[중간위치 삭제]\n");
	head = delete(head, temp);//9. temp 다음위치 노드 삭제
	printList(head);
	printf("[첫 위치 삭제]\n");
	for(int i=0;i<5;i++){
		//10. 첫위치 노드 삭제
		head = deleteFirst(head);
		printList(head);
	}
	return 0;
}



