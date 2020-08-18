#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Ex3.h"


struct vetor_char{
    char *p;
    int tam;
};

tipoString *criar(){
    tipoString *novo;
	novo = (tipoString *)malloc(sizeof(tipoString));
    novo->tam = 0;
    return novo;
}

void criaString(tipoString *c, char *str, int len){
	c->p = malloc(sizeof(char) * (len+1));
	stpcpy(c->p, str);
	c->p[len] = 0;
	c->tam = len;
}