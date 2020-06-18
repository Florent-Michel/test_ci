#include <stdio.h>

int main(){

	FILE *input;
	int size;

	input = fopen("input.txt", "r");
	fseek(input, 0L, SEEK_END);
	size = ftell(input);

	printf("%d\n", size);
	
	fclose(input);
	
	return 0;

}
