#include <stdio.h>
#include <string.h>;
#include <stdlib.h>;
#include "Stack.h"
#include "Queue.h"
void stack();
void queue();
void main()
{
	stack();
}

void stack()
{
	Stack s1;
	Stack* ptrs = &s1;
	initStack(ptrs);
	push(ptrs, 5);
	push(ptrs, 7);
	push(ptrs, 10);
	push(ptrs, 10);
	push(ptrs, 7);
	push(ptrs, 5);
	printf("the stack is/not palindrome %d", isPalindrome(ptrs));
	rotateStack(ptrs, 5);
	printf("after the rotate function: ");
	display(ptrs);
	char* sentence = "remem#reb# thi#carp s#tice";
	flipBetweenHashes(sentence);
	
}

void queue()
{
	Queue q1;
	initQueue(&q1);
	enqueue(&q1, 6);
	enqueue(&q1, 5);
	enqueue(&q1, 2);
	enqueue(&q1, 3);
	enqueue(&q1, 1);
	enqueue(&q1, 9);
	cutAndReplace(&q1);
	printQueue(&q1);
}