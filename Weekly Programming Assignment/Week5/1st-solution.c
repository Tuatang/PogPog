#include <stdio.h>
#include <string.h>

int main() {
	char ss[10001];
	printf("Input data string:\n");
	FILE *fpointa;
	fpointa = fopen("c:/temp/data.txt", "w");
	scanf(" %[^'.']s",ss);

	fprintf(fpointa,"%s",ss);
	fprintf(fpointa,".");
	fclose(fpointa);

	return 0;
}
