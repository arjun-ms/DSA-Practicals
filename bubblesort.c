#include <stdio.h>
int main(){
	
	int a[10] = {20,30,5,12,56,196,23};	
	int n=7;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++)
			if(a[j]>a[j+1]){
				int temp  = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
	}
	for(int i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
}
