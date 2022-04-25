#include <stdio.h> 

// function to swap elements
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int a[],int low,int high){
		int pivot = a[low];
		int start=low;
		int end=high;
		
		while(start<end){
				
			while(a[start]<=pivot){
				start++;
			};
				
			while(a[end]>pivot){
				end--;
			};
			
			if(start<end){
				swap(&a[start],&a[end]);
			}
		}
		swap(&a[low],&a[end]);
		return end;
}
void quickSort(int a[],int low,int high){
		if(low<high){
			
			// find the pivot element such that
			// elements smaller than pivot are on left of pivot
			// elements greater than pivot are on right of pivot
			int pi = partition(a,low,high);
			// left section of pivot
			quickSort(a,low,pi-1);
			// right section of pivot
			quickSort(a,pi+1,high);

		}
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}


int main(){
		int a[] = {8, 7, 2, 1, 0, 9, 6};
		int n = sizeof(a)/sizeof(a[0]);
		printf("%d",n);
		
		printf("\nUnsorted Array: \n");
		printArray(a,n);
		
		quickSort(a,0,n-1);
		
		printf("\nSorted Array: \n");
		printArray(a,n);
		
}
