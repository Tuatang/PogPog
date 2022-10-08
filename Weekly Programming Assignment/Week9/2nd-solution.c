#include <stdio.h>

double sqrt(double N) {
	if(N>=0) {
		
		double stN = N/2;
		
		while(stN * stN >= N && N) {
			stN/=2;
		}

		while(1 && N) {
			if(stN*stN >= N) {
				--stN;
				break;
			}
			++stN;
		}

		double i = stN;

		while(1) {
			if(i*i >= N) break;
			i+=0.0000001;
		}
		
		return i;
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
