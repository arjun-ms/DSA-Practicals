#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>     
#include <string.h>
#define size 100

char stack[size];
int top=-1;

void push(char item){
		if(top >= size-1){
			printf("Stack overflow!");
		}
		else{
			top++;
			stack[top]= item;
		}
}

char pop(){
	char item;
	
	if(top == -1){
		printf("Stack empty!");
		getchar();
		exit(1);
	}
	else{
		item = stack[top];
		top--;
		return item;
	}
	
}

int isoperator(char symbol){
	if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol == '-' ){
		return 1;
	}
	else
		return 0;
}

int precedence(char symbol){
		if(symbol == '^')
			return 3;
		
		if(symbol == '*' || symbol == '/')
			return 2;
		
		if(symbol == '+' || symbol == '-' )
			return 1;
		
		else
			return 0;
}

void InfixToPostfix(char infixexp[],char postfixexp[]){
		
		int i=0,j=0;
		char item = infixexp[i];
		char x;
		
		push('(');
		strcat(infixexp , ")");
		
		while(item!= '\0'){
			
			if(item == '(')
				push(item);
			
			else if( isdigit(item) || isalpha(item)){
				postfixexp[j] = item;
				j++;
			}
			
			else if(isoperator(item)==1){
					x = pop();
					while(isoperator(x) ==1 && precedence(x) >= precedence(item)){
							postfixexp[j] = x;  // storing the poped out items in another array   
							j++;
							x = pop();
					}
					push(x);
			
					push(item);
			}
			
			else if(item==')'){
				x=pop();
				
				while(x != '('){
						postfixexp[j] = x;
						j++;
						x = pop();
				}
				
			}
			
			//else{
				
				//printf("\nInvalid Infix exp \n");
				//getchar();
				//exit(1);
			//}
			i++;
			
			item = infixexp[i];
		}
		
		if(top>0){
			printf("\ntop");
			printf("\nInvalid infix Expression.\n");        /* the it is illegeal  symbol */
			
		}
		
		postfixexp[j] = '\0';
}


int main(){
		char infix[size],postfix[size];
		printf("\nEnter the infix exp: ");
		fgets(infix,size,stdin);
		
		InfixToPostfix(infix,postfix);                   /* call to convert */
		printf("Postfix Expression: ");
		puts(postfix);
		return 0;		
}






























