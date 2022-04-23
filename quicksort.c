#include <stdio.h>  

int partition(int a[],int start,int end){
	
	int pivot = a[end];
	int i = start-1;
	
	for(int j = start;j<end-1;j++){
		if(a[j]<pivot){
			i++;
			int temp = a[i];
			a[i] = a[j]
			a[j] = temp;
		}
	}
	int temp = a[i+1]
}
