#include <stdio.h>

int main(){
		int poly1[20],poly2[20],respoly[50];
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
		
		// initialsing everything to zero
		for(i=0;i<=rd;i++){
			respoly[i]=0;
			printf("\n0 done");
		}
		
		for(i=0;i<=d1;i++){
			for(j=0;j<=d2;j++){
				respoly[i+j] += poly1[i] * poly2[j];
			}
		}
		
		printf("\nMultiplied Successfully\n");
		
		for(i=rd;i>=0;i--){
			printf("%dx^%d + ",respoly[i],i);
		}
		
}
