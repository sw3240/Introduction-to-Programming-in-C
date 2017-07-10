//New header files. What does each give you? Look into functions that you don't know. Remember about man 2 function or man 3 function.
//Write a comment for every single line explaining what it does in English
//Trace through each functiion and variable so you know where it comes from in the program
//Look up any symbols you don't understand
#include <stdio.h> //defines various variables, types, and macros
#include <assert.h> //provides "void assert(integer expression)", which allows for the assertation of assumptions the program makes
#include <stdlib.h>//defines additional variables, macros, and functions like "atoi()"
#include <string.h>//defines size_t and memory and string functions


struct Person { //allocates a chunk of ram from the computer to the definition of the following four vairables
		//struct allows for multiple variables to have multiple other variables holding other pieces of information to be assigned to the variables.
	char *name; //defines character pointer under "name"
	int age;    //defines integer age
	int height; //defines integer height
	int weight; //defines integer weight
};

//look into: malloc, assert,s
struct Person *Person_create(char *name, int age, int height, int weight) //
{
	struct Person *who = malloc(sizeof(struct Person)); //malloc allows for dynamic memory allocation, and allocates a block of memory to "the heap", which is a larger and more free-floating region of memory that is less tightly managed by the computer and more managed by the user in comparison to the stack. The stack is what is commonly used in the more basic programs with the regular int, char, float, etc.
							    //here, struct allocates a block of memory and creates a pointer "who", which is defined under the block of memory assigned by malloc, the size of which is defined by the size of Person. "who" is a pointer that can point to all the variables of struct Person.
	assert(who != NULL); //assert verifies that who is not an invalid pointer; otherwise, assert will provide an error message.

	who->name = strdup(name);//who points to whichever name is being used
	who->age = age;		 //who points to age and makes the value at the location age
	who->height = height;	 //same for height
	who->weight = weight;	 //same for weight

	return who;
}

//look into: free
void Person_destroy(struct Person *who)
{
	assert(who != NULL);

	free(who->name);
	free(who);
}

void Person_print (struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("Age: %d\n", who->age);
	printf("Height: %d\n", who->height);
	printf("Weight: %d\n", who->weight);
}


//explain what main does here
int main(int argc, char *argv[])
{
	//make two people structures
	struct Person *joe = Person_create("Joe Alex", 32,53,140);
	struct Person *frank = Person_create("Frank_Blank", 20,72,180);

	//print them out and where they are in memory
	printf("Joe is at memory location: %p:\n", joe);
	Person_print(joe);

	printf("Frank is at memory location: %p:\n", frank);
	Person_print(frank);

	//make everyone age 20 years and print them again
	joe->age +=20;
	joe->height -=2;
	joe->weight +=40;	
	Person_print(joe);

	frank->age +=20;
	frank->weight +=20;
	Person_print(frank);

	//destroy both so we clean up
	Person_destroy(joe); //See what would happen if we had NULL instead of joe
	Person_destroy(frank);

	return 0;
}






