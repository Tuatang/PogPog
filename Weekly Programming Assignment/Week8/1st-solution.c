#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	if(n>=1) {
		int validtotalSum = (n*n+n)*(n*n+1);
		int sum = 0;
		bool cloop = true;

		for(int i=1; i<=n && cloop; ++i){
			for(int j=1; j<=n; ++j) {
				int u;
				scanf("%d", &u);
				if(u<=n*n) {
					if(i+j==n+1 || i==j) {
						if(i==n/2+1 && n%2!=0) sum+=4*u;
						else sum+=3*u;
					}
					else sum+=2*u;
				}
				else {
					cloop = false;
					break;
				}
			}
		}

		if(sum==validtotalSum) printf("Yes");
		else printf("No");
	}
}
