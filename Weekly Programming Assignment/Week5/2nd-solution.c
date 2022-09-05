#include <stdio.h>
#include <string.h>

int main() {
	char ss[10001];
	int i=0;
	
	FILE *fpointa = fopen("c:/temp/data.txt","w");
	printf("Input data string:\n");
	scanf("%[^.]s",ss);
	
	while(i<strlen(ss)) {
		fprintf(fpointa,"%c",ss[i]);
		if(i==strlen(ss)-1) fprintf(fpointa,".");
		++i;
	}
		
	fclose(fpointa);

	return 0;	
}
