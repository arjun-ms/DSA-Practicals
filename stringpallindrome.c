#include <stdio.h>
#include <string.h>

int main(){
	int i,n,c=0;
	char s[100];
	
	printf("Enter a string: ");
	scanf("%s",s);
	n = strlen(s);
	
	for(i=0;i<n/2;i++){
		if(s[i]==s[n-i-1])
			c++;
	}
	if(c==i)
		printf("Pallindrome");
	else
		printf("Not Pallindrome");
		
	return 0;
	
}
