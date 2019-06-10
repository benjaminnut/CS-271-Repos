#include <stdio.h>

int mystery1(char *s){

	int i;

	for (i=0 ; *s; i++, s++); /* empty body */

	return i;

}

int main(void){

	printf("%d\n", mystery1("asdx ddf gf"));

}


