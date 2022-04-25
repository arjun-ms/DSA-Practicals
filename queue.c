#include<stdio.h>   
#include<stdlib.h>  
#define maxsize 5  

void enque();
void deque();
void display();

int front=-1,rear=-1;
int queue[maxsize];

int main(){
	int choice=0;
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
				printf("Enter a valid choice!");
		};
	}
	return 0;
}

void enque(){
	int val;
	if(rear==maxsize-1)
		printf("Queue is full");
	else{
		printf("Enter a value to insert: ");
		scanf("%d",&val);
		rear++;
		queue[rear]=val;
		printf("\nValue inserted ");  
	}
}
void deque(){
	if(front == rear)
		printf("Queue is empty!");
	else{
		int temp = queue[++front];
		printf("%d dequed from queue",temp);
	}
}

void display(){
	if(front == rear)
		printf("Queue is empty!");
	else{
		for(int i=front+1 ;i<=rear;i++){
			printf("%d  ",queue[i]);
		}
	}
}
