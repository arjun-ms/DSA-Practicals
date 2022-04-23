#include <stdio.h>

int main(){
	int a[10] = {20,30,5,12,56,196,23};	
	int n=7;
	
	for(int i=0;i<n;i++){
		int min = i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min = j;
			}
		}
		if(min!=i){
			int temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
		}
	}
