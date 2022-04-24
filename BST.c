#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};

struct Node* root = NULL;

struct Node* makeNode(int val){
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = val;
	newnode->left = NULL;
	newnode->right = NULL;	
	printf("Node made sucessfully");
	return newnode;
}

struct Node* insert(struct Node* node,int val){
	if(node==NULL)
		return makeNode(val);
	
	else if(val < node->data)
		node->left  = insert(node->left,val);
	
	else if(val > node->data)
		node->right  = insert(node->right,val);
		
	return node;
}

void search(struct Node* node,int val){
		if(node == NULL)
			printf("Empty");
		else if(node->data == val){
			printf("%d found in the BST",val);
		}
		else if(val>node->data)
			search(node->right,val);
		else if(val<node->data)
			search(node->left,val);
}

void inorder(struct Node* node){
	if(node==NULL)
		return;
	inorder(node->left);
	printf("%d ",node->data);
	inorder(node->right);	
}
void preorder(struct Node* node){
	if(node==NULL)
		return;
	printf("%d ",node->data);
	preorder(node->left);
	preorder(node->right);	
}

void postorder(struct Node* node){
	if(node==NULL)
		return;
	postorder(node->left);
	postorder(node->right);	
	printf("%d ",node->data);
}

int main(){
	int choice=0,val;
	
	while(choice!=4)
	{
	printf("\n1.Insert\n2.Traverse\n3.Search\n4.Exit\n");
        printf("Enter your Choice :");
        scanf("%d", &choice);
        switch (choice){
        case 1:
            printf("Enter Value:");
            scanf("%d", &val);
            root = insert(root, val);
            break;
        case 2:
            printf("\nInorder: ");
            inorder(root);
            printf("\nPreorder: ");
            preorder(root);
            printf("\nPostorder: ");
            postorder(root);
            printf("\n");
            break;
        case 3:
            printf("Enter Value:");
            scanf("%d", &val);
            search(root, val);
            break;
        case 4:
            printf("\nExit\n");
            break;
        default:
			printf("\nEnter a valid input\n");
            break;
        }
	
	}

}
