#ifndef __pilha_h__
#define __pilha_h__

typedef struct Stack Stack;

Stack *createStack();

Stack *createFull(Stack* stack, int len);

void push(Stack *stack, int info);

void pop(Stack *stack);

void peek(Stack *stack);



#endif