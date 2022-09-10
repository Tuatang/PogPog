#include <stdio.h>
#include <string.h>

int main() {

	FILE *inputfile_pointer  = fopen("a.txt","r");
	
	char ss[10001];
	fscanf(inputfile_pointer,"%[^\n]s",ss);
	int x = 0,y = 0;
	int sign  = 1;
	int *receiver = &x;
	for(int i=0;i<strlen(ss);++i) {
		if(ss[i]>='0' && ss[i]<='9') {
			*receiver = *receiver*10 + sign*(ss[i]-'0');
		}
		else if(ss[i]=='-') sign = -1;
		else if(ss[i]==' ') receiver = &y, sign = 1;
	}
	fclose(inputfile_pointer);

	FILE *outputfile_pointer = fopen("b.txt","w");
	fprintf(outputfile_pointer,"%d",x+y);
	fclose(outputfile_pointer);
  
}
