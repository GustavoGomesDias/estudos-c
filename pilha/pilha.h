#ifndef __pilha_h__
#define __pilha_h__

typedef struct Stack Stack;

Stack *createStack();

void push(Stack *stack, int len);

void pop(Stack *stack);

void peek(Stack *stack);



#endif