#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	Node *next;
};
void initNode(struct Node* head, int data){
	node->data=data;
	node->next=NULL;
}
void addNode(struct Node * head, int data){
	Node *cur=head;
	while(cur->next!=NULL){
		cur=cur->next;
	}
	Node* newNode = new Node;
	cur->next=newNode;
	newNode->data=data;
	newNode->next= NULL;
}
void insertFront(struct Node **head, int data){
	Node * newNode=new Node;
	newNode->data=data;
	newNode->next=*head;
	*head=newNode;
	
}
struct Node* searchNode(struct Node* head, int n){
	Node* cur=head;
	while(cur){
		if(cur->data==n){return cur;}
		cur=cur->next;
	}
	cout<<"Search specific Node not found with value"<<n<<endl;
}
struct Node* deleteNode(struct Node **head, int n){
	Node* cur=*head;
	//if delnode==head
	if(cur->data==n){
		*head=cur->next;
		free(cur);
		return (*head);
	}
	Node *prev=*head;
	cur=cur->next;
	//else for normal node
	while(cur){
		if(cur->data==n){
			prev->next=cur->next;
			free(cur);
			return *head;
		}
		prev=prev->next;
		cur=cur->next;
		
	}
	cout<<"No node found for deleting"<<endl;
}

void Display(struct Node* head){
	Node *cur=head;
	if(cur){
		cout<<cur->data<<endl;	
	}
	
	while(cur->next!=NULL){
	cout<<cur->next->data<<endl;
	cur=cur->next;
	}
}
struct Node* reverse(struct node** head){
	
	Node *cur=*head;
	Node *cur2=*head->next;
	Node* cur3=cur2->next;
	cur->next=NULL;
	while(cur3){
		cur2->next=cur;
		cur=cur2;
		cur2=cur3;
		cur3=cur3->next;
	}
	cur2->next=cur;
	
	
}
int GetNth(struct Node* head, int N){
	int count=head->data;
	while(N){
		head=head->next;
		--N;
	}
	return head->data;
}

int main(){
	
		struct Node* head=NULL;
		initNode(head, 10);
		addNode(head, 1);
		addNode(head, 2);
		addNode(head, 3);
		addNode(head, 4);
		printf("Element at index 3 is %d", GetNth(head, 3));
	
	return 0;
}