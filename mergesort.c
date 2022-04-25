#include <stdio.h>

int b[7];

void merge(int a[],int low,int mid,int high){
		int i = low;
		int j = mid+1;
		int k = low;

		while(i<=mid && j<=high){
			if(a[i]<=a[j]){
				b[k] = a[i];
				i++;
			}
			else if(a[j]<a[i]){
				b[k] = a[j];
				j++;	
			}
			k++;
		}
		
		
		if(i>mid){
			while(j<=high){
				b[k]=a[j];
				j++;
				k++;	
			}
		}
		else{
			while(i<=mid){
				b[k]=a[i];
				i++;
				k++;
			}
		}
		
		
		// copying everything to initial array
		for(i=low;i<=high;i++){
			a[i] = b[i];
		}	
}


void mergeSort(int a[],int low,int high){
		if(low<high){
			int mid = (low+high)/2;
			mergeSort(a,low,mid);
			mergeSort(a,mid+1,high);
			merge(a,low,mid,high);
		}
}


int main(){
		int a[] = {8, 7, 2, 1, 0, 9, 6,3};
		
		int n = sizeof(a)/sizeof(a[0]);
		printf("%d",n);
		
		printf("\nUnsorted Array: \n");
		for (int i = 0; i < n; i++) {
			printf("%d  ", a[i]);
		}
		
		mergeSort(a,0,n-1);
		
		printf("\nSorted Array: \n");
		for (int i = 0; i < n; i++) {
			printf("%d  ", a[i]);
		}
		
}
