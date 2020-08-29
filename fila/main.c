#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cell.h"
#include "fila.h"

int main(){
    Queue *queue;
    queue = createQueue();
    queue = push(queue, 1);
    queue = push(queue, 2);
    queue = push(queue, 3);
    queue = push(queue, 4);
    queue = push(queue, 5);
    if(queue == NULL){
        printf("Vazia!");
    }
    print(queue);
    pop(queue);
    print(queue);
}