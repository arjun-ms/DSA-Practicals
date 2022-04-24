#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};

struct LinkedList{
	struct Node* head;
	struct Node* tail;
} myll;

void insertAtHead(int val){
	// creation on new node
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = val;
	newnode->next = NULL;
	
	if(myll.head == NULL){
		myll.head = newnode;
		myll.tail = newnode;
	}
	else{
		newnode->next = myll.head;
		myll.head = newnode;
	}
}

void insertAtTail(int val){
	//create a new node
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = val;
	newnode->next = NULL;
	
	if(myll.head==NULL){
		myll.head = newnode;
		myll.tail = newnode;
	}
	else{
		myll.tail->next = newnode;
		// incrementing tail pointer (tail++)
		myll.tail= newnode;
	}
}

void insertAtPos(int val,int index){
	//create a new node
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = val;
	newnode->next = NULL;
	
	if(index==0)
		insertAtHead(val);
	else{
		struct Node* temp = myll.head;
		int i=0;
		while(temp!= NULL && i<index-1){
			i++;
			temp = temp->next;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
}

void display(){
	
	if(myll.head==NULL)
		printf("Empty");
	else{
		struct Node* temp = myll.head;
		printf("\n");
		while(temp!=NULL){
			printf("%d -> ",temp->data);
			temp = temp->next;
		}
		printf("NULL\n");
	}
	
}

int main(){
	myll.head = NULL;
	myll.tail = NULL;
	
	int choice=0,element,index;
	
	while(choice!=5){
		printf("\n1.Insert at Head \n2.Insert at Tail \n3.Display\n4.Insert at Index\n5.Exit\n");
		scanf("%d", &choice);
		switch(choice){
			case 1:
                    printf("\nEnter Element to be inserted: ");
                    scanf("%d",&element);
                    insertAtHead(element);
                    break;
            case 2:
                    printf("\nEnter Element to be inserted: ");
                    scanf("%d",&element);
                    insertAtTail(element);
                    break;
            case 3:
                    display();
                    break;
            case 4:
                    printf("\nEnter Element to be inserted: ");
                    scanf("%d",&element);
                    printf("\nEnter Index to be inserted: ");
                    scanf("%d",&index);
                    insertAtPos(element, index);
                    break; 
            case 5: printf("Exitted\n");
                    break;  
		} 
	}
}













