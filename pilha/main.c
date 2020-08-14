#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"
#include "cell.h"

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