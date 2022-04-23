#include <stdio.h>

int main(){
	int a[10] = {20,30,5,12,56,196,23};	
	int n=7;
	
	for(int i=1;i<n;i++){
		int temp = a[i];
		int j=i-1;
		
		while(j>=0 && a[j]>temp){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
	}
	
	for(int i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
}
