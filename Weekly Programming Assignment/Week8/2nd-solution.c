#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	if(n>=1) {
		int arr[n+1][n+1];
		int eachValidSum = (n*n*n+n)/2;
		bool invalidChecker = true;
		bool cloop = true;
		
		for(int i=1; i<=n; ++i){
			int sum = 0; // Sum of row
			for(int j=1; j<=n; ++j) {
				int u;
				scanf("%d", &u);
				if(u<=n*n) {
					arr[i][j] = u;
				}
				else {
					cloop = false;
				}
				sum += u;
			}
			
			if(sum!=eachValidSum) {
				cloop = false;
				invalidChecker = false;
			}
		}

		int sumDL = 0; // Sum of diagonal Left

		int sumDR = n%2==0 ? 0 : arr[n/2+1][n/2+1]; // Sum of diagonal right

		for(int j=1; j<=n && cloop; ++j){
			int sumC = 0; // Sum of column		
			for(int i=1; i<=n; ++i) {
				sumC += arr[i][j];
				if(i==j) sumDL += arr[i][j];
				else if(i+j==n+1) sumDR += arr[i][j];
			}
			
			if(sumC != eachValidSum) {
				cloop = false;
				invalidChecker = false;
			}
		}
		
		if(sumDL != eachValidSum || sumDR != eachValidSum) invalidChecker = false;

		if(invalidChecker) printf("Yes");
		else printf("No");
	}

}
