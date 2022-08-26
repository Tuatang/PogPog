#include <stdio.h>
#include <string.h>
int main() {
	char ss[10001];
	scanf("%[^\n]s",ss);
	int l=strlen(ss);
	int i=0;
	while(l) {
		if(i>=l) {
			i=0;
			--l;
			printf("\n");
			continue;
		}
		else printf("%c",ss[i]);
		++i;
	}
}
