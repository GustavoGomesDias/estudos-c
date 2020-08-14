#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"
#include "cell.h"

// Stack == pilha (tô tentando colocar tudo em inglês agora)
struct Stack{
    Cell *top;
    int len;
};

Stack *createStack(){
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->top = malloc(sizeof(Cell *));
    stack->len = 0; 
    return stack;
}

void push(Stack *stack, int len){
    stack->top = stacksCell(len);
    stack->len = len;
}

void pop(Stack *stack){
    int i = stack->len;
    Cell *tmp = stack->top;
    Cell *aux = getNext(tmp);
    i -= 1;
    stack->len = i;
    printf("O elemento %d foi retirado", getInfo(tmp));
    
    stack->top = aux; 
}

void peek(Stack *stack){
    Cell *tmp = stack->top;
    printf("%d é o primeiro elemento da pilha", getInfo(tmp));
}