#ifndef __fila__
#define __fila__
#include "cell.h"

struct queue;
typedef struct queue Queue;

Queue *createQueue();

Cell *getStart(Queue *queue);

void setStart(Queue *queue, Cell *arg1);

Cell *getEnd(Queue *queue);

void setEnd(Queue *queue, Cell *arg1);

Queue *push(Queue *queue, info_t info);

void pop(Queue *queue);

void print(Queue *queue);

void peek(Queue *queue);


#endif