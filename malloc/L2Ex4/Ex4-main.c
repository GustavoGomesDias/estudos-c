#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Ex4.h"

int main(){
	tipoString *c;
	char teste[100] = "Gustavo";
	c = criar();
	criaString(c, teste, 7);
	
	
	return 0;
}