#include<stdio.h>
int stack[100], size=4, top=-1;
void pop(){
	if(top<0){
		printf("Stack is empty");
	}
	else{
		int popElement=stack[top];
		stack[top]=-1;
		top--;
		printf("Element popped is %d",popElement);
	}
} 

void push(){
	int num;
	printf("Enter the element to be pushed");
	scanf("%d",&num);
	if(top>=size-1){
		printf("Stack is full");
	}
	else{
		stack[++top]=num;
		printf("Element pushed");
	}
}

void peek(){
	if(top<0){
		printf("Stack is empty");
	}
	else{
		int peekElement= stack[top];
		printf("Peek element is %d",peekElement);
	}
}

void display(){
	if(top<0){
		printf("Stack is empty");
	}
	else{
		for(int i=top;i>=0;i--){
			printf("\n %d",stack[i]);
		}
	}
}

int main(){
	int choice=-1;
	printf("Implementing stack using array: ");
	printf("1.POP \t  2.PUSH \t  3.PEEK \t  4.DISPLAY \t  5.EXIT");
	while(choice!=5){
		printf("\n \n Enter your choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:pop();
			break;
			
			case 2:push();
			break;
			
			case 3:peek();
			break;
			
			case 4:display();
			break;
			
			case 5: printf("Exiting...thank you");
			break;
			
			default: printf("Wrong input");
			break;
		}
	}
	return 0;
}
