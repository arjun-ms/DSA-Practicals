#include <stdio.h>
#include <stdlib.h>

#define maxsize 5

void enque();
void deque();
void display();

int queue[maxsize];
int front=-1,rear=-1;


int main(){
	int choice = 0;
	while(choice!=4){
		printf("\n*************************Main Menu*****************************\n");  
		printf("\n=================================================================\n");  
		printf("\n1.Enque\n2.Deque\n3.Display the queue\n4.Exit\n");  
		printf("\nEnter your choice ?");  
		scanf("%d",&choice);
		switch(choice){
			case 1:{
				enque();
				break;
			}
			case 2:{
				deque();
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4:{
				printf("Exiting....");
				break;
			}
			default:
				printf("Enter a valid choice: ");
		};
	}
	return 0;
}

void display(){
	if(front == rear)
		printf("Queue is empty!");
		
	if(front>rear){
			for(int i=front;i<maxsize;i++)
				printf("%d ",queue[i]);
			for(int j=0;j<=rear;j++)
				printf("%d ",queue[j]);
	}
	else{
		for(int i=front+1;i<=rear;i++){
			printf("%d  ",queue[i]);
		}
	}
}

void enque(){
	int val;
	
	if( (front==0 && rear == maxsize-1) || front == (rear+1)%maxsize){
		printf("Queue is full");
	}
	else{
		printf("Enter a value to insert: ");
		scanf("%d",&val);
		front++;
		queue[front] = val;
		printf("\nValue inserted "); 
	}
	display();
}

void deque(){
	if(front==-1){
		printf("Queue is empty");
	}
	else{
		front++;
		printf("\nValue deleted ");
	}
	display();
}


