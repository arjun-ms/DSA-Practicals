#include <stdio.h>

int main(){
		int poly1[50],poly2[50],respoly[100];
		int d1,d2,rd;
		int i,j;
		
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
		
		// LOGIC
		rd = d1+d2;
		printf("rd: %d",rd);
		// initialsing everything to zero
		for(i=0;i<rd;i++){
			respoly[i]=0;
		}
		
		for(i=0;i<d1;i++){
			for(j=0;j<d2;i++){
				respoly[i+j] += poly1[i] * poly2[j];
			}
		}
		printf("Multiplied Successfully");
		
		for(i=rd;i>=0;i--){
			printf("%dx^%d + ",respoly[i],i);
		}
		
}

