#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

//THIS PROGRAM MAY LEAK MEMORY

int max=8;
//int list[8];
int i=0;
int top = -1;

struct Stack{
	char *name;
	int top;
	int list[8];
};

struct Stack *Stack_create(char *name, int top)
{
	struct Stack *stackname = malloc(sizeof(struct Stack));
	assert(stackname != NULL);
	
	stackname->name = strdup(name);
	stackname->top=top;

	int list[8];
	for (i=0;i<max;i++){
		stackname->list[i]=list[i];
	}
	return stackname;
}

int isFull(struct Stack *stackname){
	if (top == max){
		return 1;
	}
	else{
		return 0;
	}
}

int isEmpty(struct Stack *stackname){
	if(top == -1){
		return 1;
	}
	else{
		return 0;
	}
}

int push(struct Stack *stackname, int value){
	assert(stackname != NULL);
	if(!isFull(stackname)){
		top++;
		stackname->list[top] = value;
		printf("list[top] = %d\n", stackname->list[top]);
	}
	else{
		printf("The stack is full, push() does not work.\n");
	}
}

int pop(struct Stack *stackname){
	assert(stackname != NULL);
	int value;
	if(!isEmpty(stackname)){
		value = stackname->list[top];
		top--;
		return value;
	}
	else{
		printf("The stack is empty, pop() does not work.\n");
	}
}

int peek(struct Stack *stackname){
	assert(stackname != NULL);
	return (stackname->list[top]);
}

int main()
{
	struct Stack *ptr1 = Stack_create("stack1", (-1));
	
	push(ptr1, 0);
	push(ptr1, 1);
	push(ptr1, 2);
	push(ptr1, 3);
	
	printf("%s (from top):\n", ptr1->name);
	
	while(!isEmpty(ptr1)){
		int value = pop(ptr1);
		printf("%d\n", value);
	}
	
	if(isEmpty(ptr1)){
		printf("The stack is empty.\n");
	}
	
	return 0;
}












