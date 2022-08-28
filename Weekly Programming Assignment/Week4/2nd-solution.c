#include <stdio.h>
int main() {
	
	int n;
	scanf("%d",&n);
	int k=2*n-1;
	
	int bound = k/2-1;
	for(int i=0;i<n;i++) {
		for(int j=0;j<k;++j){
			if(j>bound && j<k-bound-1) printf("*");
			else printf(" ");
		}
		--bound;
		printf("\n");
	}

}
