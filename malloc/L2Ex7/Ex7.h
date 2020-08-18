#ifndef __Ex7_h_
#define __Ex7_h_

struct vetor_char;

typedef struct vetor_char tipoString;

tipoString *criar();

void criaString(tipoString *c, char *str, int len);

void imprime(tipoString *c);

void concatena(tipoString *c, char *str1, char *str2, int len1, int len2);

#endif