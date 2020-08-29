#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cell.h"
#include "fila.h"

struct queue{
    Cell **start;
    Cell **end;  
};

Queue *createQueue(){
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    queue->start = malloc(sizeof(Cell *));
    queue->end = malloc(sizeof(Cell *));
    setEnd(queue, NULL);
    setStart(queue, NULL);
    return queue;
}

Cell *getStart(Queue *queue){
    return queue->start[0];
}

void setStart(Queue *queue, Cell *arg1){
    queue->start[0] = arg1;
}

Cell *getEnd(Queue *queue){
    return queue->end[0];
}

void setEnd(Queue *queue, Cell *arg1){
    queue->end[0] = arg1;
}

Queue *push(Queue *queue, info_t info){
    Cell *newCell = createCell();
    setInfo(newCell, info);
    Cell *tmp = getStart(queue);
    if(tmp == NULL){
        setStart(queue, newCell);
        setEnd(queue, newCell);
        return queue;
    }
    while (getNext(tmp) != NULL){
        tmp = getNext(tmp);
    }
    setNext(tmp, newCell);
    setEnd(queue, newCell);
    return queue;
}

void pop(Queue *queue){
    Cell *tmp = getStart(queue);
    setStart(queue, getNext(tmp));
    printf("%g foi retirado.\n", getInfo(tmp));
    setNext(tmp, NULL);
}

void print(Queue *queue){
    Cell *tmp = getStart(queue);
    while(tmp != NULL){
        printf("%g ", getInfo(tmp));
        tmp = getNext(tmp);
    }
    printf("\n");
}

void peek(Queue *queue){
    Cell *tmp = getStart(queue);
    printf("%g é o primeiro item da fila.", getInfo(tmp));
}
