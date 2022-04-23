#include <stdio.h>

int main(){
	
	float poly1[7],poly2[7];
	int d1=5,d2=3;
	float respoly[20];
	
	for(int i=d1;i>=0;i--){
		printf("Enter coeff of x^%d: ",i);
		scanf("%f",&poly1[i]);
	}
	
	for(int i=d2;i>=0;i--){
		printf("Enter coeff of x^%d: ",i);
		scanf("%f",&poly2[i]);
	}
	
	
	int ld = d1>d2 ? d1:d2;
	int sd = d1<d2 ? d1:d2;
	 
	for(int i=0;i<=sd;i++){
			respoly[i] = poly1[i]+poly2[i]; 
	}
	
	if(d1>d2){
		for(int i=sd+1;i<ld;i++){
			respoly[i] = poly1[i]; 
		}
	}
	
	else if(d2>d1){
		for(int i=sd+1;i<ld;i++){
			respoly[i] = poly2[i]; 
		}
	}
	
	printf("sum: ");
	for(int i=ld;i>=0;i--){
			printf("%.2fx^%d + ",respoly[i],i) ;
	}
	
	
	
	
}
