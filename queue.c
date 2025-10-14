
#include<stdio.h>
int main(){

	int queue[100];
	int size,front=-1,rear=-1;
	int choice,value,i;

	printf("enter the size of the queue: ");
	scanf("%d",&size);

	while(1){
	
		printf("\n-----queue-----\n");
		printf("1.enqueue\n");
		printf("2.dequeue\n");
		printf("3.display\n");
		printf("4.exit\n");

		printf("enter your choice: ");
		scanf("%d",&choice);

		switch(choice){
		
			case 1:
				if (rear==size-1){
					printf("queue is full");

				}else{
				
					printf("enter the value: \n");
					scanf("%d",&value);
					if(front==-1){
					front=0;
					}
					rear++;
					queue[rear]=value;
					printf("%d inserted",value);
				}
				break;

                          case 2: if(front==-1||front>rear){
				 
					 printf("queue is empty");

				 }else{
					 printf("%d deleted ", queue[front]);
					 front++;
		}
				 break;

			case 3:
				 if(front==-1||front>rear){

                                         printf("queue is empty");

                                 }else{
					 printf("queue elements: \n");
					 for(i=front; i<=rear;i++)
					 {
						 printf("%d",queue[i]);
					 }
					 printf("\t");
	}
				 break;
				  
			case 4: 
				 printf("exitting the progam\n");
				 return 0;

			default : 
				 printf("invalid choice! try again\n");
}
}
}
