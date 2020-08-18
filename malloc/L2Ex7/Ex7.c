#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Ex7.h"


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
	strcpy(c->p, str);
	c->p[len] = 0;
	c->tam = len;
}


void imprime(tipoString *c){
	printf("%s\n", c->p);
}

void concatena(tipoString *c, char *str1, char *str2, int len1, int len2){
	int i;
	char concatena[200];
	c->p = malloc(sizeof(char) * (len1 + len2 +1));	
	for(i = 0; i < len1; i++){
		concatena[i] = str1[i];
	}
	for(i = 0; i < len2; i++){
		concatena[len1+i] = str2[i];
	}
	strcpy(c->p,concatena);
	c->p[len1+len2] = 0;
	c->tam = len1 + len2;
}





















