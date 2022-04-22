#include <stdio.h>

int main(){
	int mid,beg=0,end=6;
	int pos=0;
	int a[10] = {10,20,30,40,50,60,70};	
	int item;
	
	printf("Enter the item to be found: ");
	scanf("%d",&item);
	
	
	
	while(beg<=end){
		mid  = (beg+end)/2;
		if(a[mid]==item){
			pos = mid+1;
			break;
		}
		else if(item < a[mid]){
			end = mid-1;
		}
		else if(item > a[mid]){
			beg = mid+1;
		}
	}
	if(pos>0)
		printf("Element found at index %d",mid);
}
