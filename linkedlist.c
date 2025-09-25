#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
        };
struct Node* createNode(int data){

      struct Node*n =  malloc(sizeof(struct Node));
	n->data = data;
	n->next = NULL;
	return n;
}

void insertAtbeginning(struct Node**head, int data){
	struct Node*n = createNode(data);
	n->next = *head;
	*head = n;
}
void insertAtEnd(struct Node**head, int data){
       struct Node*n = createNode(data);
       if(!head){*head = n;return;}
       struct Node*temp =*head;
       while(temp->next)temp=temp->next;
       temp->next = n;
}
void deteleNode(struct Node**head, int key){
	struct Node *temp = *head,*prev *curr = NULL;
	while (temp && temp->data != key){prev = temp;temp=temp->next;}
	if(!temp)return;
	if(!prev)*head = temp->next;
	else prev->next = temp->next;
	free(temp);
	if(!temp){
		printf("Value not found\n",key);}
	return;

}
void printList(struct Node*head){
	for (;head;head=head->next)
		printf("%d->",head->data);
	printf("NULL\n");
}
int main(){
	struct Node*head=NULL;
	int ch,val;
	while(1){
		printf("\n1.InsertBeg\n 2.InsertEnd\n 3.Delete\n 4.Display\n 5.Exit \n choice:");
		scanf("%d",&ch);
		if(ch == 5)break;
		if(ch == 1 || ch == 2){
			printf("value:");
			scanf("%d",&val);
			(ch == 1)?
				insertAtbeginning(&head,val):
				insertAtEnd(&head,val);
		}
		else if (ch == 3){
			printf("Delete Value:");
			scanf("%d",&val);
			deteleNode(&head,val);
		}else if (ch == 4)
			printList(head);
	}
	return 0;
}
