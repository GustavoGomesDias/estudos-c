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

Stack *createFull(Stack* stack, int len){
    int i;
    for(i = 0; i < len; i++){
        push(stack, len-i);
    }
    return stack;
}

void push(Stack *stack, int info){
    Cell *tmp = createCell();
    setInfo(tmp, info);
    if (getTop(stack) != NULL){
        setNext(tmp, getTop(stack));
        setTop(stack, tmp);
    }else{
        setTop(stack, tmp);
    }
    setLenght(stack, (Size(stack) + 1));
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