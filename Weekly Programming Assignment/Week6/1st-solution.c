#include <stdio.h>

int main() {
	FILE *inputfile_pointer = fopen("a.txt","r");
	
	int x;
	int y;

	fscanf(inputfile_pointer,"%d %d",&x,&y);
	fclose(inputfile_pointer);

	FILE *outputfile_pointer = fopen("b.txt","w");

	fprintf(outputfile_pointer,"%d",x+y);
	fclose(outputfile_pointer);
}
