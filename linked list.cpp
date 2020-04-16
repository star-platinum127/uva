#include <iostream>
#include<stdlib.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef long long ll;
struct node{
	int data;
	struct node* next;
};
int main(int argc, char** argv) {
	struct node *head,*p,*q,*t;
	int a;
	head=NULL;
	for(int i=0;i<5;i++){
		cin>>a;
		p=(node *)malloc(sizeof(node));
		p->data=a;
		p->next=NULL;
		if(head==NULL){
			head=p;
		}else{
			q->next=p;
		}
		q=p;
	}
	t=head;
	while(t!=NULL){
		cout<<t->data;
		t=t->next;
	}
	
	return 0;
}
