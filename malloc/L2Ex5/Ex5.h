#ifndef __Ex5_h_
#define __Ex5_h_

struct vetor_char;

typedef struct vetor_char tipoString;

tipoString *criar();

void criaString(tipoString *c, char *str, int len);

void imprime(tipoString *c);

#endif