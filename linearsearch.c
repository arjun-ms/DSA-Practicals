#include <stdio.h>
int main(){
	
	int a[10] = {20,30,5,12,56,196,23};	
	int i,flag = 0;
	int item;
	
	printf("Enter the item to be found: ");
	scanf("%d",&item);
	
	for(i=0;i<7;i++){
		if(a[i]==item){
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("Element found at index %d",i);
	else
		printf("Element not found");
	
}
