#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

static int a = 0;

void increment(void){
	int b = 0;
	static c = 0;

	printf("a: %d, b: %d, c: %d\n", a, b, c);
	a++;
	b++;
	c++;
}

int main(int argc, char *argv[]) {
	int i;
	for(i = 0; i < 5; i++)	
	increment();
	system("pause");
	return (0);
}
