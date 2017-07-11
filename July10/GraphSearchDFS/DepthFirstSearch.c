#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

int max=100;
int a,b;

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
	for (a=0;a<max;a++){
		stackname->list[a]=list[a];
	}
	return stackname;
}

int isFull(struct Stack *stackname){
	if (stackname->top == max){
		return 1;
	}
	else{
		return 0;
	}
}

int isEmpty(struct Stack *stackname){
	if(stackname->top == 0){
		return 1;
	}
	else{
		return 0;
	}
}

int push(struct Stack *stackname, int value){
	assert(stackname != NULL);
	if(!isFull(stackname)){
		stackname->top++;
		stackname->list[stackname->top] = value;
		printf("list[top] = %d\n", stackname->list[stackname->top]);
	}
	else{
		printf("The stack is full, push() does not work.\n");
	}
}

int pop(struct Stack *stackname){
	assert(stackname != NULL);
	int value;
	if(!isEmpty(stackname)){
		value = stackname->list[stackname->top];
		stackname->top--;
		return value;
	}
	else{
		printf("The stack is empty, pop() does not work.\n");
	}
}

int peek(struct Stack *stackname){
	return (stackname->list[stackname->top]);
}

void print(struct Stack *stackname){
	printf("%s: ", stackname->name);
	int lcount;
	while(!isEmpty(stackname)){
		printf("%d, ", pop(stackname));
		lcount++;
	}
	while(lcount){
		stackname->top++;
		lcount--;
	}
	printf("\n");
}

void deallocate(struct Stack *stackname){
	assert(stackname != NULL);
	
	free(stackname->name);
	free(stackname);
}

int main()
{
	int adjacency_matrix[20][20];
	int i,j,k,x,y;
	int nodenum;
	int pushnum;
	int lbreaker;
	int input1,input2;
	int output[20];
	int inptr1, inptr2;

	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			adjacency_matrix[i][j]=0;
		}
	}
	printf("...adjacency_matrix initialized...\n");
	
	printf("How many nodes would you like? (max 20)\n");
	scanf("%d", &nodenum);
	
	printf("Here is your adjacency matrix:\n");
	for(i=0;i<nodenum;i++){
		printf("%d: [ ", i);
		for(j=0;j<nodenum;j++){
			adjacency_matrix[i][j]=0;
			printf("%d ", adjacency_matrix[i][j]);
		}
		printf("]\n");
	}
	
	printf("--------------------\n");
	printf("    Edge Creator    \n");
	printf("--------------------\n");
	
	while(1){
		printf("\nName an edge by using the following notation: node1,node2.\n");
		printf("Remember, the first node is named \"node 0\", not \"node 1\".\n");
		printf("To exit Edge Creator, input the following: number of nodes,number of nodes.\n");
		scanf("%d,%d", &input1, &input2);
		
		if(adjacency_matrix[input1][input2]==0 && 0<=input1 && input1<nodenum && 0<=input2 && input2<nodenum){
			adjacency_matrix[input1][input2]=1;
			adjacency_matrix[input2][input1]=1;
			printf("input1=%d , input2=%d\n", input1, input2);
			
			//prints the adjacency matrix
			printf("Adjacency Matrix:\n");
			for(i=0;i<nodenum;i++){
				printf("%d: [ ", i);
				for(j=0;j<nodenum;j++){
					printf("%d ", adjacency_matrix[i][j]);
				}
				printf("]\n");
			}
			
		}else if(adjacency_matrix[input1][input2]==1){
			printf("There is already an edge there!\n");
			
		}else if(input1==nodenum && input2==nodenum){
			("Exiting Edge Creator...\n");
			break;
			
		}else{
			printf("That is an invalid input.\n");
		}
	}
	
	printf("--------------------\n");
	printf(" Depth First Search \n");
	printf("--------------------\n");
	
	struct Stack *ptr1 = Stack_create("Adjusting Stack", 0);
	struct Stack *ptr2 = Stack_create("Output", 0);
	
	push(ptr1,0);
	
	for(i=0;1;){
		inptr2=0;
		for(k=0;k<(ptr2->top);k++){ 
			if((ptr2->list[k])==i){
				inptr2=1;
			}
		}
		if(inptr2==0){
			push(ptr2,i);
		}
		for(j=0;j<=nodenum;j++){
			if(adjacency_matrix[i][j]==1){
				adjacency_matrix[i][j]=0;
				adjacency_matrix[j][i]=0;
				printf("Edge detected between node %d and node %d.\n", i ,j);
				i=j;
				
				//to check if i is already in the list
				inptr1=0;
				for(k=0;k<(ptr1->top);k++){ 
					if((ptr1->list[k])==i){
						inptr1=1;
					}
				}
				if(inptr1==0){
					push(ptr1,i);
				}
				
				break;
			}else if(j==nodenum){
				printf("No more possible nodes to travel to at node %d.\n", i);	
				pop(ptr1);
				i=peek(ptr1);
			}
		}
		if(isEmpty(ptr1)){
			break;
		}
		print(ptr1);
		print(ptr2);
		printf("\n");
		printf("Adjacency Matrix:\n");
			for(y=0;y<nodenum;y++){
				printf("%d: [ ", y);
				for(x=0;x<nodenum;x++){
					printf("%d ", adjacency_matrix[y][x]);
				}
				printf("]\n");
			}
	}
	
	print(ptr2);
	
	deallocate(ptr1);
	deallocate(ptr2);
	return 0;
}
