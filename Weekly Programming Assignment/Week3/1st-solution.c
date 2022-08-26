#include <stdio.h>
#include <string.h>
int main() {
	char ss[10001];
	scanf("%[^\n]s",ss);
	int l=strlen(ss);
	int k=l;
	for(int i=0; i<l; ++i) {
		for(int j=0; j<k; ++j) {
			printf("%c",ss[j]);
		}
		--k;
		printf("\n");
	}
}
