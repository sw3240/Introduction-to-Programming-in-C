#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int max=8;
int i=0;
int top = 0;

struct Stack{
	char *name;
	int top;
	int list[100];
};

struct Stack *Stack_create(char *name, int top)
{
	struct Stack *stackname = malloc(sizeof(struct Stack));
	assert(stackname != NULL);
	
	stackname->name = strdup(name);
	stackname->top=top;

	int list[100];
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
	if(top == 0){
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

void deallocate(struct Stack *stackname){
	assert(stackname != NULL);
	
	free(stackname->name);
	free(stackname);
}

void instructions_print()
{
	printf("Type \"push\" or \"push [element]\"to enter an element into the stack.\n");
	printf("Type \"pop\" to remove the top element from the stack.\n");
	printf("Type \"peek\" to print the top element from the stack.\n");
	printf("Type \"isEmpty\" to check if the stack is empty.\n");
	printf("Type \"isFull\" to check if the stack is full.\n");
	printf("Type \"print\" to print the stack.\n");
	printf("Type \"instructions\" to print these directions again.\n");
	printf("Type \"exit\" to end the program.\n");
}

int main()
{
	int pushnum;
	int value;
	int lcount=0;
	char nameofstack[20];
	char input[20];
	printf("Create a stack!\n");
	
	printf("Choose the name (Single string):\n");
	scanf("%s", &nameofstack);

	struct Stack *ptr1 = Stack_create(nameofstack, (0));
		
	instructions_print();

	while(1){
		scanf("%s", &input);
		//printf("input = %s\n", input);
		
		if (strcmp(input,"push")==0){
			printf("Enter element:\n");
			scanf("%d", &pushnum);
			push(ptr1, pushnum);
		}
		else if (strcmp(input,"pop")==0){
			pop(ptr1);
			printf("Top element removed.\n");
		}
		else if (strcmp(input,"peek")==0){
			printf("The top element is: %d.\n", peek(ptr1));
		}
		else if (strcmp(input,"isEmpty")==0){
			if (isEmpty(ptr1)){
				printf("The stack is empty.\n");
			} else {
				printf("The stack is not empty.\n");
			}
		}
		else if (strcmp(input,"isFull")==0){
			if (isFull(ptr1)){
				printf("The stack is full.\n");
			} else {
				printf("The stack is not full.\n");
			}
		}
		else if (strcmp(input,"print")==0){
			printf("%s\n", nameofstack);
			if (isEmpty(ptr1)){
				printf("The stack is empty!.\n");
			}
			while(!isEmpty(ptr1)){
				int value = pop(ptr1);
				printf("%d\n", value);
				lcount++;
			}
			while(lcount){
				top++;
				lcount--;
			}	
		}
		else if (strcmp(input,"instructions")==0){
			instructions_print();
		}
		else if (strcmp(input,"exit")==0){
			deallocate(ptr1);
			break;
		}
		else{
			printf("That is an invalid command.\n");
		}
	}	
	return 0;
}
