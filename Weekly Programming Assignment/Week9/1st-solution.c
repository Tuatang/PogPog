#include <stdio.h>

double sqrt(double N) {
	if(N>=0) {
		
		double halfN = N/2;
		double clN = N == halfN || N == 1 ? N : halfN;
		
		int i= N == halfN || N == 1 ? 0 : 1000;

		while(i) {
	
			double dividedN = N/clN;
			clN = (clN + dividedN)/2;
			--i;
		}
		
		return clN;
	}
	else {
		printf("There is no square root of this number in Real numbers, Your number is : ");
		return N;
	}
}


int main() {
	double N;
	scanf("%lf",&N);
	printf("%lf",sqrt(N));
	return 0;
	
}
