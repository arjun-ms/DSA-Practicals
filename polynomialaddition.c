#include <stdio.h>

int main(){
	
	int poly1[50],poly2[50],respoly[50];
	int d1,d2;
	int i;
	int maxdeg,mindeg;
	
	// POLY1
	printf("Enter the degree of poly1: ");
	scanf("%d",&d1);
	
	printf("Enter the Coefficients for poly1: ");
	for(i=d1;i>=0;i--){
		printf("\nx^%d: ",i);
		scanf("%d",&poly1[i]);
	}
	
	
	// POLY 2
	printf("Enter the degree of poly2: ");
	scanf("%d",&d2);
	
	printf("Enter the Coefficients for poly2: ");
	for(i=d2;i>=0;i--){
		printf("\nx^%d: ",i);
		scanf("%d",&poly2[i]);
	}
	
	// printing user-input polynomials
	printf("\nPoly1 : "  );
	for(i=d1;i>=0;i--){
		printf("%dx^%d + ",poly1[i],i);
	}
	printf("\nPoly2 : "  );
	for(i=d2;i>=0;i--){
		printf("%dx^%d + ",poly2[i],i);
	}
	
	maxdeg = d1>d2 ? d1:d2;
	mindeg = d1<d2 ? d1:d2;
	
	// LOGIC
	for(i=0;i<=mindeg;i++){
		respoly[i]=poly1[i]+poly2[i];
	}
	
	if(d1>d2){
		for(i=mindeg+1;i<=maxdeg;i++){
			respoly[i]=poly1[i];
		}
	}
	else if(d1<d2){
		for(i=mindeg+1;i<=maxdeg;i++){
			respoly[i]=poly2[i];
		}
	}
	
	printf("\nSum: ");
	for(int i=maxdeg;i>=0;i--)
	{
		printf(" %dx^%d +",respoly[i],i);
	}
}
