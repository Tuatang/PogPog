#include <stdio.h>
int main() {
	
	int n;
	scanf("%d",&n);
	int k=2*n-1;
	int lb=k/2;
	int rb=lb;
	
	for(int i=0;i<k;++i){
		if(i%2!=0) {
			printf("\n");
			continue;
		}
		else{
			for(int j=0;j<k;++j) {
				if(j>=lb && j<=rb) printf("*");
				else printf(" ");
			}
		}
		printf("\n");
		--lb;
		++rb;
	}
}
