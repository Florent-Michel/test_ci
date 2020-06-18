#include <stdio.h>

int main(){

	FILE *f;
	int size;

	f = fopen("input.txt");
	fseek(f, 0L, SEEK_END);
	size = ftell(f);

	printf("%d\n", size);
	
	return 0;

}
