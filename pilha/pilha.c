#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Cell{
    int info;
    struct Cell *next;
};

typedef struct Cell Cell;

// Stack == pilha (tô tentando colocar tudo em inglês agora)
struct Stack{
    Cell *top;
    int len;
};

typedef struct Stack Stack;

void setNext(Cell *arg1, Cell *arg2){
    arg1->next = arg2;
}

Cell *getNext(Cell *arg1){
    return arg1->next;
}

void setInfo(Cell *arg1, int num){
    arg1->info = num;
}

int getInfo(Cell *arg1){
    return arg1->info;
}

Cell *createCell(){
    Cell *newCell = (Cell *)malloc(sizeof(Cell));
    setNext(newCell, NULL);
    return newCell;
}



Cell *stacksCell(int len){
    int i;
    Cell *aux;
    Cell *top;
    for (i = 0; i < len; i++){
        Cell *newCell = createCell();
        setInfo(newCell, (len-i));
        if (i == 0){
            aux = newCell;
            setNext(newCell, NULL);
        }else{
            setNext(newCell, aux);
            aux = newCell;
        }

        if (i == (len-1)){
            top = newCell;
        }
        
    }
    return top;
}

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
    i -= 1;
    stack->len = i;
    printf("O elemento %d foi retirado", getInfo(tmp));
    Cell *aux = tmp->next;
    stack->top = aux; 
}

void peek(Stack *stack){
    Cell *tmp = stack->top;
    printf("%d é o primeiro elemento da pilha", getInfo(tmp));
}


int main(){
    Stack *stack = createStack();
    push(stack, 5);
    peek(stack);
    printf("\n");
    pop(stack);
    printf("\n");
    peek(stack);
    return 0;
}